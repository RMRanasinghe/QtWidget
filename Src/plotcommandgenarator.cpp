/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 2:08:2013
 *Project: Qt widget for manipulatin plots
 *Objectave: Genarate required commands of the plot() function.
 *lisence: GPL v2
 *
 */

/*
 *octave plot function overloads:
    — Function File: plot (y)
    — Function File: plot (x, y)
    — Function File: plot (x, y, property, value, ...)
    — Function File: plot (x, y, fmt)
    — Function File: plot (h, ...)
    — Function File: h = plot (...)
 */

#include "plotcommandgenarator.h"
#include "ui_widget.h"

PlotCommandGenarator::PlotCommandGenarator()
{
}

QString PlotCommandGenarator::command_init(){
    /*
     *This function set the graph visiblitiy off. This function should be called
     *before calling any plot function. Othervise the Octave process Started may show
     *the GPL plot window
     */
    QString cmd = "set(gcf,'Visible','off')";
    return cmd.append(";");
}

QString PlotCommandGenarator::SetX(){
    /*
     *If theres is no constrains to X range the default values of x should be
     *set as the x range.
     */

    /*
     *TODO:Here I have set the lower bound to -10 and upper bound to +10 and the step size
     *to 0.01. Its good if these values are taken from a config file.
     */
    QString lowerBound = "-10";
    QString upperBound= "10";
    QString stepSize = "0.01";
    QString cmd = "x=";

    cmd = cmd.append(lowerBound).append(":").append(stepSize).append(":").append(upperBound);

    return cmd.append(";");
}

QString PlotCommandGenarator::SetX(QString bound){
    /*
     *Here bound is set as the upper and lower bounds. Default step size set to the step size.
     *Here I have set 0.01 to default step size.
     */

    QString lowerBound = QString("-").append(bound);
    QString upperBound = bound;
    QString stepSize = "0.01";
    QString cmd = "x=";

    cmd = cmd.append(lowerBound).append(":").append(stepSize).append(":").append(upperBound);

    return cmd.append(";");
}

QString PlotCommandGenarator::SetX(QString lowerBound,QString upperBound){

    /*
     *If the upper and lower bounds are set this function should be called.
     *Default step size is used as the stepSize. Here I have used step size as 0.01
     *TODO:It's better if the default vales are taken from a config file.
     */

    QString stepSize = "0.01";
    QString cmd = "x=";

    cmd = cmd.append(lowerBound).append(":").append(stepSize).append(":").append(upperBound);

    return cmd.append(";");
}

QString PlotCommandGenarator::SetX(QString lowerBound,QString upperBound,QString stepSize){

    /*
     *If all the lowerBound upperBound stepSize vales are given this method calls.
     */

    QString cmd = "x=";

    cmd = cmd.append(lowerBound).append(":").append(stepSize).append(":").append(upperBound);

    return cmd.append(";");
}

QString PlotCommandGenarator::setY(QString equation){

    /*
     *Here we should provide octave type equation to obtain the setY command.
     *TODO: Improvment- use normal equation and genarate octave type command.
     */

    QString cmd = "y=";

    cmd = cmd.append(equation);

    return cmd.append(";");
}

QString PlotCommandGenarator::setY(QString variableName,QString equation){
    /*
     *This method overload is used if the variable name is different from y.
     *we can use any variable name here and use plot function.
     */

    QString cmd = variableName.append("=");

    cmd =cmd.append(equation);

    return cmd.append(";");
}


