#include "plat.h"
#include <QSqlError>
#include <QDebug>

Plat::Plat() {}

QVector<Plat::PlatData> Plat::getAllPlats()
{
    QVector<PlatData> result;
    QSqlQuery query("SELECT * FROM Plat");

    while (query.next()) {
        PlatData plat = {
            query.value("idPlat").toInt(),
            query.value("Nom").toString(),
            query.value("Type").toString(),
            query.value("Temps_preparation").toString(),
            query.value("idMenu").toInt()
        };
        result.append(plat);
    }
    return result;
}

bool Plat::addPlat(const PlatData &plat)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Plat (idPlat, Nom, Type, Temps_preparation, idMenu) "
                  "VALUES (:idPlat, :nom, :type, :tempsPreparation, :idMenu)");
    query.bindValue(":idPlat", plat.idPlat);
    query.bindValue(":nom", plat.nom);
    query.bindValue(":type", plat.type);
    query.bindValue(":tempsPreparation", plat.tempsPreparation);
    query.bindValue(":idMenu", plat.idMenu);

    if (!query.exec()) {
        qDebug() << "Error adding Plat:" << query.lastError().text();
        return false;
    }
    return true;
}

bool Plat::updatePlat(int id, const QString &newNom, const QString &newType)
{
    QSqlQuery query;
    query.prepare("UPDATE Plat SET Nom = :nom, Type = :type WHERE idPlat = :idPlat");
    query.bindValue(":nom", newNom);
    query.bindValue(":type", newType);
    query.bindValue(":idPlat", id);

    if (!query.exec()) {
        qDebug() << "Error updating Plat:" << query.lastError().text();
        return false;
    }
    return true;
}

bool Plat::deletePlat(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM Plat WHERE idPlat = :idPlat");
    query.bindValue(":idPlat", id);

    if (!query.exec()) {
        qDebug() << "Error deleting Plat:" << query.lastError().text();
        return false;
    }
    return true;
}
