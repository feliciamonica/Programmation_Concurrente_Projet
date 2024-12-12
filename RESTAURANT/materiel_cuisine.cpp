#include "materiel_cuisine.h"
#include <QSqlError>
#include <QDebug>

MaterielCuisine::MaterielCuisine() {}

QVector<MaterielCuisine::MaterielCuisineData> MaterielCuisine::getAllMaterielCuisine()
{
    QVector<MaterielCuisineData> result;
    QSqlQuery query("SELECT * FROM Materiel_cuisine");

    while (query.next()) {
        MaterielCuisineData materiel = {
            query.value("idMateriel_cuisine").toInt(),
            query.value("Nom").toString(),
            query.value("Quantite").toInt(),
            query.value("Temps_lavage").toString(),
            query.value("Temps_remise_service").toString(),
            query.value("idLocation").toInt()
        };
        result.append(materiel);
    }
    return result;
}

bool MaterielCuisine::addMaterielCuisine(const MaterielCuisineData &materiel)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Materiel_cuisine (idMateriel_cuisine, Nom, Quantite, Temps_lavage, Temps_remise_service, idLocation) "
                  "VALUES (:idMaterielCuisine, :nom, :quantite, :tempsLavage, :tempsRemiseService, :idLocation)");
    query.bindValue(":idMaterielCuisine", materiel.idMaterielCuisine);
    query.bindValue(":nom", materiel.nom);
    query.bindValue(":quantite", materiel.quantite);
    query.bindValue(":tempsLavage", materiel.tempsLavage);
    query.bindValue(":tempsRemiseService", materiel.tempsRemiseService);
    query.bindValue(":idLocation", materiel.idLocation);

    if (!query.exec()) {
        qDebug() << "Error adding MaterielCuisine:" << query.lastError().text();
        return false;
    }
    return true;
}

bool MaterielCuisine::updateMaterielCuisine(int id, int quantite)
{
    QSqlQuery query;
    query.prepare("UPDATE Materiel_cuisine SET Quantite = :quantite WHERE idMateriel_cuisine = :idMaterielCuisine");
    query.bindValue(":quantite", quantite);
    query.bindValue(":idMaterielCuisine", id);

    if (!query.exec()) {
        qDebug() << "Error updating MaterielCuisine:" << query.lastError().text();
        return false;
    }
    return true;
}

bool MaterielCuisine::deleteMaterielCuisine(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM Materiel_cuisine WHERE idMateriel_cuisine = :idMaterielCuisine");
    query.bindValue(":idMaterielCuisine", id);

    if (!query.exec()) {
        qDebug() << "Error deleting MaterielCuisine:" << query.lastError().text();
        return false;
    }
    return true;
}
