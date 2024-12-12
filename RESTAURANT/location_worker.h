#ifndef LOCATIONWORKER_H
#define LOCATIONWORKER_H

#include <QThread>
#include "location.h"

class LocationWorker : public QThread
{
    Q_OBJECT

public:
    explicit LocationWorker(QObject *parent = nullptr);
    void run() override;

signals:
    void resultReady(const QVector<Location::LocationData> &result);

private:
    Location location;
};

#endif // LOCATIONWORKER_H
