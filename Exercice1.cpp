//
// Created by pierr on 18/03/2020.
//

#include "Exercice1.h"
#include <QWidget>

Exercice1::Exercice1() : QWidget()
{
    setFixedSize(300, 150);

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setGeometry(25, 120, 250, 20);

    m_progressbar = new QProgressBar(this);
    m_progressbar->setGeometry(25, 20,250, 20);

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_progressbar, SLOT(setValue(int))) ;

}