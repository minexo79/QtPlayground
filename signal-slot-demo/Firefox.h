#ifndef FIREFOX_H
#define FIREFOX_H

#include <QObject>
#include <QDebug>

class Firefox : public QObject
{
    Q_OBJECT
public:
    explicit Firefox(QObject *parent = nullptr);

public slots:
    void browse(const QString &phrase);

signals:
};

#endif // FIREFOX_H
