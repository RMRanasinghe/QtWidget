/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 03:09:2013
 *Project: Qt widget for manipulatin plots
 *Objectave:Widget Tree structure for scroll area.
 *TODO: Transfer this class to octave init class and develop as a toolkit
 *lisence: GPL v2
 *
 */

#include "widgettreestruct.h"
#include "ui_widget.h"
#include <QFormLayout>
#include <QComboBox>


widgetTreeStruct::widgetTreeStruct()
{
    tree = new QFormLayout;

    QLineEdit* equation =  new QLineEdit();
    QLineEdit* label = new QLineEdit();
    QComboBox* color = new QComboBox();
    QComboBox* lineType = new QComboBox();
    QLabel* variable = new QLabel("Y:");

    tree->addWidget(new QLabel(QString("Graph Y:")));
    tree->addRow(variable,equation);
    tree->addRow(new QLabel("Label:"),label);
    tree->addRow(new QLabel("Color:"),color);
    tree->addRow(new QLabel("Line Type:"),lineType);
}


widgetTreeStruct::widgetTreeStruct(QString variableName)
{
    tree = new QFormLayout;

    QLineEdit* equation =  new QLineEdit();
    QLineEdit* label = new QLineEdit();
    QComboBox* color = new QComboBox();
    QComboBox* lineType = new QComboBox();
    QString variable = variableName;

    tree->addWidget(new QLabel(QString("Graph ").append(variableName).append(":")));
    tree->addRow(variable,equation);
    tree->addRow(new QLabel("Label:"),label);
    tree->addRow(new QLabel("Color:"),color);
    tree->addRow(new QLabel("Line Type:"),lineType);
}

QFormLayout* widgetTreeStruct::getTree(){
    return tree;
}
