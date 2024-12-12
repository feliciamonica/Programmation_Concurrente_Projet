#ifndef INGREDIENTS_H
#define INGREDIENTS_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QSqlQuery>

class Ingredients
{
public:
    struct IngredientsData {
        int idIngredients;
        int idLocation;
        QString nom;
        int quantite;
        QString dateExpiration;
    };

    Ingredients();

    QVector<IngredientsData> getAllIngredients();
    bool addIngredient(const IngredientsData &ingredient);
    bool updateIngredient(int id, int quantite);
    bool deleteIngredient(int id);

private:
    QString lastError;
};

#endif // INGREDIENTS_H
