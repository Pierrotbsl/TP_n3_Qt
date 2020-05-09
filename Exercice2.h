//
// Created by pierr on 22/03/2020.
//

#ifndef TP_N_3_QT_EXERCICE2_H
#define TP_N_3_QT_EXERCICE2_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QTextEdit>

class Exercice2 : public QWidget {

    Q_OBJECT

public:
    Exercice2();

public slots:
    void changerText();
    void ajouterExercice1();

private:
    QPushButton * m_bouton;
    QTextEdit * m_text;

    int i = 1;
    QString texte;
};


#endif //TP_N_3_QT_EXERCICE2_H
