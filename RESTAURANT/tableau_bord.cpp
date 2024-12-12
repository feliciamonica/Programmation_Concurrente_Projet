#include "tableau_bord.h"
#include "ui_tableau_bord.h"
#include "database.h"
#include <QDebug>
#include <QMessageBox>
#include <QTimer>

Tableau_bord::Tableau_bord(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Tableau_bord)
    , db(new Database(this)) // Initialisation de la base de données
{
    ui->setupUi(this);

    // Connexion à la base de données SQLite
    QString dbPath = "mydatabase.db"; // Chemin du fichier SQLite
    if (!db->connectToDatabase(dbPath)) {
        qDebug() << "Failed to connect to the SQLite database.";
        QMessageBox::critical(this, tr("Erreur"), tr("Impossible de se connecter à la base de données SQLite:\n%1").arg(db->lastError()));
        return;
    }

    qDebug() << "Connected to the SQLite database.";

    // Initialiser le tableau de bord
    updateDashboard();

    // Mettre à jour toutes les 30 secondes (optionnel)
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Tableau_bord::updateDashboard);
    timer->start(30000);
}

Tableau_bord::~Tableau_bord()
{
    delete db;
    delete ui;
}

void Tableau_bord::updateDashboard()
{
    // 1. Charger les données pour les places occupées
    QSqlQuery queryPlaces = db->executeQuery("SELECT COUNT(*) FROM RestaurantTable WHERE Statut = 'Occupée'");
    if (queryPlaces.next()) {
        int placesOccupees = queryPlaces.value(0).toInt();
        ui->lcdPlacesOccupees->display(placesOccupees);
        ui->progressPlacesOccupees->setValue(placesOccupees * 10); // Exemple de conversion
    }

    // 2. Charger les données pour les stocks
    QSqlQuery queryStocks = db->executeQuery("SELECT SUM(Quantite) FROM Materiel_commun");
    if (queryStocks.next()) {
        int stockTotal = queryStocks.value(0).toInt();
        ui->lcdStockLevel->display(stockTotal);
    }

    // 3. Charger les données pour les plats préparés
    QSqlQuery queryPlats = db->executeQuery("SELECT COUNT(*) FROM Plat");
    if (queryPlats.next()) {
        int platsPrepares = queryPlats.value(0).toInt();
        ui->lcdPlatsPrepares->display(platsPrepares);
    }

    // 4. Vérification des situations limites
    checkCriticalSituations();
}

void Tableau_bord::checkCriticalSituations()
{
    // Exemple : Vérifier si les assiettes sont presque épuisées
    QSqlQuery queryAssiettes = db->executeQuery("SELECT Quantite FROM Materiel_commun WHERE Nom = 'Assiette'");
    if (queryAssiettes.next()) {
        int quantiteAssiettes = queryAssiettes.value(0).toInt();
        if (quantiteAssiettes < 5) {
            QMessageBox::warning(this, tr("Attention"), tr("Il ne reste que %1 assiettes !").arg(quantiteAssiettes));
        }
    }

    // Ajouter d'autres vérifications pour d'autres ressources critiques (ex. verres, couverts)
}

