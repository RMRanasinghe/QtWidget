/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 21:07:2013
 *Project: Qt widget for manipulatin plots
 *Objectave:main method of the QT standalone widget
 *TODO: Transfer this class to octave init class and develop as a toolkit
 *lisence: GPL v2
 *
 */

#include "widget.h"
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
