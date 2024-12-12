#include "plat_worker.h"

PlatWorker::PlatWorker(QObject *parent) : QThread(parent) {}

void PlatWorker::run()
{
    QVector<Plat::PlatData> plats = plat.getAllPlats();
    emit resultReady(plats);
}
