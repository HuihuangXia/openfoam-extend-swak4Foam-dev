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

Class
    solveAreaLaplacianPDE

Description
    Function object that solves the laplacian (Poisson) equation

SourceFiles
    solveAreaLaplacianPDE.C

Contributors/Copyright:
    2011, 2013-2014, 2016-2018 Bernhard F.W. Gschaider <bgschaid@hfd-research.com>

 SWAK Revision: $Id:  $
\*---------------------------------------------------------------------------*/

#ifndef solveAreaLaplacianPDE_H
#define solveAreaLaplacianPDE_H

#include "solvePDECommonFiniteArea.H"

namespace Foam
{

class solveAreaLaplacianPDE
:
    public solvePDECommonFiniteArea
{
    //- Disallow default bitwise copy construct
    solveAreaLaplacianPDE(const solveAreaLaplacianPDE&);

    //- Disallow default bitwise assignment
    void operator=(const solveAreaLaplacianPDE&);

protected:

    //- the coefficent for the time-derivative
    exprString rhoExpression_;
    dimensionSet rhoDimension_;

    //- the coefficient for the laplacian term
    exprString lambdaExpression_;
    dimensionSet lambdaDimension_;

    //- the right hand side
    exprString sourceExpression_;
    dimensionSet sourceDimension_;

    //- the right hand side
    exprString sourceImplicitExpression_;
    dimensionSet sourceImplicitDimension_;

    //- do the actual solving
    void solve();

public:

    //- Runtime type information
    TypeName("solveAreaLaplacianPDE");


    // Constructors

    //- Construct for given objectRegistry and dictionary.
    //  Allow the possibility to load fields from files
    solveAreaLaplacianPDE
    (
        const word& name,
        const objectRegistry&,
        const dictionary&,
        const bool loadFromFiles = false
    );


    //- Destructor
    virtual ~solveAreaLaplacianPDE();


    // Member Functions

    //- Read the forces data
    virtual void read(const dictionary&);

};

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif
