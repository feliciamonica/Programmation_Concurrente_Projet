#ifndef RESTAURANTVIEW_H
#define RESTAURANTVIEW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPushButton>
#include "graphicelement.h"

class RestaurantView : public QGraphicsView {
    Q_OBJECT
public:
    explicit RestaurantView(QWidget *parent = nullptr);

    QGraphicsScene* getScene() { return scene; }

signals:
    void startSimulation();
    void pauseSimulation();
    void stopSimulation();
    void accelSimulation();
    void openDashboard();

private:
    QGraphicsScene *scene;

    QPushButton *startButton;
    QPushButton *pauseButton;
    QPushButton *stopButton;
    QPushButton *dashboardButton;

    void setupButtons(); // Méthode pour initialiser les boutons
};

#endif // RESTAURANTVIEW_H

