#ifndef PLATWORKER_H
#define PLATWORKER_H

#include <QThread>
#include "plat.h"

class PlatWorker : public QThread
{
    Q_OBJECT

public:
    explicit PlatWorker(QObject *parent = nullptr);
    void run() override;

signals:
    void resultReady(const QVector<Plat::PlatData> &result);

private:
    Plat plat;
};

#endif // PLATWORKER_H
