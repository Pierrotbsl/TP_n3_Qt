//
// Created by pierr on 18/03/2020.
//

#ifndef TP_N_3_QT_EXERCICE1_H
#define TP_N_3_QT_EXERCICE1_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QProgressBar>
#include <QSlider>

class Exercice1 : public QWidget {

public:
    Exercice1();

private:
    QProgressBar * m_progressbar;
    QSlider * m_slider;

};


#endif //TP_N_3_QT_EXERCICE1_H
