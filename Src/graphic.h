/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 2:08:2013
 *Project: Qt widget for manipulatin plots
 *Objectave:graphic class header file
 *TODO: Transfer this class to octave init class and develop as a toolkit
 *lisence: GPL v2
 *
 */

#ifndef GRAPHIC_H
#define GRAPHIC_H
#include "ui_widget.h"
#include "widget.h"

class graphic
{
public:
    graphic();
    void setImage(QLabel* label);
    void deleteImage(QLabel* label);
};

#endif // GRAPHIC_H
