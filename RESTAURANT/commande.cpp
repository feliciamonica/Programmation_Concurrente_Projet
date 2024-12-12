#include "commande.h"
#include <QSqlError>
#include <QDebug>

Commande::Commande() {}

QVector<Commande::CommandeData> Commande::getAllCommandes()
{
    QVector<CommandeData> result;
    QSqlQuery query("SELECT * FROM Commande");

    while (query.next()) {
        CommandeData commande = {
            query.value("idCommande").toInt(),
            query.value("idPlat").toInt(),
            query.value("Nbre_Plats").toInt(),
            query.value("idTable").toInt(),
            query.value("Prix_Total").toInt()
        };
        result.append(commande);
    }
    return result;
}

bool Commande::addCommande(const CommandeData &commande)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Commande (idCommande, idPlat, Nbre_Plats, idTable, Prix_Total) "
                  "VALUES (:idCommande, :idPlat, :nbrePlats, :idTable, :prixTotal)");
    query.bindValue(":idCommande", commande.idCommande);
    query.bindValue(":idPlat", commande.idPlat);
    query.bindValue(":nbrePlats", commande.nbrePlats);
    query.bindValue(":idTable", commande.idTable);
    query.bindValue(":prixTotal", commande.prixTotal);

    if (!query.exec()) {
        qDebug() << "Error adding Commande:" << query.lastError().text();
        return false;
    }
    return true;
}

bool Commande::updateCommande(int id, int nbrePlats, int prixTotal)
{
    QSqlQuery query;
    query.prepare("UPDATE Commande SET Nbre_Plats = :nbrePlats, Prix_Total = :prixTotal WHERE idCommande = :idCommande");
    query.bindValue(":nbrePlats", nbrePlats);
    query.bindValue(":prixTotal", prixTotal);
    query.bindValue(":idCommande", id);

    if (!query.exec()) {
        qDebug() << "Error updating Commande:" << query.lastError().text();
        return false;
    }
    return true;
}

bool Commande::deleteCommande(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM Commande WHERE idCommande = :idCommande");
    query.bindValue(":idCommande", id);

    if (!query.exec()) {
        qDebug() << "Error deleting Commande:" << query.lastError().text();
        return false;
    }
    return true;
}
