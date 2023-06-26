#include "framegioco.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    framegioco w;

    w.show();
    return a.exec();
}
