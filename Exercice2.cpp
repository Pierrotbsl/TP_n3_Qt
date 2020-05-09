//
// Created by pierr on 22/03/2020.
//

#include "Exercice2.h"
#include "Exercice1.h"
#include <QApplication>
#include <QWidget>
#include <QDebug>
#include <QPushButton>

Exercice2::Exercice2() : QWidget()
{
   //Question 1 :

//   setFixedSize(300, 150);
//
//    m_bouton = new QPushButton("Quitter", this);
//    m_bouton->setFont(QFont("Comic Sans MS", 14));
//    m_bouton->move(110, 50);
//
//    QObject::connect(m_bouton, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Question 2 :

//    setFixedSize(300, 160);
//
//    m_bouton = new QPushButton("fils", this);
//    m_bouton->setFont(QFont("Comic Sans MS", 14));
//    m_bouton->setGeometry(10, 10, 280, 25);
//
//    m_text = new QTextEdit("texte initial", this);
//    m_text->setGeometry(10, 40, 280, 110);
//
//    QObject::connect(m_bouton, SIGNAL(clicked()), this, SLOT(changerText()));

    //Question 3 :

    setFixedSize(300, 100);

    m_bouton = new QPushButton("Afficher Exercice 1", this);
    m_bouton->setFont(QFont("Comic Sans MS", 14));
    m_bouton->setGeometry(10, 10, 280, 25);

    QObject::connect(m_bouton, SIGNAL(clicked()), this, SLOT(ajouterExercice1()));

}
void Exercice2::changerText() {
    texte = "Example" + QString::number(i);
    m_bouton->setText(texte);
    m_text->insertPlainText(texte + "\n");
    qDebug() << texte;
    i++;
}

void Exercice2::ajouterExercice1() {
    Exercice1 * exo1 = new Exercice1;
    exo1->show();
}