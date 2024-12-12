#ifndef MATERIELCUISINE_H
#define MATERIELCUISINE_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QSqlQuery>

class MaterielCuisine
{
public:
    struct MaterielCuisineData {
        int idMaterielCuisine;
        QString nom;
        int quantite;
        QString tempsLavage;
        QString tempsRemiseService;
        int idLocation;
    };

    MaterielCuisine();

    QVector<MaterielCuisineData> getAllMaterielCuisine();
    bool addMaterielCuisine(const MaterielCuisineData &materiel);
    bool updateMaterielCuisine(int id, int quantite);
    bool deleteMaterielCuisine(int id);

private:
    QString lastError;
};

#endif // MATERIELCUISINE_H
