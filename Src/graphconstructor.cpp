/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 2:09:2013
 *Project: Qt widget for manipulatin plots
 *Objectave:keep the values of each graph.
 *TODO: Transfer this class to octave init class and develop as a toolkit
 *lisence: GPL v2
 *
 */

#include "graphconstructor.h"
#include "ui_widget.h"

//graphConstructor
graphConstructor::graphConstructor()
{
    graphConstructorInstance = new graphConstructor();
}
/*
 *Setter methods of graph properties
 */
void graphConstructor::setVariableName(QString name){
    variableName = name;
}

void graphConstructor::setColor(QString clr){
    color = clr;
}

void graphConstructor::setLabel(QString lbl){
    label = lbl;
}

void graphConstructor::setLineType(QString line){
    lineType = line;
}

void graphConstructor::setEquation(QString equ){
    equation = equ;
}

/*
 *Getter methods of graph properties.
 */

QString graphConstructor::getVariableName(){
    return variableName;
}

QString graphConstructor::getColor(){
    return color;
}

QString graphConstructor::getLabel(){
    return label;
}

QString graphConstructor::getLineType(){
    return lineType;
}

QString graphConstructor::getEquation(){
    return equation;
}

graphConstructor* graphConstructor::getInstance(){
    return graphConstructorInstance;
}




