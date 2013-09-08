/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 2:08:2013
 *Project: Qt widget for manipulatin plots
 *Objectave:Handling graphic objects in toolkit
 *lisence: GPL v2
 *
 */

#include "graphic.h"
#include "ui_widget.h"

//constructor. TODO:set as singleton class
graphic::graphic()
{
}

/*
 *This method get the graphic image as png image and set it to the
 *lable. Before set as image it scaled and after set the image distroy the
 *created objects.
 */
void graphic::setImage(QLabel* label){

    QPixmap* original = new QPixmap("/home/rama/Downloads/virus.png");//TODO:this path should changed to the temp folter
    QPixmap scaled(original->scaled(label->height(),label->width(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation));//scale the pixmap to the lable size and width

    label->setPixmap(scaled);//set image

    //delete the created pixmap objects
    delete(original);
}

/*
 *If the image need to be reset to null image, This method can be used to do so.
 *This method set original pixmap to null and set pixmap.
 */
void graphic::deleteImage(QLabel* label){
    QPixmap* original= new QPixmap();
    label->setPixmap(*original);
    delete(original);
}
