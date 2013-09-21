/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 2:08:2013
 *Project: Qt widget for manipulatin plots
 *Objectave:widget class header file
 *TODO: Transfer this class to octave init class and develop as a toolkit
 *lisence: GPL v2
 *
 */

#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>

namespace Ui {
class Widget;
}

class Widget : public QMainWindow
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Widget *ui;

    int numberOfGraphs;
};

#endif // WIDGET_H
