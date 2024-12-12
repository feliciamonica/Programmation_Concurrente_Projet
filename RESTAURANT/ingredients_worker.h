#ifndef INGREDIENTSWORKER_H
#define INGREDIENTSWORKER_H

#include <QThread>
#include "ingredients.h"

class IngredientsWorker : public QThread
{
    Q_OBJECT

public:
    explicit IngredientsWorker(QObject *parent = nullptr);
    void run() override;

signals:
    void resultReady(const QVector<Ingredients::IngredientsData> &result);

private:
    Ingredients ingredients;
};

#endif // INGREDIENTSWORKER_H
