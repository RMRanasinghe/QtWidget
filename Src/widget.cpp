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

    plot* plot_instance = new plot();
    plot_instance->setPlot(ui->lineEdit->text(),ui->lineEdit_2->text(),ui->lineEdit_3->text(),graphList().getInstance()->treeList);

    /*
     *create graphic object instance and set the label as the image in the temp variable
     */
    graphic* gp = new graphic();
    graphic g= *gp;

    g.setImage(ui->label);

    //exit(0);
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

}
