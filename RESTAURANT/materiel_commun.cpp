#include "materiel_commun.h"
#include <QSqlError>
#include <QDebug>

MaterielCommun::MaterielCommun() {}

QVector<MaterielCommun::Materiel> MaterielCommun::getAllMateriel()
{
    QVector<Materiel> result;
    QSqlQuery query("SELECT * FROM Materiel_commun");

    while (query.next()) {
        Materiel materiel = {
            query.value("idMateriel_commun").toInt(),
            query.value("Type_materiel").toString(),
            query.value("Nom").toString(),
            query.value("Quantite").toInt(),
            query.value("idLocation").toInt()
        };
        result.append(materiel);
    }
    return result;
}

bool MaterielCommun::addMateriel(const Materiel &materiel)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Materiel_commun (idMateriel_commun, Type_materiel, Nom, Quantite, idLocation) "
                  "VALUES (:id, :type, :nom, :quantite, :location)");
    query.bindValue(":id", materiel.id);
    query.bindValue(":type", materiel.type);
    query.bindValue(":nom", materiel.nom);
    query.bindValue(":quantite", materiel.quantite);
    query.bindValue(":location", materiel.idLocation);

    if (!query.exec()) {
        qDebug() << "Error adding Materiel:" << query.lastError().text();
        return false;
    }
    return true;
}

bool MaterielCommun::updateMateriel(int id, int newQuantite)
{
    QSqlQuery query;
    query.prepare("UPDATE Materiel_commun SET Quantite = :quantite WHERE idMateriel_commun = :id");
    query.bindValue(":quantite", newQuantite);
    query.bindValue(":id", id);

    if (!query.exec()) {
        qDebug() << "Error updating Materiel:" << query.lastError().text();
        return false;
    }
    return true;
}

bool MaterielCommun::deleteMateriel(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM Materiel_commun WHERE idMateriel_commun = :id");
    query.bindValue(":id", id);

    if (!query.exec()) {
        qDebug() << "Error deleting Materiel:" << query.lastError().text();
        return false;
    }
    return true;
}
