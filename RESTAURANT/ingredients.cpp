#include "ingredients.h"
#include <QSqlError>
#include <QDebug>

Ingredients::Ingredients() {}

QVector<Ingredients::IngredientsData> Ingredients::getAllIngredients()
{
    QVector<IngredientsData> result;
    QSqlQuery query("SELECT * FROM Ingredients");

    while (query.next()) {
        IngredientsData ingredient = {
            query.value("idIngredients").toInt(),
            query.value("idLocation").toInt(),
            query.value("Nom").toString(),
            query.value("Quantite").toInt(),
            query.value("Date_expiration").toString()
        };
        result.append(ingredient);
    }
    return result;
}

bool Ingredients::addIngredient(const IngredientsData &ingredient)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Ingredients (idIngredients, idLocation, Nom, Quantite, Date_expiration) "
                  "VALUES (:idIngredients, :idLocation, :nom, :quantite, :dateExpiration)");
    query.bindValue(":idIngredients", ingredient.idIngredients);
    query.bindValue(":idLocation", ingredient.idLocation);
    query.bindValue(":nom", ingredient.nom);
    query.bindValue(":quantite", ingredient.quantite);
    query.bindValue(":dateExpiration", ingredient.dateExpiration);

    if (!query.exec()) {
        qDebug() << "Error adding Ingredient:" << query.lastError().text();
        return false;
    }
    return true;
}

bool Ingredients::updateIngredient(int id, int quantite)
{
    QSqlQuery query;
    query.prepare("UPDATE Ingredients SET Quantite = :quantite WHERE idIngredients = :idIngredients");
    query.bindValue(":quantite", quantite);
    query.bindValue(":idIngredients", id);

    if (!query.exec()) {
        qDebug() << "Error updating Ingredient:" << query.lastError().text();
        return false;
    }
    return true;
}

bool Ingredients::deleteIngredient(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM Ingredients WHERE idIngredients = :idIngredients");
    query.bindValue(":idIngredients", id);

    if (!query.exec()) {
        qDebug() << "Error deleting Ingredient:" << query.lastError().text();
        return false;
    }
    return true;
}
