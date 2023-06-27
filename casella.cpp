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
    clear();

}
void casella::clona(casella * daclonare){
    tetramino = daclonare->tetramino;
    pezzettino = daclonare->pezzettino;
    setPixmap(daclonare->pixmap());
    daclonare->svuota();

}

void casella::nuovo(){
    tetramino = true;
    pezzettino = true;
    if(rosso.load("C:/Users/Utente/Documents/Tetris_Cpp_Qt/rosso.png")){
        /** scale pixmap to fit in label'size and keep ratio of pixmap */
        rosso = rosso.scaled(size(),Qt::KeepAspectRatio);
        setPixmap(rosso);
    }
}
