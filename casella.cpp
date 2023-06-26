#include "casella.h"


//ogni oggetto casella è una QLabel con parametri aggiunti

casella::casella(int x, int y, QWidget *parent): QLabel(parent)
{
    pos_x=x;
    pos_y=y;
    tetramino = false;//non è occupata
    pezzettino = false;//non è in controllo
    setAlignment(Qt::AlignCenter);
    setFrameStyle(QFrame::Panel | QFrame::Plain);
    setLineWidth(2);
    setMidLineWidth(3);
}

bool casella::vuoto(){
    if (tetramino==false && pezzettino==false){
        return true;
    }
    else{
        return false;
    }
}
void casella::svuota(){

    tetramino = false;
    pezzettino = false;

}
void casella::clona(casella * daclonare){
    tetramino = daclonare->tetramino;
    pezzettino = daclonare->pezzettino;
    daclonare->svuota();

}

void casella::nuovo(){

}
