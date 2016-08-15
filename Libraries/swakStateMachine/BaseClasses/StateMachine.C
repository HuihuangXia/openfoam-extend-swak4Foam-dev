/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           |
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is based on OpenFOAM.

    OpenFOAM is free software; you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by the
    Free Software Foundation; either version 2 of the License, or (at your
    option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM; if not, write to the Free Software Foundation,
    Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Contributors/Copyright:
    2013, 2015 Bernhard F.W. Gschaider <bgschaid@hfd-research.com>

 SWAK Revision: $Id$
\*---------------------------------------------------------------------------*/

#include "StateMachine.H"

namespace Foam {

    defineTypeNameAndDebug(StateMachine, 0);

    HashPtrTable<StateMachine,word> StateMachine::allMachines_;

// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

StateMachine &StateMachine::NewMachine(
    const dictionary &dict,
    const fvMesh &mesh
) {
    autoPtr<StateMachine> m(
        new StateMachine(
            dict,
            mesh
        )
    );
    const word name=m->name();
    if(
        allMachines_.found(
            m->name()
        )
    ) {
        FatalErrorIn("StateMachine::NewMachine")
            << "A machine " << m->name() << " already exists"
                << endl
                << exit(FatalError);
    } else {
        allMachines_.insert(
            m->name(),
            m.ptr()
        );
    }
    return machine(name);
}

StateMachine &StateMachine::machine(
    const word &name
) {
    if(
        !allMachines_.found(name)
    ) {
        FatalErrorIn("StateMachine::machine")
            << "No machine " << name << " found. " << nl
                << "Available: " << allMachines_.sortedToc()
                << endl
                << exit(FatalError);
    }
    return *allMachines_[name];
}

StateMachine::StateMachine(
    const dictionary &dict,
    const fvMesh &mesh
):
    driver_(
        CommonValueExpressionDriver::New(
            dict,
            mesh
        )
    ),
    mesh_(mesh),
    names_(
        dict.lookup("states")
    ),
    machineName_(
        dict.lookup("machineName")
    ),
    initialState_(
        stateCode(
            dict.lookup("initialState")
        )
    ),
    state_(initialState_),
    lastStateChange_(
        mesh.time().value()
    )
{
    List<dictionary> data(
        dict.lookup("transitions")
    );
    transitions_.resize(data.size());
    forAll(data,i) {
        transitions_.set(
            i,
            new StateTransition(
                *this,
                data[i]
            )
        );
    }
}

StateMachine::StateTransition::StateTransition(
     StateMachine &mach,
    const dictionary &data
):
    machine_(mach),
    description_(
        data.lookup("description")
    ),
    expression_(
        data.lookup("expression"),
        data
    ),
    logicalAccumulation_(
        LogicalAccumulationNamedEnum::names[
            data.lookup("logicalAccumulation")
        ]
    )
{
    word fromName(data.lookup("from"));
    word toName(data.lookup("to"));
    if(!machine_.hasState((fromName))) {
        FatalErrorIn("StateMachine::StateTransition::StateTransition")
            << "Problem in " << data.name() << ": State "
                << fromName << " not a valid state"
                << endl
                << exit(FatalError);
    } else {
        from_=machine_.stateCode(fromName);
    }
    if(!machine_.hasState((toName))) {
        FatalErrorIn("StateMachine::StateTransition::StateTransition")
            << "Problem in " << data.name() << ": State "
                << toName << " not a valid state"
                << endl
                << exit(FatalError);
    } else {
        to_=machine_.stateCode(toName);
    }
}

bool StateMachine::StateTransition::operator()()
{
    CommonValueExpressionDriver &driver=machine_.driver();

    driver.parse(expression_);

    if(
        driver.CommonValueExpressionDriver::getResultType()
        !=
        pTraits<bool>::typeName
    ) {
        FatalErrorIn("StateMachine::StateTransition::operator()()")
            << "Logical Expression " << expression_
                << " evaluates to type "
                << driver.CommonValueExpressionDriver::getResultType()
                << " when it should be " << pTraits<bool>::typeName
                << endl
                << exit(FatalError);
    }

    bool result=false;

    switch(logicalAccumulation_) {
        case LogicalAccumulationNamedEnum::logAnd:
            result=driver.getReduced(andOp<bool>(),true);
            break;
        case LogicalAccumulationNamedEnum::logOr:
            result=driver.getReduced(orOp<bool>(),false);
            break;
        default:
            FatalErrorIn("StateMachine::StateTransition::operator()()")
                << "Unimplemented logical accumulation "
                    << LogicalAccumulationNamedEnum::names[logicalAccumulation_]
                    << endl
                    << exit(FatalError);
    }

    return result;
}

string StateMachine::step() {
    OStringStream out;
    out << machineName_ << ": ";
    label oldState=state_;
    string reason="";

    driver().clearVariables();

    forAll(transitions_,i) {
        StateTransition &trans=transitions_[i];
        if(
            trans.from()==state_
        ) {
            if(trans()) {
                reason=trans.description();
                state_=trans.to();
                break;
            }
        }
    }

    if(
        state_
        !=
        oldState
    ) {
        out << "Stayed in state " << stateName(state_);
    } else {
        out << "Changed state from " << stateName(oldState)
            << " to " << stateName(state_)
            << " (rule: " << reason << ")"
            << " after "
            << (mesh_.time().value()-lastStateChange_) << "s";
        lastStateChange_=mesh_.time().value();
    }
    return out.str();
}

// * * * * * * * * * * * * * * * Member Operators  * * * * * * * * * * * * * //


// * * * * * * * * * * * * * * * Friend Functions  * * * * * * * * * * * * * //


// * * * * * * * * * * * * * * * Friend Operators  * * * * * * * * * * * * * //

} // namespace

// ************************************************************************* //