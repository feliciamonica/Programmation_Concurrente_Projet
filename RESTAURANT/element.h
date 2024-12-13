#ifndef ELEMENT_H
#define ELEMENT_H
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsTextItem>
#include <QGraphicsSceneHoverEvent>
class element : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT


public:
    element(int id, int capacity, const QString &imagePath, QObject *parent = nullptr);
    ~element();

    void setPosition(int x, int y);
    void setOccupied(bool occupied);
    bool isOccupied() const;
    int getCapacity() const;
    int getId() const;
    QGraphicsPixmapItem* getGraphicsItem();
    const QGraphicsPixmapItem* getGraphicsItem() const;
    QGraphicsTextItem* getTextItem() const;

protected:
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event) override;
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event) override;

private:
    int id;
    int capacity;
    bool occupied;
    QGraphicsTextItem *textItem;
};




#endif // ELEMENT_H
