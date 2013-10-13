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
#include "widgettreestruct.h"
#include <QComboBox>
#include <QFormLayout>
#include  "graphlist.h"
#include "plot.h"

using namespace std;
/*
 *constructor of the main widget window.
 */
Widget::Widget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    numberOfGraphs = 0; //initialize the number of graph
}
/*
 *Distructor of the main window.
 */
Widget::~Widget()
{
    delete ui;
}


/*
 *Add new graph button action listner
 */
void Widget::on_pushButton_clicked()
{
    /*
     *add New graph push button action lister.
     *should add new graph structure to the bottem of the scroll area.
     */
    ++ numberOfGraphs; //increment number of graphs

    graphList* graph_list = graphList().getInstance();

    widgetTreeStruct* tree = new widgetTreeStruct(QString::number(numberOfGraphs)); //initialize graph tree for one graph
    QFormLayout* layout = tree->getTree(); // get the instance
    graph_list->addTree(tree);

    ui->verticalLayout_2->addLayout(layout); //add to the vertical layout
}

/*
 *Plot graph button action listner
 */
void Widget::on_pushButton_3_clicked()
{
    setStatus("Wait...");
    ui->status_label->repaint();


    QString status;

    plot* plot_instance = new plot();
    if(graphList().getInstance()->treeList.size()==0){
        setStatus("Add at least one graph...");
        return;
    }
    status = plot_instance->setPlot(ui->lineEdit->text(),ui->lineEdit_2->text(),ui->lineEdit_3->text(),graphList().getInstance()->treeList);

    /*
     *create graphic object instance and set the label as the image in the temp variable
     */
    graphic* gp = new graphic();
    graphic g= *gp;

    g.setImage(ui->label);

    if(status == "Success"){
        setStatus("Plot ready...");
    }
    else{
        ui->label->setStyleSheet("QLabel {color : red; }");
        ui->label->setText(status);//set image
        setStatus("Error...");
        communicator * com;
        com = communicator().getInstance();
        com->reset();
    }
}

/*
 *exit button
 */
void Widget::on_pushButton_2_clicked()
{
    exit(0);
}

/*
 *Reset button
 */
void Widget::on_pushButton_4_clicked()
{
    remove(ui->verticalLayout_2);
    numberOfGraphs = 0;
    graphList* graph_list = graphList().getInstance();
    graph_list->getNewGraphlist();
}

void Widget::remove(QLayout* layout)
{
    QLayoutItem* child;
    while(layout->count()!=0)
    {
        child = layout->takeAt(0);
        if(child->layout() != 0)
        {
            remove(child->layout());
        }
        else if(child->widget() != 0)
        {
            delete child->widget();
        }

        delete child;
    }
}

void Widget::setStatus(QString str){
   ui->status_label->setText(str);
}
