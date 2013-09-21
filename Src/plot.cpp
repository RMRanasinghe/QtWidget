#include "plot.h"
#include "communicator.h"

plot::plot()
{
    com = communicator().getInstance();
    gen = new PlotCommandGenarator();
    com->processWrite(gen->command_init());

}


