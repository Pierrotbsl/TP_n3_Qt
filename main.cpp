#include <iostream>
#include <QApplication>
#include "Exercice1.h"
#include "Exercice2.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    /*Exercice1 *fenetre1 = new Exercice1;
    fenetre->show();*/

    Exercice2 * fenetre2 = new Exercice2;
    fenetre2->show();


    return app.exec();
}