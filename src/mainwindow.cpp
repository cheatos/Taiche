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

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bt/bencodeparser.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    populateClientFiles xx;
    ui->comboBox->addItems(xx.popClientFiles());

ui->logList->append(tr("CheatMaster Started!"));
ui->logList->append(tr("Version 0.1 INTERNAL"));

connect(&socket, SIGNAL(connected()), this, SLOT(socketRequestData()));
connect(&socket, SIGNAL(readyRead()), this, SLOT(socketRequestDone()));

//setTorrent("C:/Dokumente und Einstellungen/Admin/Desktop/xxx.torrent");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_browseTorrent_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Choose a torrent file"),
                                                    lastDirectory,
                                                    tr("Torrents (*.torrent);; All files (*.*)"));
    if (fileName.isEmpty())
        return;
    lastDirectory = QFileInfo(fileName).absolutePath();
    setTorrent(fileName);

    //enable start button
    ui->actionButton->setEnabled(true);


}

static QString stringNumber(qint64 number)
{
    QString tmp;
    if (number > (1024 * 1024 * 1024))
        tmp.sprintf("%.2fGB", number / (1024.0 * 1024.0 * 1024.0));
    else if (number > (1024 * 1024))
        tmp.sprintf("%.2fMB", number / (1024.0 * 1024.0));
    else if (number > (1024))
        tmp.sprintf("%.2fKB", number / (1024.0));
    else
        tmp.sprintf("%d bytes", int(number));
    return tmp;
}

static QString stringNumberBytes(qint64 number)
{
    QString tmp;
        tmp.sprintf("%d", int(number));
    return tmp;
}


void MainWindow::setTorrent(const QString &torrentFile)
{
    if (torrentFile.isEmpty()) {
        ui->actionButton->setEnabled(false);
        return;
    }


    if (!torrentFile.isEmpty())
        lastDirectory = QFileInfo(torrentFile).absolutePath();

    if (lastDestinationDirectory.isEmpty())
        lastDestinationDirectory = lastDirectory;

    MetaInfo metaInfo;
    QFile torrent(torrentFile);
    if (!torrent.open(QFile::ReadOnly) || !metaInfo.parse(torrent.readAll())) {
        ui->actionButton->setEnabled(false);
        return;
    }

    ui->tFileName->setText(torrentFile);
    ui->lblVTracker->setText(metaInfo.announceUrl());

    //if (metaInfo.comment().isEmpty())
        //ui.commentLabel->setText("<unknown>");
    //else
      //  ui.commentLabel->setText(metaInfo.comment());
    //if (metaInfo.createdBy().isEmpty())
    //    ui.creatorLabel->setText("<unknown>");
    //else
    /*    ui.creatorLabel->setText(metaInfo.createdBy()); */

    //ch shit
    leftSizeBytes=stringNumberBytes(metaInfo.totalSize());

    ui->lblVSize->setText(stringNumber(metaInfo.totalSize()));

    // Calculate SHA1 hash of the "info" section in the torrent
    QByteArray infoValue = metaInfo.infoValue();
    //ui->lblVHash->setText( QCryptographicHash::hash(infoValue, QCryptographicHash::Sha1));
    infoValue = QCryptographicHash::hash(infoValue, QCryptographicHash::Sha1);

    QByteArray infoHash = infoValue;

    QByteArray encodedSum = infoHash.toPercentEncoding();

    //QString encodedSum;
    //for (int i = 0; i < infoHash.size(); ++i) {
    //    encodedSum += '%';
    //    encodedSum += QString::number(infoHash[i], 16).right(2).rightJustified(2, '0');
   // }

    //ch shit
    encodedSumX=encodedSum;//.toLower();


QString displayUIHash = encodedSum;
displayUIHash=displayUIHash.toUpper();
ui->lblVHash->setText(displayUIHash.replace(QString("%"),QString("")));



     /*
    if (metaInfo.fileForm() == MetaInfo::SingleFileForm) {
        ui.torrentContents->setHtml(metaInfo.singleFile().name);
    } else {
        QString html;
        foreach (MetaInfoMultiFile file, metaInfo.multiFiles()) {
            QString name = metaInfo.name();
            if (!name.isEmpty()) {
                html += name;
                if (!name.endsWith('/'))
                    html += '/';
            }
            html += file.path + "<br>";
        }
        ui.torrentContents->setHtml(html);
    }*/

    QFileInfo info(torrentFile);
    //ui->tFileName->setText(info.absolutePath());

    //enable Start Button
    ui->actionButton->setEnabled(true);
}

void MainWindow::on_exitButton_clicked()
{

    //QMessageBox::aboutQt( this, "Qt Application Example" );

}


void MainWindow::on_actionButton_clicked()
{

    sendAnnounce();

}

