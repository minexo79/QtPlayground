#ifndef GOOGLECHROME_H
#define GOOGLECHROME_H

#include <QObject>
#include <QTimer>
#include <QDebug>

class GoogleChrome : public QObject
{
    Q_OBJECT
public:
    explicit GoogleChrome(QObject *parent = nullptr);

public slots:
    void browse();

signals:
    void browseRequested(const QString &phrase);

private:
    QTimer m_timer;

};

#endif // GOOGLECHROME_H
