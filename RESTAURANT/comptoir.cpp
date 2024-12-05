#include "comptoir.h"
#include <QPainter>
#include <QPixmap>

Comptoir::Comptoir(QWidget *parent)
    : QWidget(parent) {
    setMinimumSize(200, 100);  // Taille minimale du widget
}

void Comptoir::paintEvent(QPaintEvent *event) {
    QPainter painter(this);

    // Charger l'image à partir des ressources
    QPixmap pixmap(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/comptoir.png");

    // Dessiner l'image pour remplir le widget
    painter.drawPixmap(rect(), pixmap);
}
