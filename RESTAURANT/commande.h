#ifndef COMMANDE_H
#define COMMANDE_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QSqlQuery>

class Commande
{
public:
    struct CommandeData {
        int idCommande;
        int idPlat;
        int nbrePlats;
        int idTable;
        int prixTotal;
    };

    Commande();

    QVector<CommandeData> getAllCommandes();
    bool addCommande(const CommandeData &commande);
    bool updateCommande(int id, int nbrePlats, int prixTotal);
    bool deleteCommande(int id);

private:
    QString lastError;
};

#endif // COMMANDE_H
