#include "UserInteractor.h"

UserInteractor::UserInteractor(QObject *parent)
    : QObject{parent}
{}

void UserInteractor::getInput()
{
    qDebug() << "\nType in your search phrase: \n";

    QTextStream s(stdin);
    const auto &phrase = s.readLine();

    if (!phrase.isEmpty())
    {
        emit phraseTyped(phrase);   // emit signal to call any other slots / signals connected
    }
}
