//
// Created by pierr on 18/03/2020.
//

#include "Exercice1.h"
#include <QWidget>

Exercice1::Exercice1() : QWidget()
{
    setFixedSize(200, 100);

    m_progressbar = new QProgressBar(this);
    m_progressbar->setTextDirection(QProgressBar::TopToBottom);
    m_progressbar->move(50, 20);

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setGeometry(10, 60, 150, 20);

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_progressbar, SLOT(display(int))) ;
}