#include "location.h"
#include <QSqlError>
#include <QDebug>

Location::Location() {}

QVector<Location::LocationData> Location::getAllLocations()
{
    QVector<LocationData> result;
    QSqlQuery query("SELECT * FROM Location");

    while (query.next()) {
        LocationData location = {
            query.value("idLocation").toInt(),
            query.value("Quantite").toInt(),
            query.value("Nom").toString()
        };
        result.append(location);
    }
    return result;
}

bool Location::addLocation(const LocationData &location)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Location (idLocation, Quantite, Nom) "
                  "VALUES (:idLocation, :quantite, :nom)");
    query.bindValue(":idLocation", location.idLocation);
    query.bindValue(":quantite", location.quantite);
    query.bindValue(":nom", location.nom);

    if (!query.exec()) {
        qDebug() << "Error adding Location:" << query.lastError().text();
        return false;
    }
    return true;
}

bool Location::updateLocation(int id, int quantite, const QString &newNom)
{
    QSqlQuery query;
    query.prepare("UPDATE Location SET Quantite = :quantite, Nom = :nom WHERE idLocation = :idLocation");
    query.bindValue(":quantite", quantite);
    query.bindValue(":nom", newNom);
    query.bindValue(":idLocation", id);

    if (!query.exec()) {
        qDebug() << "Error updating Location:" << query.lastError().text();
        return false;
    }
    return true;
}

bool Location::deleteLocation(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM Location WHERE idLocation = :idLocation");
    query.bindValue(":idLocation", id);

    if (!query.exec()) {
        qDebug() << "Error deleting Location:" << query.lastError().text();
        return false;
    }
    return true;
}
