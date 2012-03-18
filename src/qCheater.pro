# -------------------------------------------------
# Project created by QtCreator 2010-02-25T17:42:57
# -------------------------------------------------
QT += network \
    xml
TARGET = qCheater
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    populateclientfiles.cpp \
    bt/metainfo.cpp \
    bt/bencodeparser.cpp \
    clientfile.cpp
HEADERS += mainwindow.h \
    populateclientfiles.h \
    bt/metainfo.h \
    bt/bencodeparser.h \
    GZipHelper.h \
    clientfile.h
FORMS += mainwindow.ui
RC_FILE = icon.rc
