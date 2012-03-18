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

#ifndef POPULATECLIENTFILES_H
#define POPULATECLIENTFILES_H

#include <QMainWindow>
#include <QMessageBox>
#include <QStringList>
#include <QDir>
#include <QtXml>
#include <QApplication>

class populateClientFiles : public QMainWindow
{
public:
     QStringList popClientFiles();
};

#endif // POPULATECLIENTFILES_H