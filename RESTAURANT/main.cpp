#include <QApplication>
#include "restaurantcontroller.h"
#include "tableau_bord.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    RestaurantController controller;
   Tableau_bord T;
    controller.show();
   T.show();

    return app.exec();
}




// #include "salle_restauration.h"
// #include "cuisine.h"
// #include "tableau_bord.h"
// #include <QApplication>

// int main(int argc, char *argv[])
// {
//     QApplication a(argc, argv);
//     Salle_restauration w;
//     Tableau_bord T;
//     Cuisine e;
//     w.show();
//     T.show();
//     e.show();
//     return a.exec();
// }
