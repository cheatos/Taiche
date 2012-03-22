# -------------------------------------------------
# Project created by QtCreator 2010-02-25T17:42:57
# -------------------------------------------------
QT += network \
    xml
TARGET = qCheater
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    bt/metainfo.cpp \
    bt/bencodeparser.cpp \
    bt/tclient.cpp \
    bt/ClientsHelper.cpp
HEADERS += mainwindow.h \
    bt/metainfo.h \
    bt/bencodeparser.h \
    GZipHelper.h \
    bt/tclient.h \
    bt/ClientsHelper.h \
    mainwindow.h
FORMS += \
    mainwindow.ui
RC_FILE = icon.rc
