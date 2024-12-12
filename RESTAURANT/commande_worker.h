#ifndef COMMANDEWORKER_H
#define COMMANDEWORKER_H

#include <QThread>
#include "commande.h"

class CommandeWorker : public QThread
{
    Q_OBJECT

public:
    explicit CommandeWorker(QObject *parent = nullptr);
    void run() override;

signals:
    void resultReady(const QVector<Commande::CommandeData> &result);

private:
    Commande commande;
};

#endif //
