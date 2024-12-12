#ifndef MATERIELCUISINEWORKER_H
#define MATERIELCUISINEWORKER_H

#include <QThread>
#include "materielcuisine.h"

class MaterielCuisineWorker : public QThread
{
    Q_OBJECT

public:
    explicit MaterielCuisineWorker(QObject *parent = nullptr);
    void run() override;

signals:
    void resultReady(const QVector<MaterielCuisine::MaterielCuisineData> &result);

private:
    MaterielCuisine materielCuisine;
};

#endif // MATERIELCUISINEWORKER_H
