#ifndef RESTAURANTTABLE_H
#define RESTAURANTTABLE_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QSqlQuery>

class RestaurantTable
{
public:
    struct TableData {
        int idTable;
        int capacite;
        int numeroCarre;
        QString statut;
        int nbChaisesOccupe;
        int numeroRang;
        QString etat;
    };

    RestaurantTable();

    QVector<TableData> getAllTables();
    bool addTable(const TableData &table);
    bool updateTable(int id, const QString &newStatut, int nbChaisesOccupe);
    bool deleteTable(int id);

private:
    QString lastError;
};

#endif // RESTAURANTTABLE_H
