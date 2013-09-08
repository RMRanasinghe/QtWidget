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

Widget::Widget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    communicator* cm =new communicator();
    cm->processWrite("x=-10:0.01:10;");
    cm->processWrite("y=exp(x);");
    cm->processWrite("set(gcf,'Visible','off');");
    cm->processWrite("plot(x,y);");
    cm->processWrite("print -dpng /home/rama/s.png;");
    cout << cm->processRead().toStdString();
}

