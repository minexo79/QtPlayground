#include <QCoreApplication>
#include <QTimer>
#include "DemoObject.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Create Root Object
    DemoObject rootObject("root_object");
    // Create Child Object 1 & 2, Connected To Root Object
    DemoObject * childObject1 = new DemoObject("child_object 1", &rootObject);
    DemoObject * childObject2 = new DemoObject("child_object 2", &rootObject);

    // Create Sub Object 1 & 2, Connected To Every Sub Object
    for(int i = 0; i < 2; i++)
    {
        DemoObject * subObject1 = new DemoObject(QString("sub_object %1").arg(i + 1), childObject1);
        DemoObject * subObject2 = new DemoObject(QString("sub_object %1").arg(i + 1), childObject2);
    }

    // delete Child Object1 after 5s
    QTimer::singleShot(5000, [&]()
    {
        qDebug() << "=======";
        childObject1->deleteLater();
    });


    // delete Root Object after 10s
    QTimer::singleShot(10000, [&]()
    {
        qDebug() << "=======";
        rootObject.deleteLater();
    });

    // or quit immediately
    // a.quit();

    return a.exec();
}
