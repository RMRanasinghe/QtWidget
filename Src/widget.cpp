/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 27:07:2013
 *Project: Qt widget for manipulatin plots
 *Objectave:Main UI class
 *TODO: Transfer this class to octave init class and develop as a toolkit
 *lisence: GPL v2
 *
 */

#include "widget.h"
#include "ui_widget.h"
#include "communicator.h"
#include "iostream"
#include "graphic.h"

using namespace std;
/*
 *constructor of the main widget window.
 */
Widget::Widget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}
/*
 *Distructor of the main window.
 */
Widget::~Widget()
{
    delete ui;
}

/*
 *Bottem OK button click action.
 */
void Widget::on_buttonBox_accepted()
{
    /*
     *create graphic object instance and set the label as the image in the temp variable
     */
    graphic* gp = new graphic();
    graphic g= *gp;

    g.setImage(ui->label);

    //exit(0);
}
/*
 *Bottom Cansel button click action. This has been set to exit the window.
 *
 */
void Widget::on_buttonBox_rejected()
{
    exit(0);
}

void Widget::on_pushButton_clicked()
{
}
