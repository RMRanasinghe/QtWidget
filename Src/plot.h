#ifndef PLOT_H
#define PLOT_H
#include "communicator.h"
#include "plotcommandgenarator.h"

class plot
{
public:
    plot();
private:
    communicator* com;
    PlotCommandGenarator* gen;

};

#endif // PLOT_H
