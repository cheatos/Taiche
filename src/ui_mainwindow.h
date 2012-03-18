/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 14. Jul 21:49:58 2010
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QToolButton *browseTorrent;
    QLineEdit *tFileName;
    QWidget *gridLayoutWidget;
    QFormLayout *formLayout;
    QLabel *lblTracker;
    QLabel *lblVTracker;
    QLabel *lblSize;
    QLabel *lblVSize;
    QLabel *lblHash;
    QLabel *lblVHash;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *lblUpSpeed;
    QDoubleSpinBox *spinUp;
    QLabel *lblT1;
    QDoubleSpinBox *spinUp2;
    QLabel *lblDownSpeed;
    QDoubleSpinBox *spinDown;
    QLabel *lblT2;
    QDoubleSpinBox *spinDown2;
    QLabel *lblPercentage;
    QDoubleSpinBox *spinPerc;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLabel *lblTUploaded;
    QLabel *lblVTUploaded;
    QLabel *lblTDownloaded;
    QLabel *lblVTDownloaded;
    QLabel *lblNAI;
    QLabel *lblVNAI;
    QLabel *lblSeeders;
    QLabel *lblVSeeders;
    QLabel *lblSeeders_2;
    QLabel *lblVLeechers;
    QLabel *lblTRT;
    QLabel *lblVTRT;
    QLabel *label_5;
    QWidget *tab_2;
    QGroupBox *groupBox_4;
    QLabel *label_22;
    QComboBox *comboBox;
    QCommandLinkButton *commandLinkButton_3;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *txtPeerID;
    QLabel *label_2;
    QLineEdit *txtKey;
    QLabel *label_3;
    QSpinBox *spinPort;
    QLabel *label_4;
    QLineEdit *txtNumwant;
    QCheckBox *checkBox;
    QWidget *tab_3;
    QTextEdit *logList;
    QPushButton *pushButton_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QPushButton *actionButton;
    QPushButton *exitButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(673, 301);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 10, 571, 281));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 531, 111));
        browseTorrent = new QToolButton(groupBox);
        browseTorrent->setObjectName(QString::fromUtf8("browseTorrent"));
        browseTorrent->setGeometry(QRect(500, 20, 25, 19));
        tFileName = new QLineEdit(groupBox);
        tFileName->setObjectName(QString::fromUtf8("tFileName"));
        tFileName->setGeometry(QRect(10, 20, 481, 20));
        tFileName->setReadOnly(true);
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 50, 511, 53));
        formLayout = new QFormLayout(gridLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        lblTracker = new QLabel(gridLayoutWidget);
        lblTracker->setObjectName(QString::fromUtf8("lblTracker"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblTracker);

        lblVTracker = new QLabel(gridLayoutWidget);
        lblVTracker->setObjectName(QString::fromUtf8("lblVTracker"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lblVTracker);

        lblSize = new QLabel(gridLayoutWidget);
        lblSize->setObjectName(QString::fromUtf8("lblSize"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lblSize);

        lblVSize = new QLabel(gridLayoutWidget);
        lblVSize->setObjectName(QString::fromUtf8("lblVSize"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lblVSize);

        lblHash = new QLabel(gridLayoutWidget);
        lblHash->setObjectName(QString::fromUtf8("lblHash"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lblHash);

        lblVHash = new QLabel(gridLayoutWidget);
        lblVHash->setObjectName(QString::fromUtf8("lblVHash"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lblVHash);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 130, 246, 101));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(13, 19, 227, 74));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblUpSpeed = new QLabel(layoutWidget);
        lblUpSpeed->setObjectName(QString::fromUtf8("lblUpSpeed"));

        gridLayout->addWidget(lblUpSpeed, 0, 0, 1, 1);

        spinUp = new QDoubleSpinBox(layoutWidget);
        spinUp->setObjectName(QString::fromUtf8("spinUp"));

        gridLayout->addWidget(spinUp, 0, 1, 1, 1);

        lblT1 = new QLabel(layoutWidget);
        lblT1->setObjectName(QString::fromUtf8("lblT1"));

        gridLayout->addWidget(lblT1, 0, 2, 1, 1);

        spinUp2 = new QDoubleSpinBox(layoutWidget);
        spinUp2->setObjectName(QString::fromUtf8("spinUp2"));

        gridLayout->addWidget(spinUp2, 0, 3, 1, 1);

        lblDownSpeed = new QLabel(layoutWidget);
        lblDownSpeed->setObjectName(QString::fromUtf8("lblDownSpeed"));

        gridLayout->addWidget(lblDownSpeed, 1, 0, 1, 1);

        spinDown = new QDoubleSpinBox(layoutWidget);
        spinDown->setObjectName(QString::fromUtf8("spinDown"));

        gridLayout->addWidget(spinDown, 1, 1, 1, 1);

        lblT2 = new QLabel(layoutWidget);
        lblT2->setObjectName(QString::fromUtf8("lblT2"));

        gridLayout->addWidget(lblT2, 1, 2, 1, 1);

        spinDown2 = new QDoubleSpinBox(layoutWidget);
        spinDown2->setObjectName(QString::fromUtf8("spinDown2"));

        gridLayout->addWidget(spinDown2, 1, 3, 1, 1);

        lblPercentage = new QLabel(layoutWidget);
        lblPercentage->setObjectName(QString::fromUtf8("lblPercentage"));

        gridLayout->addWidget(lblPercentage, 2, 0, 1, 1);

        spinPerc = new QDoubleSpinBox(layoutWidget);
        spinPerc->setObjectName(QString::fromUtf8("spinPerc"));
        spinPerc->setMaximum(100);

        gridLayout->addWidget(spinPerc, 2, 1, 1, 1);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(260, 130, 281, 141));
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 261, 110));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lblTUploaded = new QLabel(layoutWidget1);
        lblTUploaded->setObjectName(QString::fromUtf8("lblTUploaded"));

        gridLayout_3->addWidget(lblTUploaded, 0, 0, 1, 1);

        lblVTUploaded = new QLabel(layoutWidget1);
        lblVTUploaded->setObjectName(QString::fromUtf8("lblVTUploaded"));

        gridLayout_3->addWidget(lblVTUploaded, 0, 1, 1, 1);

        lblTDownloaded = new QLabel(layoutWidget1);
        lblTDownloaded->setObjectName(QString::fromUtf8("lblTDownloaded"));

        gridLayout_3->addWidget(lblTDownloaded, 1, 0, 1, 1);

        lblVTDownloaded = new QLabel(layoutWidget1);
        lblVTDownloaded->setObjectName(QString::fromUtf8("lblVTDownloaded"));

        gridLayout_3->addWidget(lblVTDownloaded, 1, 1, 1, 1);

        lblNAI = new QLabel(layoutWidget1);
        lblNAI->setObjectName(QString::fromUtf8("lblNAI"));

        gridLayout_3->addWidget(lblNAI, 2, 0, 1, 1);

        lblVNAI = new QLabel(layoutWidget1);
        lblVNAI->setObjectName(QString::fromUtf8("lblVNAI"));

        gridLayout_3->addWidget(lblVNAI, 2, 1, 1, 1);

        lblSeeders = new QLabel(layoutWidget1);
        lblSeeders->setObjectName(QString::fromUtf8("lblSeeders"));

        gridLayout_3->addWidget(lblSeeders, 3, 0, 1, 1);

        lblVSeeders = new QLabel(layoutWidget1);
        lblVSeeders->setObjectName(QString::fromUtf8("lblVSeeders"));

        gridLayout_3->addWidget(lblVSeeders, 3, 1, 1, 1);

        lblSeeders_2 = new QLabel(layoutWidget1);
        lblSeeders_2->setObjectName(QString::fromUtf8("lblSeeders_2"));

        gridLayout_3->addWidget(lblSeeders_2, 4, 0, 1, 1);

        lblVLeechers = new QLabel(layoutWidget1);
        lblVLeechers->setObjectName(QString::fromUtf8("lblVLeechers"));

        gridLayout_3->addWidget(lblVLeechers, 4, 1, 1, 1);

        lblTRT = new QLabel(layoutWidget1);
        lblTRT->setObjectName(QString::fromUtf8("lblTRT"));

        gridLayout_3->addWidget(lblTRT, 5, 0, 1, 1);

        lblVTRT = new QLabel(layoutWidget1);
        lblVTRT->setObjectName(QString::fromUtf8("lblVTRT"));

        gridLayout_3->addWidget(lblVTRT, 5, 1, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 240, 71, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 531, 201));
        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 20, 46, 13));
        comboBox = new QComboBox(groupBox_4);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 20, 471, 22));
        commandLinkButton_3 = new QCommandLinkButton(groupBox_4);
        commandLinkButton_3->setObjectName(QString::fromUtf8("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(347, 158, 172, 35));
        layoutWidget2 = new QWidget(groupBox_4);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 50, 511, 100));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        txtPeerID = new QLineEdit(layoutWidget2);
        txtPeerID->setObjectName(QString::fromUtf8("txtPeerID"));

        gridLayout_2->addWidget(txtPeerID, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        txtKey = new QLineEdit(layoutWidget2);
        txtKey->setObjectName(QString::fromUtf8("txtKey"));

        gridLayout_2->addWidget(txtKey, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        spinPort = new QSpinBox(layoutWidget2);
        spinPort->setObjectName(QString::fromUtf8("spinPort"));
        spinPort->setMaximum(65535);
        spinPort->setValue(32124);

        gridLayout_2->addWidget(spinPort, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        txtNumwant = new QLineEdit(layoutWidget2);
        txtNumwant->setObjectName(QString::fromUtf8("txtNumwant"));

        gridLayout_2->addWidget(txtNumwant, 3, 1, 1, 1);

        checkBox = new QCheckBox(groupBox_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 150, 221, 18));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        logList = new QTextEdit(tab_3);
        logList->setObjectName(QString::fromUtf8("logList"));
        logList->setGeometry(QRect(10, 10, 531, 231));
        logList->setFrameShape(QFrame::StyledPanel);
        logList->setReadOnly(true);
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(470, 250, 75, 23));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, QString());
        actionButton = new QPushButton(centralWidget);
        actionButton->setObjectName(QString::fromUtf8("actionButton"));
        actionButton->setEnabled(false);
        actionButton->setGeometry(QRect(590, 10, 75, 23));
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(590, 40, 75, 23));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CheatMaster v.0.1", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Torrent ", 0, QApplication::UnicodeUTF8));
        browseTorrent->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        lblTracker->setText(QApplication::translate("MainWindow", "Tracker:", 0, QApplication::UnicodeUTF8));
        lblVTracker->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        lblSize->setText(QApplication::translate("MainWindow", "Size:", 0, QApplication::UnicodeUTF8));
        lblVSize->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        lblHash->setText(QApplication::translate("MainWindow", "Hash:", 0, QApplication::UnicodeUTF8));
        lblVHash->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Cheating Options", 0, QApplication::UnicodeUTF8));
        lblUpSpeed->setText(QApplication::translate("MainWindow", "Upload Speed:", 0, QApplication::UnicodeUTF8));
        lblT1->setText(QApplication::translate("MainWindow", "To", 0, QApplication::UnicodeUTF8));
        lblDownSpeed->setText(QApplication::translate("MainWindow", "Download Speed:", 0, QApplication::UnicodeUTF8));
        lblT2->setText(QApplication::translate("MainWindow", "To", 0, QApplication::UnicodeUTF8));
        lblPercentage->setText(QApplication::translate("MainWindow", "Percentage:", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Stats", 0, QApplication::UnicodeUTF8));
        lblTUploaded->setText(QApplication::translate("MainWindow", "Total Uploaded:", 0, QApplication::UnicodeUTF8));
        lblVTUploaded->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        lblTDownloaded->setText(QApplication::translate("MainWindow", "Total Downloaded:", 0, QApplication::UnicodeUTF8));
        lblVTDownloaded->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        lblNAI->setText(QApplication::translate("MainWindow", "Next Announce In:", 0, QApplication::UnicodeUTF8));
        lblVNAI->setText(QApplication::translate("MainWindow", "00:00", 0, QApplication::UnicodeUTF8));
        lblSeeders->setText(QApplication::translate("MainWindow", "Seeders:", 0, QApplication::UnicodeUTF8));
        lblVSeeders->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        lblSeeders_2->setText(QApplication::translate("MainWindow", "Leechers:", 0, QApplication::UnicodeUTF8));
        lblVLeechers->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        lblTRT->setText(QApplication::translate("MainWindow", "Total Running Time:", 0, QApplication::UnicodeUTF8));
        lblVTRT->setText(QApplication::translate("MainWindow", "00:00", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Client to use:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Main", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Client Spoofing", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "Client:", 0, QApplication::UnicodeUTF8));
        commandLinkButton_3->setText(QApplication::translate("MainWindow", "Test Announce", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "peer_id:", 0, QApplication::UnicodeUTF8));
        txtPeerID->setText(QApplication::translate("MainWindow", "-UT2020-%c0L1%e9%29%d3%22%81%c7%2c%d5%24", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "key:", 0, QApplication::UnicodeUTF8));
        txtKey->setText(QApplication::translate("MainWindow", "091711BB", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "port:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "numwant:", 0, QApplication::UnicodeUTF8));
        txtNumwant->setText(QApplication::translate("MainWindow", "200", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "numwant randomization (Azureus, Vuze)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Export As", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Log", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Tools", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionButton->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
