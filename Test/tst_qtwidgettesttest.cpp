#include <QString>
#include <QtTest>

class QtWidgetTestTest : public QObject
{
    Q_OBJECT

public:
    QtWidgetTestTest();

private Q_SLOTS:
    void testCase1();
};

QtWidgetTestTest::QtWidgetTestTest()
{
}

void QtWidgetTestTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(QtWidgetTestTest)

#include "tst_qtwidgettesttest.moc"
