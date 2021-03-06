/*---------------------------------------------------------------------------*\
|                       _    _  _     ___                       | The         |
|     _____      ____ _| | _| || |   / __\__   __ _ _ __ ___    | Swiss       |
|    / __\ \ /\ / / _` | |/ / || |_ / _\/ _ \ / _` | '_ ` _ \   | Army        |
|    \__ \\ V  V / (_| |   <|__   _/ / | (_) | (_| | | | | | |  | Knife       |
|    |___/ \_/\_/ \__,_|_|\_\  |_| \/   \___/ \__,_|_| |_| |_|  | For         |
|                                                               | OpenFOAM    |
-------------------------------------------------------------------------------
License
    This file is part of swak4Foam.

    swak4Foam is free software; you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by the
    Free Software Foundation; either version 2 of the License, or (at your
    option) any later version.

    swak4Foam is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with swak4Foam; if not, write to the Free Software Foundation,
    Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Contributors/Copyright:
    2008-2011, 2013, 2015-2018 Bernhard F.W. Gschaider <bgschaid@hfd-research.com>

 SWAK Revision: $Id$
\*---------------------------------------------------------------------------*/

#include "foamVersion4swak.H"

#if FOAM_VERSION4SWAK_MAJOR<2 || (FOAM_VERSION4SWAK_MAJOR==2 && FOAM_VERSION4SWAK_MINOR<2)

#include "recalcThermoHFunctionObject.H"
#include "addToRunTimeSelectionTable.H"

#include "polyMesh.H"
#include "IOmanip.H"
#include "swakTime.H"

#include "basicThermo.H"

#include "fixedEnthalpyFvPatchScalarField.H"
#include "gradientEnthalpyFvPatchScalarField.H"
#include "mixedEnthalpyFvPatchScalarField.H"

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

namespace Foam
{

    defineTypeNameAndDebug(recalcThermoHFunctionObject, 0);

    addToRunTimeSelectionTable
    (
        functionObject,
        recalcThermoHFunctionObject,
        dictionary
    );

// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

recalcThermoHFunctionObject::recalcThermoHFunctionObject
(
    const word &name,
    const Time& t,
    const dictionary& dict
)
:
    updateSimpleFunctionObject(name,t,dict)
{
#ifdef FOAM_FUNCTIONOBJECT_HAS_SEPARATE_WRITE_METHOD_AND_NO_START
    start();
#endif
}

void recalcThermoHFunctionObject::recalc()
{
    basicThermo &thermo=const_cast<basicThermo&>(
        obr_.lookupObject<basicThermo>("thermophysicalProperties")
    );
    Info << "Recalculating enthalpy h" << endl;

    const volScalarField &T=thermo.T();
    volScalarField &h=thermo.h();

    labelList allCells(T.size());
    forAll(allCells,cellI) {
        allCells[cellI]=cellI;
    }
    h.internalField()=thermo.h(
        T.internalField(),
        allCells
    );
    forAll(h.boundaryField(), patchi)
    {
        h.boundaryField()[patchi] ==
            thermo.h(
                T.boundaryField()[patchi],
                patchi
            );
    }

    // hBoundaryCorrection
    volScalarField::GeometricBoundaryField& hbf = h.boundaryField();

    forAll(hbf, patchi)
    {
        if (isA<gradientEnthalpyFvPatchScalarField>(hbf[patchi]))
        {
            refCast<gradientEnthalpyFvPatchScalarField>(hbf[patchi]).gradient()
                = hbf[patchi].fvPatchField::snGrad();
        }
        else if (isA<mixedEnthalpyFvPatchScalarField>(hbf[patchi]))
        {
            refCast<mixedEnthalpyFvPatchScalarField>(hbf[patchi]).refGrad()
                = hbf[patchi].fvPatchField::snGrad();
        }
    }

}

// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

} // namespace Foam

#endif

// ************************************************************************* //
