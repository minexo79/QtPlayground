#include "DemoObject.h"

DemoObject::DemoObject(const QString &name, QObject *parent)
    : QObject{parent}
    , obj_name(name)
{
    qDebug() << "The Object Created " << obj_name;
}

DemoObject::~DemoObject()
{
    qDebug() << "The Object Distroyed " << obj_name;
}
