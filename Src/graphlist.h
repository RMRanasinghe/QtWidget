/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 2:08:2013
 *Project: Qt widget for manipulatin plots
 *Objectave:graphiclist class header file
 *TODO: Transfer this class to octave init class and develop as a toolkit
 *lisence: GPL v2
 *
 */
#ifndef GRAPHLIST_H
#define GRAPHLIST_H
#include <list>
#include "graphconstructor.h"

class graphList
{
public:
    graphList();
    std::list <graphConstructor> l;
    void addGraph(QString variableName,QString color,QString lineType,QString label,QString equation);
    void deleteGraphList();
    graphList* getInstance();
private:
    graphList* graphListInstance;
};

#endif // GRAPHLIST_H
