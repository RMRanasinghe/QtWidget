#ifndef PLOT_H
#define PLOT_H
#include "communicator.h"
#include "plotcommandgenarator.h"
#include "widgettreestruct.h"
#include <list>

class plot
{
public:
    plot();
    void setPlot(QString xUpper, QString xLower, QString xStep, std::list<widgetTreeStruct *> tree);
private:
    communicator* com;
    PlotCommandGenarator* gen;

};

#endif // PLOT_H
