//
// Created by pierr on 18/03/2020.
//

#include "Exercice1.h"
#include <QWidget>

void Exercice1::changerLargeur(int largeur)
{
    setFixedSize(largeur, 100);
}
Exercice1::Exercice1() : QWidget()
{
    setFixedSize(200, 100);

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setRange(200, 600);
    m_slider->setGeometry(10, 60, 150, 20);

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), this, SLOT(changerLargeur(int)));
}