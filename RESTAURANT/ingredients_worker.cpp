#include "ingredients_worker.h"

IngredientsWorker::IngredientsWorker(QObject *parent) : QThread(parent) {}

void IngredientsWorker::run()
{
    QVector<Ingredients::IngredientsData> ingredients = ingredients.getAllIngredients();
    emit resultReady(ingredients);
}
