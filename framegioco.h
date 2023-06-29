#ifndef FRAMEGIOCO_H
#define FRAMEGIOCO_H

#include <QWidget>
#include <random>
#include <tetramino.h>
#include <casella.h>
#include <QGridlayout>
#include <QKeyEvent>

class framegioco : public QWidget
{   //dichiarazione frame di gioco
    Q_OBJECT//necessario per la definizione di slots nuovi
public:

    static const int realAreaX = 10;//numero caselle orizzontali
    static const int realAreaY = 40;//numero caselle verticali
    static const int visibleAreaX = 10;//numero caselle VISIBILI orizzontali
    static const int visibleAreaY = 20;//numero caselle VISIBILI verticali

    //dichiarazioni forme da spawnare//per i numeri dei pezzi riferirsi allo schema
/*
    tetramino formaI;//forma 1
    tetramino forma0;//forma 2
    tetramino formaLinv;//forma 3
    tetramino formaL;//forma 4
    tetramino formaS;//forma 5
    tetramino formaT;//forma 6
    tetramino formaZ;//forma 7
*/
    casella * sfondo[realAreaX][realAreaY];//matrice di widget di x=n e y=n dimensioni

    QGridLayout * frameGriglia;

    framegioco(QWidget *parent = nullptr);

    void stampaBlocco(tetramino * daStampare);


protected:

    void keyPressEvent(QKeyEvent *event);

private slots://dichiarazione slots ossia metodi collegabili a signals

private:

    void generaRandom();

};

#endif // FRAME_H
