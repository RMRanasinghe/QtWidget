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
