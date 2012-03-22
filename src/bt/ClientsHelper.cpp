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

#include "ClientsHelper.h"


enum PIDType { ALPHANUMERIC, HEX };

typedef struct BittorrentClient
{
    QString BName;
    QString Version;
    QString Author;
    int PIDLength;
    PIDType PIDTy;
} BTClient;

QStringList ClientsHelper::GetClients()
{
    QStringList list;

    //QDir
    QString clientFilesPath;
    clientFilesPath=QApplication::applicationDirPath() + "/client-files/" ;
    QDir myDir(clientFilesPath);

    //Add .client filter
    QStringList filters;
    filters << "*.client";
    myDir.setNameFilters(filters);

    //Get client files
    QStringList clients = myDir.entryList();	// filter only c++ files

    int i;
    for(i=0;i<=clients.count() - 1;i++){

        QDomDocument domDoc;
        QFile file(QApplication::applicationDirPath() + "/client-files/" + clients.at(i));
        file.open(QFile::ReadOnly);

        domDoc.setContent(&file);

        QDomElement domElement =domDoc.documentElement();
        list.append(domElement.attribute("name") + " ,Author: " + domElement.attribute("author") + " ,v" + domElement.attribute("version") );
    }

    return list;
}

