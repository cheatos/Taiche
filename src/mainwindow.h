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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QFileDialog>
#include <QtXml>
#include <QWizard>
#include <QHttp>
#include <QMessageBox>
#include <qpushbutton.h>
#include <QCryptographicHash>
#include "bt/metainfo.h"
#include "populateclientfiles.h"
#include <QTcpSocket>
//#include <QTextStream>
#include "GZipHelper.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setTorrent(const QString &torrentFile);
    QString encodedSumX;
    QByteArray query;
    QTcpSocket socket;
    QString leftSizeBytes;
protected:
    void changeEvent(QEvent *e);
    Ui::MainWindow *ui;
private:
    QString destinationDirectory;
    QString lastDirectory;
    QString lastDestinationDirectory;

    int requestInterval;
    int requestIntervalTimer;
    MetaInfo metaInfo;
    QByteArray trackerId;
    qint64 uploadedBytes;
    qint64 downloadedBytes;
    qint64 length;

private slots:
    void on_actionButton_clicked();
    void on_exitButton_clicked();
    void on_browseTorrent_clicked();
    void sendAnnounce();

    void socketRequestDone();
    void socketRequestData();
signals:


};

#endif // MAINWINDOW_H
