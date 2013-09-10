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
#include <QComboBox>

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
    /*
     *Y axis items. This should be changed and added. TODO: should change
     *
     */
    ui->verticalLayout_2->addWidget(new QLabel("Y:"),0,Qt::AlignBottom);
    ui->verticalLayout_2->addWidget(new QLineEdit(),0,Qt::AlignBottom);
    ui->verticalLayout_2->addWidget(new QLabel("Label:"),0,Qt::AlignBottom);
    ui->verticalLayout_2->addWidget(new QLineEdit(),0,Qt::AlignBottom);
    ui->verticalLayout_2->addWidget(new QLabel("Color:"),0,Qt::AlignBottom);
    ui->verticalLayout_2->addWidget(new QComboBox(),0,Qt::AlignBottom);
    ui->verticalLayout_2->addWidget(new QLabel("Line Type:"),0,Qt::AlignBottom);
    ui->verticalLayout_2->addWidget(new QComboBox(),0,Qt::AlignBottom);
    /*
     *Here verticalLayout_2 is the layout inside the scroll plane. TODO: all the widgets added to the
     *scorll plane should be added to this layout.
     */

    //TODO: to add multiple graphs this function should be added.

    //syntax reference
    //ui->verticalLayout_2->addWidget(new QPushButton("saman"),0,Qt::AlignBottom);
}
