#include "framegioco.h"
#include <QDebug>
//assegnazione costruttori classe
framegioco::framegioco(QWidget *parent) : QWidget(parent) {//costruttore

    srand((unsigned) time(NULL));

    frameGriglia = new QGridLayout(this);

    for(int z = 0; z<areaX; z++){
        for (int v = 0; v<areaY; v++){
            sfondo[z][v] = new casella(z, v, this);
            frameGriglia->addWidget(sfondo[z][v], v, z);
        }
    }


    setLayout(frameGriglia);

    framegioco::generaRandom();
}

//assegnazione metodi della classe

void framegioco::generaRandom(){//generazione nuova casella in posto vuoto casuale

    int random = rand()% 7 + 1;
    xPezzoAttuale = 4 ;
    yPezzoAttuale = 19 ;
    switch (random) {
    case 1:

        break;
    case 2:

       break;
    case 3:

         break;
    case 4:

        break;
    case 5:

        break;
    case 6:

        break;
    case 7:

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
