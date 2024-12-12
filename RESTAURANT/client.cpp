#include "client.h"
#include <QSqlError>
#include <QDebug>

Client::Client() {}

QVector<Client::ClientData> Client::getAllClients()
{
    QVector<ClientData> result;
    QSqlQuery query("SELECT * FROM Client");

    while (query.next()) {
        ClientData client = {
            query.value("idClient").toInt(),
            query.value("idTable").toInt(),
            query.value("Heure_d_arrivee").toString(),
            query.value("Caractere").toString(),
            query.value("Nom").toString(),
            query.value("Prenom").toString()
        };
        result.append(client);
    }
    return result;
}

bool Client::addClient(const ClientData &client)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Client (idClient, idTable, Heure_d_arrivee, Caractere, Nom, Prenom) "
                  "VALUES (:idClient, :idTable, :heureArrivee, :caractere, :nom, :prenom)");
    query.bindValue(":idClient", client.idClient);
    query.bindValue(":idTable", client.idTable);
    query.bindValue(":heureArrivee", client.heureArrivee);
    query.bindValue(":caractere", client.caractere);
    query.bindValue(":nom", client.nom);
    query.bindValue(":prenom", client.prenom);

    if (!query.exec()) {
        qDebug() << "Error adding Client:" << query.lastError().text();
        return false;
    }
    return true;
}

bool Client::updateClient(int id, const QString &newNom, const QString &newPrenom)
{
    QSqlQuery query;
    query.prepare("UPDATE Client SET Nom = :nom, Prenom = :prenom WHERE idClient = :idClient");
    query.bindValue(":nom", newNom);
    query.bindValue(":prenom", newPrenom);
    query.bindValue(":idClient", id);

    if (!query.exec()) {
        qDebug() << "Error updating Client:" << query.lastError().text();
        return false;
    }
    return true;
}

bool Client::deleteClient(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM Client WHERE idClient = :idClient");
    query.bindValue(":idClient", id);

    if (!query.exec()) {
        qDebug() << "Error deleting Client:" << query.lastError().text();
        return false;
    }
    return true;
}
