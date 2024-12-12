#include "restauranttable_worker.h"

RestaurantTableWorker::RestaurantTableWorker(QObject *parent) : QThread(parent) {}

void RestaurantTableWorker::run()
{
    QVector<RestaurantTable::TableData> tables = restaurantTable.getAllTables();
    emit resultReady(tables);
}
