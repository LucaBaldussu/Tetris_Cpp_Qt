#include "casella.h"


//ogni oggetto casella è una QLabel con parametri aggiunti

casella::casella(int x, int y, QWidget *parent): QLabel(parent)
{
    pos_x=x;
    pos_y=y;
    valore = 0;
    setAlignment(Qt::AlignCenter);
    setFrameStyle(QFrame::Panel | QFrame::Plain);
    setLineWidth(2);
    setMidLineWidth(3);
}
void casella::raddoppia(){

    this->valore*=2;
    testo.setNum(valore);
    moltiplicabile = false;
    this->setText(testo);

}
bool casella::vuoto(){
    if (testo.isEmpty() && valore==0){
        return true;
    }
    else{
        return false;
    }
}
void casella::svuota(){
    testo.clear();
    valore = 0;
    this->setText(testo);

}
void casella::clona(casella * daclonare){
    valore = daclonare->valore;
    testo = daclonare->testo;
    moltiplicabile = daclonare->moltiplicabile;
    daclonare->svuota();
    this->setText(testo);
}
void casella::fineTurno(){
    moltiplicabile = true;

}
void casella::nuovo(){
    valore = 2;
    testo="2";
    setText(testo);
}
