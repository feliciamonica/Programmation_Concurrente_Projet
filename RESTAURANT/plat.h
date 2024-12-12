#ifndef PLAT_H
#define PLAT_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QSqlQuery>

class Plat
{
public:
    struct PlatData {
        int idPlat;
        QString nom;
        QString type;
        QString tempsPreparation;
        int idMenu;
    };

    Plat();

    QVector<PlatData> getAllPlats();
    bool addPlat(const PlatData &plat);
    bool updatePlat(int id, const QString &newNom, const QString &newType);
    bool deletePlat(int id);

private:
    QString lastError;
};

#endif // PLAT_H
