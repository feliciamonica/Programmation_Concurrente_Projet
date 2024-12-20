#include "ingredients_worker.h"

IngredientsWorker::IngredientsWorker(QObject *parent) : QThread(parent) {}

void IngredientsWorker::run()
{
    QVector<Ingredients::IngredientsData> result = ingredients.getAllIngredients();
    emit resultReady(result);
}
