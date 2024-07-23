#include <QCoreApplication>
#include "UserInteractor.h"
#include "Firefox.h"
#include "GoogleChrome.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    UserInteractor userInteractor;
    Firefox firefox;
    GoogleChrome googleChrome;

    // connect phrasetyped signal to firefox browse slot
    QObject::connect(&userInteractor, &UserInteractor::phraseTyped, &firefox, &Firefox::browse);

    // connect phrasetyped signal to google browseRequested signal
    QObject::connect(&userInteractor, &UserInteractor::phraseTyped, &googleChrome, &GoogleChrome::browseRequested);

    // call user input
    userInteractor.getInput();

    return a.exec();
}
