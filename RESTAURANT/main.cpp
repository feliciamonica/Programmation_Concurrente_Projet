#include "salle_restauration.h"
#include "cuisine.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Salle_restauration w;
    Cuisine e;
    w.show();
    e.show();
    return a.exec();
}
