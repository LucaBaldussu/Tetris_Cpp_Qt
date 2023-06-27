#ifndef CASELLA_H
#define CASELLA_H

#include <QLabel>

class casella : public QLabel
{
    Q_OBJECT
public:

    int pos_x;//coordinata orizzontale
    int pos_y;//coordinata verticale
    bool tetramino;//cella occupata?
    bool pezzettino; //cella pezzo tetramino comandato ora?
    casella(int x, int y, QWidget *parent = nullptr);

    QPixmap rosso;

    void raddoppia();
    bool vuoto();
    void svuota();
    void clona(casella * daclonare);
    void nuovo();
};

#endif // CASELLA_H
