#include <iostream>
#include <QApplication>
#include "Exercice1.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    Exercice1 *fenetre = new Exercice1;
    fenetre->show();

    return app.exec();
}