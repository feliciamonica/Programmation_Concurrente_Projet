#ifndef TABLEAU_BORD_H
#define TABLEAU_BORD_H

#include <QMainWindow>
#include "database.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Tableau_bord; }
QT_END_NAMESPACE

class Tableau_bord : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tableau_bord(QWidget *parent = nullptr);
    ~Tableau_bord();

private:
    Ui::Tableau_bord *ui;
    Database *db;

    void updateDashboard();          // Mettre à jour les données du tableau de bord
    void checkCriticalSituations();  // Vérifier les situations limites

    // Méthodes pour charger les données des différentes tables
    void loadRestaurantTableData();  // Charger les données de la table RestaurantTable
    void loadMaterielCommunData();   // Charger les données de la table Materiel_commun
    void loadPlatData();             // Charger les données de la table Plat
    void loadEmployeData();          // Charger les données de la table Employe
    void loadClientData();           // Charger les données de la table Client
};

#endif // TABLEAU_BORD_H
