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
    2012-2013, 2016-2018 Bernhard F.W. Gschaider <bgschaid@hfd-research.com>

 SWAK Revision: $Id$
\*---------------------------------------------------------------------------*/

#include "surfaceValueMinimumPluginFunction.H"
#include "FieldValueExpressionDriver.H"

#include "addToRunTimeSelectionTable.H"

namespace Foam {

typedef surfaceValueMinimumPluginFunction<scalar> surfaceMinimumScalar;
defineTemplateTypeNameAndDebug(surfaceMinimumScalar,0);
addNamedToRunTimeSelectionTable(FieldValuePluginFunction, surfaceMinimumScalar , name, surfaceValueMinimumScalar);

typedef surfaceValueMinimumPluginFunction<vector> surfaceMinimumVector;
defineTemplateTypeNameAndDebug(surfaceMinimumVector,0);
addNamedToRunTimeSelectionTable(FieldValuePluginFunction, surfaceMinimumVector , name, surfaceValueMinimumVector);

typedef surfaceValueMinimumPluginFunction<tensor> surfaceMinimumTensor;
defineTemplateTypeNameAndDebug(surfaceMinimumTensor,0);
addNamedToRunTimeSelectionTable(FieldValuePluginFunction, surfaceMinimumTensor , name, surfaceValueMinimumTensor);

typedef surfaceValueMinimumPluginFunction<symmTensor> surfaceMinimumSymmTensor;
defineTemplateTypeNameAndDebug(surfaceMinimumSymmTensor,0);
addNamedToRunTimeSelectionTable(FieldValuePluginFunction, surfaceMinimumSymmTensor , name, surfaceValueMinimumSymmTensor);

typedef surfaceValueMinimumPluginFunction<sphericalTensor> surfaceMinimumSphericalTensor;
defineTemplateTypeNameAndDebug(surfaceMinimumSphericalTensor,0);
addNamedToRunTimeSelectionTable(FieldValuePluginFunction, surfaceMinimumSphericalTensor , name, surfaceValueMinimumSphericalTensor);


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

template<class Type>
surfaceValueMinimumPluginFunction<Type>::surfaceValueMinimumPluginFunction(
    const FieldValueExpressionDriver &parentDriver,
    const word &name
):
    GeneralSurfaceEvaluationPluginFunction<Type>(
        parentDriver,
        name
    )
{
}

// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

template<class Type>
void surfaceValueMinimumPluginFunction<Type>::doEvaluation()
{
    typedef typename GeneralSurfaceEvaluationPluginFunction<Type>::resultType rType;
    autoPtr<rType> pValueMinimum(
        new rType(
            IOobject(
                "surfaceValueMinimumInCell",
                this->mesh().time().timeName(),
                this->mesh(),
                IOobject::NO_READ,
                IOobject::NO_WRITE
            ),
            this->mesh(),
            dimensioned<Type>("no",dimless,pTraits<Type>::zero)
        )
    );

    const labelList &cells=this->meshCells();
    List<bool> here(pValueMinimum->size(),false);
    const Field<Type> vals=this->values();

    forAll(cells,i) {
        const label cellI=cells[i];

        if(cellI>=0) {
            if(here[cellI]) {
                pValueMinimum()[cellI]=min(
                    vals[i],
                    pValueMinimum()[cellI]
                );
            } else {
                here[cellI]=true;
                pValueMinimum()[cellI]=vals[i];
            }
        }
    }

    pValueMinimum->correctBoundaryConditions();

    this->result().setObjectResult(pValueMinimum);
}

// * * * * * * * * * * * * * * * Friend Operators  * * * * * * * * * * * * * //

} // namespace

// ************************************************************************* //
