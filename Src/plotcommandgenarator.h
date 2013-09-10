/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 2:08:2013
 *Project: Qt widget for manipulatin plots
 *Objectave:PlotCommandGenarator class header file
 *TODO: Transfer this class to octave init class and develop as a toolkit
 *lisence: GPL v2
 *
 */

#ifndef PLOTCOMMANDGENARATOR_H
#define PLOTCOMMANDGENARATOR_H
#include "ui_widget.h"

class PlotCommandGenarator
{
public:
    PlotCommandGenarator();
    QString SetX();
    QString SetX(QString bound);
    QString SetX(QString lowerBound,QString upperBound);
    QString SetX(QString lowerBound,QString upperBound,QString stepSize);
    QString setY(QString equation);
    QString setY(QString variableName, QString equation);
    QString command_init();
};

#endif // PLOTCOMMANDGENARATOR_H
