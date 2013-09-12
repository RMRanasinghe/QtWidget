/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 2:08:2013
 *Project: Qt widget for manipulatin plots
 *Objectave:Keep the list of all graphs.
 *lisence: GPL v2
 *
 */
#include "graphlist.h"
#include <list>
#include "graphconstructor.h"

/*
 *Constructor of the graphlist class. This is a Singleton implemantation of graphlist class. we can refere graphListInstance
 *in every whare.
 */
graphList::graphList()
{
}

/*
 *This method should be called to add new graph to graphList. Here all the variables should be declared. If the variable is null
 *null variable should be add as variable.
 */
void graphList::addGraph(QString variableName,QString color,QString lineType,QString label,QString equation){
    graphConstructor* graph = new graphConstructor(); //new graph
    graph->setColor(color);//set color
    graph->setEquation(equation);//set equation
    graph->setLabel(label);//set label
    graph->setLineType(lineType);//set line type
    graph->setVariableName(variableName);//set variable name
}

//delete whole graphlist and add new graphlist
void graphList::deleteGraphList(){
    graphListInstance = new graphList();
}

//get the common instance of the graphlise.
graphList* graphList::getInstance(){

    //here creates graphList instance that can be accessed in every method.
    if(graphListInstance == NULL){
        graphListInstance = new graphList();
    }
    return graphListInstance;
}
