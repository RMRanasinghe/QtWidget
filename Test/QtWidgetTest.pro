#-------------------------------------------------
#
# Project created by QtCreator 2013-09-08T11:05:44
#
#-------------------------------------------------

QT       += testlib core gui widgets

TARGET = tst_qtwidgettesttest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_qtwidgettesttest.cpp \
    ../Src/widgettreestruct.cpp \
    ../Src/widget.cpp \
    ../Src/plotcommandgenarator.cpp \
    ../Src/graphlist.cpp \
    ../Src/graphic.cpp \
    ../Src/graphconstructor.cpp \
    ../Src/communicator.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

OTHER_FILES += \
    ../Src/QTWidget.pro.user \
    ../Src/QTWidget.pro

HEADERS += \
    ../Src/widgettreestruct.h \
    ../Src/widget.h \
    ../Src/plotcommandgenarator.h \
    ../Src/graphlist.h \
    ../Src/graphic.h \
    ../Src/graphconstructor.h \
    ../Src/communicator.h

FORMS += \
    ../Src/widget.ui
