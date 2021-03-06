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

namespace Foam {


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

template<class T>
void StackExpressionResult::pushInternal(ExpressionResult &atEnd)
{
    Dbug << "pushInternal(ExpressionResult &atEnd) "
            << pTraits<T>::typeName << endl;

    Field<T> oldValue(getResult<T>(false));
    autoPtr<Field<T> > pNewValue(new Field<T>(oldValue.size()+1));
    Field<T> &newValue=pNewValue();

    forAll(oldValue,i) {
        newValue[i]=oldValue[i];
    }
    newValue[oldValue.size()]=atEnd.getResult<T>(true)()[0];

    Dbug << "New value:" << newValue << endl;

    this->setResult(
        pNewValue.ptr(),
        this->isPoint()
    );
}

template<class T>
ExpressionResult StackExpressionResult::popInternal()
{
    Field<T> oldValue(getResult<T>(false));
    autoPtr<Field<T> > pNewValue(new Field<T>(oldValue.size()-1));
    Field<T> &newValue=pNewValue();

    forAll(newValue,i) {
        newValue[i]=oldValue[i];
    }
    Field<T> result(1,oldValue[newValue.size()]);

    this->setResult(
        pNewValue.ptr(),
        this->isPoint()
    );

    return ExpressionResult(result);
}

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

}

// ************************************************************************* //
