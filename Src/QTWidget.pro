#-------------------------------------------------
#
# Project created by QtCreator 2013-09-01T17:55:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTWidget
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    communicator.cpp \
    graphic.cpp \
    plotcommandgenarator.cpp \
    graphconstructor.cpp

HEADERS  += widget.h \
    communicator.h \
    graphic.h \
    plotcommandgenarator.h \
    graphconstructor.h

FORMS    += widget.ui

OTHER_FILES += \
    QTWidget.pro.user
