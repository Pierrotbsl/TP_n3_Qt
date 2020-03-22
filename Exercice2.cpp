//
// Created by pierr on 22/03/2020.
//

#include "Exercice2.h"
#include <QWidget>
#include <QPushButton>

Exercice2::Exercice2() : QWidget()
{
   //Question 1 :
   /*setFixedSize(300, 150);

    m_bouton = new QPushButton("Quitter", this);
    m_bouton->setFont(QFont("Comic Sans MS", 14));
    m_bouton->move(110, 50);

    QObject::connect(m_bouton, SIGNAL(clicked()), qApp, SLOT(quit()));*/

    //Question 2 :

    setFixedSize(300, 150);

    m_bouton = new QPushButton("1er Titre", this);
    m_bouton->setFont(QFont("Comic Sans MS", 14));
    m_bouton->move(110, 50);
    m_text = new QTextEdit("texte initial");


    QObject::connect(m_bouton, SIGNAL(clicked()), this, SLOT(changerText()));

}
void Exercice2::changerText() {
    m_bouton->setText("Nouveau Texte");
}
