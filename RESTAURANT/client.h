#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QSqlQuery>

class Client
{
public:
    struct ClientData {
        int idClient;
        int idTable;
        QString heureArrivee;
        QString caractere;
        QString nom;
        QString prenom;
    };

    Client();

    QVector<ClientData> getAllClients();
    bool addClient(const ClientData &client);
    bool updateClient(int id, const QString &newNom, const QString &newPrenom);
    bool deleteClient(int id);

private:
    QString lastError;
};

#endif // CLIENT_H
