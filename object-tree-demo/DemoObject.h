#ifndef DEMOOBJECT_H
#define DEMOOBJECT_H

#include <QObject>
#include <QString>
#include <QDebug>

class DemoObject : public QObject
{
    Q_OBJECT
public:
    explicit DemoObject(const QString &name, QObject *parent = nullptr);
    ~DemoObject();
private:
    QString obj_name;

signals:
};

#endif // DEMOOBJECT_H
