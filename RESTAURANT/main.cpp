// #include "salle_restauration.h"
 #include "cuisine.h"
// #include "cuisinemodele.h"
// #include "cuisineController.h"
// #include "staffmodele.h"
// #include "gamecontroller.h"
// #include "staffcontroller.h"
 #include <QApplication>

// int main(int argc, char *argv[])
// {
//     QApplication app(argc, argv);
//     // Créer les objets modèle, vue et contrôleur
//     cuisineModele *model = new cuisineModele();
//     staffmodele *stafmodele = new staffmodele();
//     Cuisine *view = new Cuisine();
//     //staffcontroller *stafcontroller = new staffcontroller(stafmodele, view);
//     //cuisineController *controller = new cuisineController(model, view);

//     // Initialisation des objets (ex: dans le constructeur de la vue ou de l'application)
//     gameController *game = new gameController(stafmodele, model, view);

//     // Ajouter un personnage et un objet à la scène
//     game->addCharacterToScene("Chef Cuisinier", ":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/chef_cuisinier.png", 150, 50, 0.2, "Chef Cuisinier");
//     game->addObjectToScene("Cuisinière 1", ":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/cuisiniere (3).png", 300, -50, 0.3, "Cuisinière 1");

//     // Déplacer le Chef vers la Cuisinière 1
//     game->moveChefToCuisiniere1();

//     // Configurer la scène
//     //controller->setupScene();
//     //stafcontroller->setupScene();
//     //stafcontroller->moveChefToCuisiniere1();

//     // Afficher la vue
//     view->setWindowTitle("Cuisine");
//     view->show();
//     return app.exec();
// }
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Cuisine win;
    win.show();
    return a.exec();
}