void MainWindow::sendAnnounce(){

    socket.close();
    query="";

    // Prepare connection details
    QString fullUrl = ui->lblVTracker->text();
    QUrl url(fullUrl);
    QString passkey = "?";
    if (fullUrl.contains("?passkey")) {
        passkey = ui->lblVTracker->text().mid(fullUrl.indexOf("?passkey"), -1);
        passkey += "&";
    }

    QVariant xx;


    query += "GET " + url.path(); //.toLatin1();
    query += passkey;
    query += "info_hash=" + encodedSumX;
    //query += "&peer_id=" + ConnectionManager::instance()->clientId();

    //QByteArray peerIDenc;
    //peerIDenc.append( ui->txtPeerID->text());
    //query += "&peer_id=" + peerIDenc.toPercentEncoding("-._~");

    query += "&peer_id=" + ui->txtPeerID->text();
    xx.setValue(ui->spinPort->value());
    query += "&port=" + xx.toString();
    query += "&uploaded=0";
    query += "&downloaded=0&left=" + leftSizeBytes +  "&corrupt=0&key=" + ui->txtKey->text() + "&event=started&numwant=" + ui->txtNumwant->text();
    query += "&compact=1&no_peer_id=1 HTTP/1.1";

    xx.setValue(url.port());

    if (xx.toString()== "-1" ){
        query +="\r\nHost: " + url.host();
        query +="\r\nUser-Agent: uTorrent/2020(19648)";
        query +="\r\nAccept-Encoding: gzip\r\n\r\n";
        socket.connectToHost(url.host(),80);
    }else{
    query +="\r\nHost: " + url.host() + ":" + xx.toString();
    query +="\r\nUser-Agent: uTorrent/2020(19648)";
    query +="\r\nAccept-Encoding: gzip\r\n\r\n";
    socket.connectToHost(url.host(),url.port());
}


    /*QVariant xx;
    xx.setValue(query);
QMessageBox x;
x.setText(xx.toString());
x.exec();*/



}



/*void MainWindow::httpRequestDone(bool error)
{
    if (lastTrackerRequest) {
        emit stopped();
        return;
    }

    if (error) {
        emit connectionError(http.error());
        return;
    }

    QByteArray response = http.readAll();
    http.abort();

    }*/

    /*if (dict.contains("peers")) {
        // store it
        peers.clear();
        QVariant peerEntry = dict.value("peers");
        if (peerEntry.type() == QVariant::List) {
            QList<QVariant> peerTmp = peerEntry.toList();
            for (int i = 0; i < peerTmp.size(); ++i) {
                TorrentPeer tmp;
                QMap<QByteArray, QVariant> peer = qVariantValue<QMap<QByteArray, QVariant> >(peerTmp.at(i));
                tmp.id = QString::fromUtf8(peer.value("peer id").toByteArray());
                tmp.address.setAddress(QString::fromUtf8(peer.value("ip").toByteArray()));
                tmp.port = peer.value("port").toInt();
                peers << tmp;
            }
        } else {
            QByteArray peerTmp = peerEntry.toByteArray();
            for (int i = 0; i < peerTmp.size(); i += 6) {
                TorrentPeer tmp;
                uchar *data = (uchar *)peerTmp.constData() + i;
                tmp.port = (int(data[4]) << 8) + data[5];
                uint ipAddress = 0;
                ipAddress += uint(data[0]) << 24;
                ipAddress += uint(data[1]) << 16;
                ipAddress += uint(data[2]) << 8;
                ipAddress += uint(data[3]);
                tmp.address.setAddress(ipAddress);
                peers << tmp;
            }
        }
        emit peerListUpdated(peers);
    }
}*/

void MainWindow::socketRequestDone()
{
    //read from the server

    QByteArray response;
    response="";

while ( socket.canReadLine()) {
     response += socket.readLine();
}

socket.close();


    /*unsigned char * c = (unsigned char *)(response.data());

      char plainText[]="oi";


      CA2GZIP gzip(plainText,strlen(plainText));
                                   // do compressing here;
      LPGZIP pgzip=gzip.pgzip;     // pgzip is zipped data pointer,
                                   // you can use it directly
      int len=gzip.Length;         // Length is length of zipped
                                   // data;


      CGZIP2A plain(pgzip,len);    // do uncompressing here

      char *pplain=plain.psz;      // psz is plain data pointer
      int  aLen=plain.Length;      // Length is length of unzipped
                                   // data.*/

char recgzip[]="";

CGZIP2A plain((unsigned char *)recgzip,sizeof(recgzip));
char *pplain=plain.psz;
      QMessageBox loai;
      loai.setText(pplain);
      loai.exec();


//response = response.mid(response.indexOf("d"), -1);


    ui->logList->append(response);

    BencodeParser parser;
    if (!parser.parse(response)) {
        QMessageBox y;
        y.setText("Error parsing bencode response from tracker:");
        y.exec();
        //qWarning("Error parsing bencode response from tracker: %s",
                 //qPrintable(parser.errorString()));
        return;
    }

    QMap<QByteArray, QVariant> dict = parser.dictionary();

    if (dict.contains("failure reason")) {
        // no other items are present
        ui->logList->append(QString::fromUtf8(dict.value("failure reason").toByteArray()));
        return;
    }

    if (dict.contains("warning message")) {
        // continue processing
        ui->logList->append(QString::fromUtf8(dict.value("warning message").toByteArray()));
    }

    if (dict.contains("tracker id")) {
        // store it
        trackerId = dict.value("tracker id").toByteArray();
    }

    if (dict.contains("interval")) {
        // Mandatory item
        if (requestIntervalTimer != -1)
            killTimer(requestIntervalTimer);
        requestIntervalTimer = startTimer(dict.value("interval").toInt() * 1000);

        QVariant xx;
                xx=dict.value("interval").toInt() * 1000;
        QMessageBox xxx;
        xxx.setText(xx.toString());
        xxx.exec();
    }//}

}

void MainWindow::socketRequestData()
{

    ui->logList->append(query);
    socket.write(query);
}
