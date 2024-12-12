#include "client_worker.h"

ClientWorker::ClientWorker(QObject *parent) : QThread(parent) {}

void ClientWorker::run()
{
    QVector<Client::ClientData> clients = client.getAllClients();
    emit resultReady(clients);
}
