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

    static const int realAreaX = 10;//numero caselle orizzontali
    static const int realAreaY = 40;//numero caselle verticali
    static const int visibleAreaX = 10;//numero caselle orizzontali
    static const int visibleAreaY = 20;//numero caselle verticali
    framegioco(QWidget *parent = nullptr);
    casella * sfondo[realAreaX][realAreaY];//matrice di widget di x=n e y=n dimensioni
    int xPezzoAttuale;
    int yPezzoAttuale;
    int pezzoAttuale;//coordinate del centro del pezzettino che stiamo comandando
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
