#include <QString>
#include <QtTest>
#include "../Src/plotcommandgenarator.h"

class QtWidgetTestTest : public QObject
{
    Q_OBJECT

public:
    QtWidgetTestTest();
    PlotCommandGenarator* plot_command_genarator ;

private Q_SLOTS:
    void TestPlotCommandGenaratorSetX();
    void TestPlotCommandGenaratorSetY();
};

QtWidgetTestTest::QtWidgetTestTest()
{
    plot_command_genarator = new PlotCommandGenarator();
}

void QtWidgetTestTest::TestPlotCommandGenaratorSetX()
{
    /*
     *Test Comand genarator set x command genarating method overloads
     */

    //overload that has no method argument
    QCOMPARE(plot_command_genarator->SetX(),QString("x=-10:0.01:10;"));

    //If there is bound value as an argument
    QCOMPARE(plot_command_genarator->SetX(QString("10")),QString("x=-10:0.01:10;"));
    QCOMPARE(plot_command_genarator->SetX(QString("1")),QString("x=-1:0.01:1;"));
    QCOMPARE(plot_command_genarator->SetX(QString(".999")),QString("x=-.999:0.01:.999;"));
    QCOMPARE(plot_command_genarator->SetX(QString("100000000000")),QString("x=-100000000000:0.01:100000000000;"));

    //If there are upper bound and lover bound as arguments.
    QCOMPARE(plot_command_genarator->SetX(QString("-10"),QString("10")),QString("x=-10:0.01:10;"));
    QCOMPARE(plot_command_genarator->SetX(QString("-1"),QString("10")),QString("x=-1:0.01:10;"));
    QCOMPARE(plot_command_genarator->SetX(QString("4"),QString("10")),QString("x=4:0.01:10;"));
    QCOMPARE(plot_command_genarator->SetX(QString("-.111111"),QString(".999999")),QString("x=-.111111:0.01:.999999;"));

    //If the upperBound
    QCOMPARE(plot_command_genarator->SetX(QString("-10"),QString("10"),QString("0.01")),QString("x=-10:0.01:10;"));
    QCOMPARE(plot_command_genarator->SetX(QString("-10"),QString("10"),QString("0.1")),QString("x=-10:0.1:10;"));
    QCOMPARE(plot_command_genarator->SetX(QString(".1"),QString("0.9"),QString("0.2")),QString("x=.1:0.2:0.9;"));
    QCOMPARE(plot_command_genarator->SetX(QString("-1000000"),QString("1000000"),QString("1")),QString("x=-1000000:1:1000000;"));
}
void QtWidgetTestTest::TestPlotCommandGenaratorSetY()
{

}
QTEST_APPLESS_MAIN(QtWidgetTestTest)

#include "tst_qtwidgettesttest.moc"
