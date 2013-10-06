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
#include <QFormLayout>
#include "graphconstructor.h"
#include "widgettreestruct.h"

class graphList
{
public:
    graphList();
    std::list <graphConstructor *> graphLinkedList;
    void addGraph(QString variableName,QString color,QString lineType,QString label,QString equation);
    void deleteGraphList();
    static graphList* getInstance();
    std::list<graphConstructor *> getGraphList();
    std::list<widgetTreeStruct *> treeList;
    void addTree(widgetTreeStruct *tree);
    void getNewGraphlist();
private:
    static graphList* graphListInstance;
};

#endif // GRAPHLIST_H
