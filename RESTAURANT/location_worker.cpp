#include "location_worker.h"

LocationWorker::LocationWorker(QObject *parent) : QThread(parent) {}

void LocationWorker::run()
{
    QVector<Location::LocationData> locations = location.getAllLocations();
    emit resultReady(locations);
}
