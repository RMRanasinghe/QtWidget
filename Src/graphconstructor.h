/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 2:08:2013
 *Project: Qt widget for manipulatin plots
 *Objectave:graphConstructor class header file
 *TODO: Transfer this class to octave init class and develop as a toolkit
 *lisence: GPL v2
 *
 */

#ifndef GRAPHCONSTRUCTOR_H
#define GRAPHCONSTRUCTOR_H
#include "ui_widget.h"

class graphConstructor
{
public:
    graphConstructor();
    void setVariableName(QString name);
    void setColor(QString clr);
    void setLabel(QString lbl);
    void setLineType(QString line);
    void setEquation(QString equ);
    QString getVariableName();
    QString getColor();
    QString getLabel();
    QString getLineType();
    QString getEquation();

private:
    QString variableName; //variable name of y axis, y1,y2,y3...
    QString color;//Line color,0-15 colors
    QString lineType;//line types. line, - , *, + etc
    QString label; //name of the label.
    QString equation;
};

#endif // GRAPHCONSTRUCTOR_H
