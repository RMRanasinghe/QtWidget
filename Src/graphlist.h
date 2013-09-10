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
