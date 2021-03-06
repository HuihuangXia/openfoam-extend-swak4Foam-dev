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
    volumeFieldFunctionObject

Description
    Basis for functionObjects that might work on every field on a volume

SourceFiles
    volumeFieldFunctionObject.C

Contributors/Copyright:
    2008-2011, 2013, 2016-2018 Bernhard F.W. Gschaider <bgschaid@hfd-research.com>

 SWAK Revision: $Id$
\*---------------------------------------------------------------------------*/

#ifndef volumeFieldFunctionObject_H
#define volumeFieldFunctionObject_H

#include "timelineFunctionObject.H"

#include "tensor.H"
#include "sphericalTensor.H"
#include "symmTensor.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

/*---------------------------------------------------------------------------*\
                           Class volumeFieldFunctionObject Declaration
\*---------------------------------------------------------------------------*/

class volumeFieldFunctionObject
:
    public timelineFunctionObject
{
    // Private Member Functions

    //- Disallow default bitwise copy construct
    volumeFieldFunctionObject(const volumeFieldFunctionObject&);

    //- Disallow default bitwise assignment
    void operator=(const volumeFieldFunctionObject&);

    //- Names of fields to probe
    wordList fieldNames_;

    //- Indices (into fieldNames_) of scalar/vector/tensor fields
    wordList scalarFields_;
    wordList vectorFields_;
    wordList sphericalTensorFields_;
    wordList symmTensorFields_;
    wordList tensorFields_;

     //- Process and write field
    template<class T>
    void processAndWrite(const word& fieldName);

    //- Process and write field
    template<class T>
    void processAndWrite(const wordList& typeFields);

    template<class T>
    void findFields(wordList& typeFieldNames, boolList& foundFields);

//     //- process single field on all patches
//     template <class T>
//     Field<T> process(const word& fieldName) const;

protected:

    //- Names of the files
    virtual wordList fileNames();

    // This is clumsy, but virtual+templated member functions are not allowed
    virtual scalarField process(const word& fieldName,scalar preset)=0;
    virtual Field<vector> process(const word& fieldName,vector preset)=0;
    virtual Field<sphericalTensor> process(const word& fieldName,sphericalTensor preset)=0;
    virtual Field<symmTensor> process(const word& fieldName,symmTensor preset)=0;
    virtual Field<tensor> process(const word& fieldName,tensor preset)=0;

public:

    //- Runtime type information
    TypeName("volumeFieldFunctionObject");


    // Constructors

    //- Construct from components
    volumeFieldFunctionObject
    (
        const word&,
        const Time&,
        const dictionary&
    );


    // Member Functions

    //- start is called at the start of the time-loop
    virtual bool start();

    virtual void writeSimple();
};


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#ifdef NoRepository
#   include "volumeFieldFunctionObjectTemplates.C"
#endif


#endif

// ************************************************************************* //
