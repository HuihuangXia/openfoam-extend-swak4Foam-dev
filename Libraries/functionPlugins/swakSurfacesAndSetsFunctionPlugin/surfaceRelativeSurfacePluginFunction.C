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

#include "surfaceRelativeSurfacePluginFunction.H"
#include "FieldValueExpressionDriver.H"

#include "addToRunTimeSelectionTable.H"

namespace Foam {

defineTypeNameAndDebug(surfaceRelativeSurfacePluginFunction,0);
addNamedToRunTimeSelectionTable(FieldValuePluginFunction, surfaceRelativeSurfacePluginFunction , name, surfaceRelativeSurface);


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

surfaceRelativeSurfacePluginFunction::surfaceRelativeSurfacePluginFunction(
    const FieldValueExpressionDriver &parentDriver,
    const word &name
):
    GeneralSurfacesPluginFunction(
        parentDriver,
        name,
        "volScalarField",
        string("surfaceName primitive word")
    )
{
}

// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

void surfaceRelativeSurfacePluginFunction::doEvaluation()
{
    autoPtr<volScalarField> pRelativeSurface(
        new volScalarField(
            IOobject(
                "surfaceRelativeSurfaceInCell",
                mesh().time().timeName(),
                mesh(),
                IOobject::NO_READ,
                IOobject::NO_WRITE
            ),
            mesh(),
            dimensionedScalar("no",dimless,0)
        )
    );

    const labelList &cells=meshCells();
    const scalarField &area=theSurface().magSf();
    const scalarField &vol=mesh().V();

    forAll(cells,i) {
        const label cellI=cells[i];

        if(cellI>=0) {
            pRelativeSurface()[cellI]+=area[i]/vol[cellI];
        }
    }

    pRelativeSurface->correctBoundaryConditions();

    result().setObjectResult(pRelativeSurface);

}

// * * * * * * * * * * * * * * * Friend Operators  * * * * * * * * * * * * * //

} // namespace

// ************************************************************************* //
