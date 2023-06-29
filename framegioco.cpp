#include "framegioco.h"
#include <QDebug>

framegioco::framegioco(QWidget *parent) : QWidget(parent) {//costruttore

    srand((unsigned) time(NULL));

    frameGriglia = new QGridLayout(this);

    //creazione campo invisibile e visibile di gioco ossia un array di "Casella"
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

    //creazione forme default



    setLayout(frameGriglia);
    sfondo[5][30]->nuovo();//DEBUG

    tetramino * prova = new tetramino((char *)"====\0");




    stampaBlocco(prova);
    //generaRandom();
}

void framegioco::stampaBlocco(tetramino * daStampare){

    for (auto it = daStampare->blocchi.cbegin(); it != daStampare->blocchi.cend(); it++) {
        sfondo[it->posY + daStampare->riga][it->posX + daStampare->colonna]->nuovo();
    }

}


void framegioco::generaRandom(){//generazione nuova casella casuale in spawn

    int pezzoAttuale = rand()% 7 + 1;


    switch (pezzoAttuale) {
    case 1:// disegna ----


        break;

    case 2://disegna blocco


        break;

    case 3:// disegna --|

         break;

    case 4://disegna |--

        break;

    case 5://disegna s

        break;

    case 6://disegna t

        break;

    case 7://disegna z

        break;
    }
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
