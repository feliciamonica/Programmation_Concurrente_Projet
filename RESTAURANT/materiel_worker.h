#ifndef MATERIELWORKER_H
#define MATERIELWORKER_H

#include <QThread>
#include "materiel_commun.h"

class MaterielWorker : public QThread
{
    Q_OBJECT

public:
    explicit MaterielWorker(QObject *parent = nullptr);
    void run() override;

signals:
    void resultReady(const QVector<MaterielCommun::Materiel> &result);

private:
    MaterielCommun materielCommun;
};

#endif // MATERIELWORKER_H
