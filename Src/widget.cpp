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
    exit(0);
}
/*
 *Bottom Cansel button click action. This has been set to exit the window.
 *
 */
void Widget::on_buttonBox_rejected()
{
    exit(0);
}
