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

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
