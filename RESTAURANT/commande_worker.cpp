#include "commande_worker.h"

CommandeWorker::CommandeWorker(QObject *parent) : QThread(parent) {}

void CommandeWorker::run()
{
    QVector<Commande::CommandeData> commandes = commande.getAllCommandes();
    emit resultReady(commandes);
}
