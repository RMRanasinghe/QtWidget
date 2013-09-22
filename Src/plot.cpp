#include "plot.h"
#include "communicator.h"
#include "plotcommandgenarator.h"
#include "widgettreestruct.h"
#include <list>
#include <iostream>

using namespace std;

plot::plot()
{
    com = communicator().getInstance();
    gen = new PlotCommandGenarator();
    com->processWrite(gen->command_init());

}

void plot::setPlot(QString xUpper, QString xLower, QString xStep, std::list<widgetTreeStruct *> tree){

    com->processWrite(gen->SetX(xLower,xUpper,xStep));

    int counter = 0;
    QString plotArgument = "plot(";

    for(std::list<widgetTreeStruct *>::const_iterator iter= tree.begin();iter!= tree.end();++iter){

        com->processWrite(gen->setY(QString("y").append(QString::number(counter)),(*iter)->getEquation()));

        if(counter == 0){
            plotArgument.append("x,y0,");
            plotArgument.append("'");
            plotArgument.append((*iter)->getLineType());
            plotArgument.append((*iter)->getColor());
            plotArgument.append(";").append((*iter)->getLabel()).append(";");
            plotArgument.append("'");
        }

        else{
            plotArgument.append(",x,y").append(QString::number(counter)).append(",");
            plotArgument.append("'");
            plotArgument.append((*iter)->getLineType());
            plotArgument.append((*iter)->getColor());
            plotArgument.append(";").append((*iter)->getLabel()).append(";");
            plotArgument.append("'");
        }

        ++counter;

    }

    plotArgument.append(");");

    com->processWrite(plotArgument);
    com->processWrite(QString("print -dpng ../temp/temp.png;"));
    com->processWrite(QString("print -dpng ../temp/temp.png;"));
}
