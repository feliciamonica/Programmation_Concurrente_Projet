#include "restauranttable.h"
#include <QSqlError>
#include <QDebug>

RestaurantTable::RestaurantTable() {}

QVector<RestaurantTable::TableData> RestaurantTable::getAllTables()
{
    QVector<TableData> result;
    QSqlQuery query("SELECT * FROM RestaurantTable");

    while (query.next()) {
        TableData table = {
            query.value("idTable").toInt(),
            query.value("Capacite").toInt(),
            query.value("Numero_Carre").toInt(),
            query.value("Statut").toString(),
            query.value("Nbre_Chaises_Occupe").toInt(),
            query.value("Numero_Rang").toInt(),
            query.value("Etat").toString()
        };
        result.append(table);
    }
    return result;
}

bool RestaurantTable::addTable(const TableData &table)
{
    QSqlQuery query;
    query.prepare("INSERT INTO RestaurantTable (idTable, Capacite, Numero_Carre, Statut, Nbre_Chaises_Occupe, Numero_Rang, Etat) "
                  "VALUES (:idTable, :capacite, :numeroCarre, :statut, :nbChaisesOccupe, :numeroRang, :etat)");
    query.bindValue(":idTable", table.idTable);
    query.bindValue(":capacite", table.capacite);
    query.bindValue(":numeroCarre", table.numeroCarre);
    query.bindValue(":statut", table.statut);
    query.bindValue(":nbChaisesOccupe", table.nbChaisesOccupe);
    query.bindValue(":numeroRang", table.numeroRang);
    query.bindValue(":etat", table.etat);

    if (!query.exec()) {
        qDebug() << "Error adding Table:" << query.lastError().text();
        return false;
    }
    return true;
}

bool RestaurantTable::updateTable(int id, const QString &newStatut, int nbChaisesOccupe)
{
    QSqlQuery query;
    query.prepare("UPDATE RestaurantTable SET Statut = :statut, Nbre_Chaises_Occupe = :nbChaisesOccupe WHERE idTable = :idTable");
    query.bindValue(":statut", newStatut);
    query.bindValue(":nbChaisesOccupe", nbChaisesOccupe);
    query.bindValue(":idTable", id);

    if (!query.exec()) {
        qDebug() << "Error updating Table:" << query.lastError().text();
        return false;
    }
    return true;
}

bool RestaurantTable::deleteTable(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM RestaurantTable WHERE idTable = :idTable");
    query.bindValue(":idTable", id);

    if (!query.exec()) {
        qDebug() << "Error deleting Table:" << query.lastError().text();
        return false;
    }
    return true;
}
