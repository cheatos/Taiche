/*
    This file is part of Taiche.

    Taiche is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Taiche is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Taiche.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CLIENTFILE_H
#define CLIENTFILE_H
#include <QDir>
#include <QStringList>
#include <QString>

class clientFile
{
public:
    clientFile();

    //Vars
    QString clientName;
    QString clientAuthor;
    QString clientVersion;
    QString clientProcessName;
    QString clientQuery;
    QString clientHeaders;
    QString clientPrefix;
    QString clientPrefixType;
    QString clientPrefixLength;
    QString clientPrefixURLE;
    QString clientPrefixUCase;
    QString clientPrefixValue;
    QString clientKeyType;
    QString clientKeyLength;
    QString clientKeyURLE;
    QString clientKeyUCase;
    QString clientKeyValue;
    QString clientProtocolValue;
    QString clientHashUCase;

};

#endif // CLIENTFILE_H
