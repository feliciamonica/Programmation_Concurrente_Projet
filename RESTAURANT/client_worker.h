#ifndef CLIENTWORKER_H
#define CLIENTWORKER_H

#include <QThread>
#include "client.h"

class ClientWorker : public QThread
{
    Q_OBJECT

public:
    explicit ClientWorker(QObject *parent = nullptr);
    void run() override;

signals:
    void resultReady(const QVector<Client::ClientData> &result);

private:
    Client client;
};

#endif // CLIENTWORKER_H
