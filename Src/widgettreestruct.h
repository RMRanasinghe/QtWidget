/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 03:09:2013
 *Project: Qt widget for manipulatin plots
 *Objectave:Header file of Widget Tree structure for scroll area.
 *TODO: Transfer this class to octave init class and develop as a toolkit
 *lisence: GPL v2
 *
 */

#ifndef WIDGETTREESTRUCT_H
#define WIDGETTREESTRUCT_H
#include <QFormLayout>
#include <QLabel>
#include <QComboBox>

class widgetTreeStruct
{
public:
    widgetTreeStruct(QString variableName);
    QFormLayout *getTree();
    QString getEquation();
    QString getColor();
    QString getLineType();
    QString getLabel();
private:
    QFormLayout* tree;
    QLabel* topic;
    QComboBox* lineType;
    QComboBox* color ;
    QLineEdit* label ;
    QLineEdit* equation ;
};

#endif // WIDGETTREESTRUCT_H
