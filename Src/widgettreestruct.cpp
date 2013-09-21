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


widgetTreeStruct::widgetTreeStruct(QString variableName)
{
    tree = new QFormLayout; //tree structure for one graph

    QLineEdit* equation =  new QLineEdit(); //test area for write equation
    QLineEdit* label = new QLineEdit(); // label of the graph
    QComboBox* color = new QComboBox(); //color selector
    QComboBox* lineType = new QComboBox(); //line type selector
    QString variable = variableName; //this variable name is the number of the graph

    /*
     *color selector menu.
     */

    //initialize pixmaps
    QPixmap black(40,40);
    QPixmap red(40,40);
    QPixmap green(40,40);
    QPixmap blue(40,40);
    QPixmap magenta(40,40);
    QPixmap cyan(40,40);

    //fill colors
    black.fill(Qt::black);
    red.fill(Qt::red);
    green.fill(Qt::green);
    blue.fill(Qt::blue);
    magenta.fill(Qt::magenta);
    cyan.fill(Qt::cyan);

    //add menu items
    color->addItem(black,"        Black");
    color->addItem(red,"        Red");
    color->addItem(green,"        Green");
    color->addItem(blue,"        Blue");
    color->addItem(magenta,"        Magenta");
    color->addItem(cyan,"        cyan");


    /*
     *Line type selector
     */
    lineType->addItem("_______________");
    lineType->addItem("..............................");
    lineType->addItem("*************");
    lineType->addItem("ooooooooooooo");
    lineType->addItem("xxxxxxxxxxxxxxx");
    lineType->addItem("^^^^^^^^^^^");


    /*
     *add tree widgets to tree
     */
    tree->addWidget(new QLabel(QString("Graph ").append(variableName).append(":"))); //set the topic of tree
    tree->addRow(new QLabel("y:"),equation);
    tree->addRow(new QLabel("Label:"),label);
    tree->addRow(new QLabel("Color:"),color);
    tree->addRow(new QLabel("Line Type:"),lineType);
}

QFormLayout* widgetTreeStruct::getTree(){
    return tree;
}
