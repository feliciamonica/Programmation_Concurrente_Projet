#include "salle_restauration.h"

RestaurantView::RestaurantView(QWidget *parent)

    : QGraphicsView(parent) {
    // Initialisation de la scène
    scene = new QGraphicsScene(this);
    setScene(scene);

    // Taille de la vue
    setFixedSize(900, 700); // Taille personnalisée
    setSceneRect(0, 0, 900, 700);

    // Initialisation des boutons
    setupButtons();
}

void RestaurantView::setupButtons() {
    // Bouton Start
    startButton = new QPushButton("Start", this);
    startButton->setGeometry(10, 10, 80, 30);
    connect(startButton, &QPushButton::clicked, this, &RestaurantView::startSimulation);

    // Bouton Pause
    pauseButton = new QPushButton("Pause", this);
    pauseButton->setGeometry(100, 10, 80, 30);
    connect(pauseButton, &QPushButton::clicked, this, &RestaurantView::pauseSimulation);

    // Bouton Stop
    stopButton = new QPushButton("Stop", this);
    stopButton->setGeometry(190, 10, 80, 30);
    connect(stopButton, &QPushButton::clicked, this, &RestaurantView::stopSimulation);

    // Bouton Dashboard
    dashboardButton = new QPushButton("Dashboard", this);
    dashboardButton->setGeometry(280, 10, 100, 30);
    connect(dashboardButton, &QPushButton::clicked, this, &RestaurantView::openDashboard);
}




// #include "salle_restauration.h"
// #include "ui_salle_restauration.h"

// Salle_restauration::Salle_restauration(QWidget *parent)
//     : QMainWindow(parent)
//     , ui(new Ui::Salle_restauration)
// {
//     ui->setupUi(this);
// }

// Salle_restauration::~Salle_restauration()
// {
//     delete ui;
// }
