#-------------------------------------------------
#
# Project created by QtCreator 2013-09-01T17:55:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTWidget
TEMPLATE = app


SOURCES +=\
        widget.cpp \
    communicator.cpp \
    graphic.cpp \
    plotcommandgenarator.cpp \
    graphlist.cpp \
    graphconstructor.cpp \
    widgettreestruct.cpp \
    main.cpp

HEADERS  += widget.h \
    communicator.h \
    graphic.h \
    plotcommandgenarator.h \
    graphconstructor.h \
    graphlist.h \
    widgettreestruct.h

FORMS    += widget.ui

OTHER_FILES += \
    QTWidget.pro.user
