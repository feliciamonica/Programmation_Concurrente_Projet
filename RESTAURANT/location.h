#ifndef LOCATION_H
#define LOCATION_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QSqlQuery>

class Location
{
public:
    struct LocationData {
        int idLocation;
        int quantite;
        QString nom;
    };

    Location();

    QVector<LocationData> getAllLocations();
    bool addLocation(const LocationData &location);
    bool updateLocation(int id, int quantite, const QString &newNom);
    bool deleteLocation(int id);

private:
    QString lastError;
};

#endif // LOCATION_H
