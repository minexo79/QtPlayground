#include "GoogleChrome.h"

GoogleChrome::GoogleChrome(QObject *parent)
    : QObject{parent}
{
    m_timer.setInterval(10000);
    m_timer.setSingleShot(true);

    // connect browseRequested signal to timer start slots
    // to call timer start
    connect(this, &GoogleChrome::browseRequested, &m_timer, qOverload<>(&QTimer::start));

    // connect timer timeout signal to browse slots
    // to call browse methods when timesout
    connect(&m_timer, &QTimer::timeout, this, &GoogleChrome::browse);
}

void GoogleChrome::browse()
{
    qDebug() << "Google Chrome is not responding...\n";
}
