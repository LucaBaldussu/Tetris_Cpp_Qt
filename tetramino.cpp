#include "tetramino.h"

tetramino::tetramino(char * forma)
{
    riga = 0;
    colonna = 20;//inizialmente viene stampato dalla prima casella in alto a sinistra

    int r=0, c = 0;
    bool lastWasNull = false;

    blocco blocchettino;

    for(int i=0; ; i++) {
        if (forma[i] == '\0') {
            if (lastWasNull) break; // two NULL's in a row, we're done.
            else {
                // one NULL - go to the next row.
                lastWasNull = true;
                c++; r=0;
                continue;
            }
        }
        lastWasNull = false; // not a NULL

        // if not a space, put a new square for this in our list of squares
        if (forma[i] != ' ') {
            blocchettino.posX = c; blocchettino.posY = r;
            blocchettino.contenuto = forma[i];
            blocchi.push_back(blocchettino);
        }
        r++; // passa alla colonna successiva
    }
}

