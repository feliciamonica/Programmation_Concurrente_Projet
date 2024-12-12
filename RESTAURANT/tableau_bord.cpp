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
    QString dbPath = "/home/narcisse/Desktop/Project/Programmation_Concurrente_Projet/RESTAURANT/mydatabase.db"; // Chemin du fichier SQLite
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
    // Charger les données pour chaque table
    loadRestaurantTableData();
    loadMaterielCommunData();
    loadPlatData();
    loadEmployeData();
    loadClientData();
    checkCriticalSituations();
}

void Tableau_bord::loadRestaurantTableData()
{
    QSqlQuery query = db->executeQuery("SELECT COUNT(*) FROM RestaurantTable WHERE Statut = 'Occupée'");
    if (query.next()) {
        int placesOccupees = query.value(0).toInt();
        if (ui->lcdPlacesOccupees) {
            ui->lcdPlacesOccupees->display(placesOccupees);
        }
        if (ui->progressPlacesOccupees) {
            ui->progressPlacesOccupees->setValue(placesOccupees * 10); // Exemple de conversion
        }
    }
}

void Tableau_bord::loadMaterielCommunData()
{
    QSqlQuery query = db->executeQuery("SELECT SUM(Quantite) FROM Materiel_commun");
    if (query.next()) {
        int stockTotal = query.value(0).toInt();
        if (ui->lcdStockLevel) {
            ui->lcdStockLevel->display(stockTotal);
        }
    }
}

void Tableau_bord::loadPlatData()
{
    QSqlQuery query = db->executeQuery("SELECT COUNT(*) FROM Plat");
    if (query.next()) {
        int platsPrepares = query.value(0).toInt();
        if (ui->lcdPlatsPrepares) {
            ui->lcdPlatsPrepares->display(platsPrepares);
        }
    }
}

void Tableau_bord::loadEmployeData()
{
    QSqlQuery query = db->executeQuery("SELECT COUNT(*) FROM Employe");
    if (query.next()) {
        int totalEmployes = query.value(0).toInt();
        if (ui->lcdEmployeCount) {
            ui->lcdEmployeCount->display(totalEmployes); // Ajoutez ce widget dans votre fichier .ui
        }
    }
}

void Tableau_bord::loadClientData()
{
    QSqlQuery query = db->executeQuery("SELECT COUNT(*) FROM Client");
    if (query.next()) {
        int totalClients = query.value(0).toInt();
        if (ui->lcdClientCount) {
            ui->lcdClientCount->display(totalClients); // Ajoutez ce widget dans votre fichier .ui
        }
    }
}

void Tableau_bord::checkCriticalSituations()
{
    // Exemple : Vérifier si les assiettes sont presque épuisées
    QSqlQuery query = db->executeQuery("SELECT Quantite FROM Materiel_commun WHERE Nom = 'Assiette'");
    if (query.next()) {
        int quantiteAssiettes = query.value(0).toInt();
        if (quantiteAssiettes < 5) {
            QMessageBox::warning(this, tr("Attention"), tr("Il ne reste que %1 assiettes !").arg(quantiteAssiettes));
        }
    }

    // Ajoutez d'autres vérifications pour d'autres ressources critiques (ex. verres, couverts)
    QSqlQuery queryVerres = db->executeQuery("SELECT Quantite FROM Materiel_commun WHERE Nom = 'Verres'");
    if (queryVerres.next()) {
        int quantiteVerres = queryVerres.value(0).toInt();
        if (quantiteVerres < 10) {
            QMessageBox::warning(this, tr("Attention"), tr("Il ne reste que %1 verres !").arg(quantiteVerres));
        }
    }
}
