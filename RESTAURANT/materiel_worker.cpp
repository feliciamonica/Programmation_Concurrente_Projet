#include "materiel_worker.h"

MaterielWorker::MaterielWorker(QObject *parent) : QThread(parent) {}

void MaterielWorker::run()
{
    QVector<MaterielCommun::Materiel> materielList = materielCommun.getAllMateriel();
    emit resultReady(materielList);
}
