#ifndef FRAMEGIOCO_H
#define FRAMEGIOCO_H

#include <QWidget>
#include <random>
#include "casella.h"
#include <QGridlayout>
#include <QKeyEvent>

class framegioco : public QWidget
{   //dichiarazione frame di gioco
    Q_OBJECT//necessario per la definizione di slots nuovi
public:
    static const int areaX = 10;//numero caselle orizzontali
    static const int areaY = 20;//numero caselle verticali
    framegioco(QWidget *parent = nullptr);
    casella * matrix[areaX][areaY];//matrice di widget di x=n e y=n dimensioni
    QGridLayout * frameGriglia;
protected:
    void keyPressEvent(QKeyEvent *event);
    void muoviGiu();
    void ruotaDestra();
    void ruotaSinistra();

private slots://dichiarazione slots ossia metodi collegabili a signals

private:
    void generaRandom();
};

#endif // FRAME_H
