#include "element.h"
#include <QGraphicsPixmapItem>
#include <QGraphicsTextItem>
#include <QToolTip>

element::element(int id, int capacity, const QString &imagePath, QObject *parent)
    : QObject(parent), QGraphicsPixmapItem(QPixmap(imagePath)), id(id), capacity(capacity), occupied(false) {
    setScale(1.5); // Ajustez l'échelle selon vos besoins
    textItem = new QGraphicsTextItem(QString::number(capacity), this);
    textItem->setPos(boundingRect().center());
    setAcceptHoverEvents(true); // Activer les événements de survol
}

element::~element() {
    delete textItem;
}

void element::setPosition(int x, int y) {
    setPos(x, y);
}

void element::setOccupied(bool occupied) {
    this->occupied = occupied;
    setOpacity(occupied ? 0.5 : 0.0); // Changer l'opacité pour indiquer l'occupation
}

bool element::isOccupied() const {
    return occupied;
}

int element::getCapacity() const {
    return capacity;
}

int element::getId() const {
    return id;
}

QGraphicsPixmapItem* element::getGraphicsItem() {
    return this;
}

const QGraphicsPixmapItem* element::getGraphicsItem() const {
    return this;
}

QGraphicsTextItem* element::getTextItem() const {
    return textItem;
}

void element::hoverEnterEvent(QGraphicsSceneHoverEvent *event) {
    QToolTip::showText(event->screenPos(), QString("Capacité: %1\nOccupée: %2").arg(capacity).arg(occupied ? "Oui" : "Non"));
}

void element::hoverLeaveEvent(QGraphicsSceneHoverEvent *event) {
    QToolTip::hideText();
}

