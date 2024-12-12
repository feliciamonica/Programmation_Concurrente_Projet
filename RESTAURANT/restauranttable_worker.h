#ifndef RESTAURANTTABLEWORKER_H
#define RESTAURANTTABLEWORKER_H

#include <QThread>
#include "restauranttable.h"

class RestaurantTableWorker : public QThread
{
    Q_OBJECT

public:
    explicit RestaurantTableWorker(QObject *parent = nullptr);
    void run() override;

signals:
    void resultReady(const QVector<RestaurantTable::TableData> &result);

private:
    RestaurantTable restaurantTable;
};

#endif // RESTAURANTTABLEWORKER_H
