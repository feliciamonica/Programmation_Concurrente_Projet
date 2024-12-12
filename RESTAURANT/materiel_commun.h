#ifndef MATERIELCOMMUN_H
#define MATERIELCOMMUN_H

#include <QObject>
#include <QVector>
#include <QString>
#include <QSqlQuery>

class MaterielCommun
{
public:
    struct Materiel {
        int id;
        QString type;
        QString nom;
        int quantite;
        int idLocation;
    };

    MaterielCommun();

    QVector<Materiel> getAllMateriel();
    bool addMateriel(const Materiel &materiel);
    bool updateMateriel(int id, int newQuantite);
    bool deleteMateriel(int id);

private:
    QString lastError;
};

#endif // MATERIELCOMMUN_H
