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
    EvolveCloudFunctionObject

Description
    Basis for the other function objects here. Evaluates the most common options

SourceFiles
    EvolveCloudFunctionObject.C

Contributors/Copyright:
    2012-2014, 2016-2018 Bernhard F.W. Gschaider <bgschaid@hfd-research.com>

 SWAK Revision: $Id:  $
\*---------------------------------------------------------------------------*/

#ifndef EvolveCloudFunctionObject_H
#define EvolveCloudFunctionObject_H

#include "functionObject.H"
#include "dictionary.H"

#include "autoPtr.H"
#include "objectRegistry.H"
#include "volFields.H"

#include "swak.H"
#include "switchableNotImplemented.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

/*---------------------------------------------------------------------------*\
                           Class EvolveCloudFunctionObject Declaration
\*---------------------------------------------------------------------------*/

template<class CloudType>
class EvolveCloudFunctionObject
:
    public functionObject
{
    // Private Member Functions

    //- Disallow default bitwise copy construct
    EvolveCloudFunctionObject(const EvolveCloudFunctionObject&);

    //- Disallow default bitwise assignment
    void operator=(const EvolveCloudFunctionObject&);

    // Private data
    autoPtr<CloudType> cloud_;

    //- Input dictionary
    dictionary dict_;

    //- name of the region
    word regionName_;

    //- the registry
    const objectRegistry& obr_;

    //- name of the cloud
    word cloudName_;

    //- direction of gravity
    dimensionedVector g_;

#ifdef FOAM_FUNCTIONOBJECT_HAS_SEPARATE_WRITE_METHOD_AND_NO_START
    //- make sure that execute is not called twice at one time-step
    label lastTimeStepExecute_;
#endif

protected:

    //- get a reference to the field
    template <class FieldType >
    const FieldType &getField(const word &fieldName);

    const word &cloudName() const { return cloudName_; }

    autoPtr<CloudType> &cloud() { return cloud_; }

    const dimensionedVector &g() const { return g_; }

    const objectRegistry &obr() const { return obr_; }

#ifdef FOAM_FUNCTIONOBJECT_HAS_SEPARATE_WRITE_METHOD_AND_NO_START
    virtual bool start() = 0;
#endif

public:

    // Constructors

    //- Construct from components
    EvolveCloudFunctionObject
    (
        const word&,
        const Time&,
        const dictionary&
    );

    TypeName("EvolveCloudFunctionObject");

    // Member Functions

    // //- start is called at the start of the time-loop
    // virtual bool start();

    //- execute is called at each ++ or += of the time-loop
    virtual bool execute(bool forceWrite);

#ifdef FOAM_FUNCTIONOBJECT_EXECUTE_HAS_NO_FORCE
    bool execute()
        {
            return execute(false);
        }
#endif

#ifdef FOAM_FUNCTIONOBJECT_HAS_SEPARATE_WRITE_METHOD_AND_NO_START
    virtual bool execute() {
        return execute(false);
    }

    virtual bool write() {
        return execute(true);
    }
#endif

    //- Read and set the function object if it's data has changed
    virtual bool read(const dictionary& dict);

#ifdef FOAM_FUNCTIONOBJECT_NEEDS_UPDATEMESH
    // make functionObject happy but fail because this is not an implementation
    virtual void updateMesh(const mapPolyMesh&) {
        switchableNotImplemented(
            "EvolveCloudFunctionObject::updateMesh",
            dict_
        );
    }

    // make functionObject happy but fail because this is not an implementation
    virtual void movePoints(
#ifdef FOAM_MOVEPOINTS_GETS_POLYMESH
        const polyMesh&
#else
        const pointField&
#endif
    ) {
        switchableNotImplemented(
            "EvolveCloudFunctionObject::movePoints",
            dict_
        );
    }
#endif
};


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

#ifdef NoRepository
#   include "EvolveCloudFunctionObject.C"
#endif


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //
