#include "materielcuisine_worker.h"

MaterielCuisineWorker::MaterielCuisineWorker(QObject *parent) : QThread(parent) {}

void MaterielCuisineWorker::run()
{
    QVector<MaterielCuisine::MaterielCuisineData> materiels = materielCuisine.getAllMaterielCuisine();
    emit resultReady(materiels);
}
