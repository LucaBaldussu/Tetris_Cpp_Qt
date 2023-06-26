#ifndef CASELLA_H
#define CASELLA_H

#include <QLabel>

class casella : public QLabel
{
    Q_OBJECT
public:

    int pos_x;//coordinata orizzontale
    int pos_y;//coordinata verticale
    int valore;//valore della cella
    int pezzettino; //questa casella che pezzettino è? fare riferimento alla tabella
    casella(int x, int y, QWidget *parent = nullptr);
    void raddoppia();
    bool vuoto();
    void svuota();
    void clona(casella * daclonare);
    bool moltiplicabile;
    void fineTurno();
    void nuovo();
};

#endif // CASELLA_H
