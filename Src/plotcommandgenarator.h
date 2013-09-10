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
