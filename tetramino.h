#ifndef TETRAMINO_H
#define TETRAMINO_H
#include "blocco.h"
#include "qlist.h"

class tetramino
{
public:

    int riga, colonna;//posizione casella prima in alto a sinistra dell'area del tetramino
    int dimensione;//dimensione quadrata del tetramino

    QList <blocco> blocchi;

    tetramino(char * forma);


};

#endif // TETRAMINO_H
