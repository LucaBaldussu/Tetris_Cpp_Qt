#include "framegioco.h"
#include <QDebug>
//assegnazione costruttori classe
framegioco::framegioco(QWidget *parent) : QWidget(parent) {//costruttore

    srand((unsigned) time(NULL));

    frameGriglia = new QGridLayout(this);

    for(int z = 0; z<realAreaX; z++){
        for (int v = 0; v<realAreaY; v++){
            sfondo[z][v] = new casella(z, v, this);
            sfondo[z][v]->setHidden(true);
            sfondo[z][v]->setText(QString::number(z) + QString::number(v));
        }
    }

    for(int z = 0; z<visibleAreaX; z++){
        for (int v = 0; v<visibleAreaY; v++){
            sfondo[z][v+20]->setHidden(false);
            frameGriglia->addWidget(sfondo[z][v+20], v, z);
        }
    }


    setLayout(frameGriglia);

    framegioco::generaRandom();
}



void framegioco::generaRandom(){//generazione nuova casella casuale in spawn
    pezzoAttuale = rand()% 7 + 1;
    xPezzoAttuale = 4 ;
    yPezzoAttuale = 20 ;
    switch (pezzoAttuale) {
    case 1://disegna I invertita
        if (sfondo[3][20]->vuoto() && sfondo[4][20]->vuoto() && sfondo[5][20]->vuoto() && sfondo[6][20]->vuoto()){
        //controllo che quelle caselle siano libere
            sfondo[3][20]-> nuovo();
            sfondo[4][20]-> nuovo();
            sfondo[5][20]-> nuovo();
            sfondo[6][20]-> nuovo();
        }else {//finegioco
        }
        break;

    case 2://disegna blocco
        if (sfondo[4][20]->vuoto() && sfondo[5][20]->vuoto() && sfondo[4][21]->vuoto() && sfondo[5][21]->vuoto()){

            sfondo[4][20]-> nuovo();
            sfondo[5][20]-> nuovo();
            sfondo[4][21]-> nuovo();
            sfondo[5][21]-> nuovo();
        }else {
        }
        break;

    case 3:// disegna --|
        if (sfondo[4][20]->vuoto() && sfondo[5][20]->vuoto() && sfondo[6][20]->vuoto() && sfondo[6][21]->vuoto()){
            sfondo[4][20]-> nuovo();
            sfondo[5][20]-> nuovo();
            sfondo[6][20]-> nuovo();
            sfondo[6][21]-> nuovo();
        }else {
        }
         break;

    case 4://disegna |--
         if (sfondo[4][20]->vuoto() && sfondo[5][20]->vuoto() && sfondo[6][20]->vuoto() && sfondo[4][21]->vuoto()){
            sfondo[4][20]-> nuovo();
            sfondo[5][20]-> nuovo();
            sfondo[6][20]-> nuovo();
            sfondo[4][21]-> nuovo();
         }else {
         }
        break;

    case 5://disegna s
        if (sfondo[5][20]->vuoto() && sfondo[5][21]->vuoto() && sfondo[6][20]->vuoto() && sfondo[4][21]->vuoto()){
            sfondo[5][20]-> nuovo();
            sfondo[5][21]-> nuovo();
            sfondo[6][20]-> nuovo();
            sfondo[4][21]-> nuovo();
        }else {
        }
        break;

    case 6://disegna t
        if (sfondo[5][20]->vuoto() && sfondo[5][21]->vuoto() && sfondo[6][20]->vuoto() && sfondo[4][20]->vuoto()){
            sfondo[5][20]-> nuovo();
            sfondo[5][21]-> nuovo();
            sfondo[6][20]-> nuovo();
            sfondo[4][20]-> nuovo();
        }else {
        }
        break;

    case 7://disegna s invertita
        if (sfondo[5][20]->vuoto() && sfondo[5][21]->vuoto() && sfondo[6][21]->vuoto() && sfondo[4][20]->vuoto()){
            sfondo[5][20]-> nuovo();
            sfondo[5][21]-> nuovo();
            sfondo[6][21]-> nuovo();
            sfondo[4][20]-> nuovo();
        }else {
        }
        break;
    }
}


void framegioco::ruotaSinistra(){

}


void framegioco::ruotaDestra(){

}

void framegioco::muoviGiu(){


}




void framegioco::keyPressEvent(QKeyEvent *event)//risposta pressione tasti
{
    switch(event->key()){
    case Qt::Key_Left:
        //premuto sinistra

        break;

    case Qt::Key_Up:
        //premuto su

        break;

    case Qt::Key_Right:
        //premuto destra

        break;

    case Qt::Key_Down:
        //premuto giù

        break;
    }
}
