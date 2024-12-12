#include "database.h"
#include <QDebug>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

Database::Database(QObject *parent) : QObject(parent)
{

}

Database::~Database()
{
    if (db.isOpen()) {
        db.close();
    }
}

bool Database::connectToDatabase(const QString &dbPath)
{
    // Ajouter une connexion SQLite
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath); // Spécifie le fichier SQLite à utiliser

    if (!db.open()) {
        qDebug() << "Error: Unable to connect to database -" << db.lastError().text();
        return false;
    }

    qDebug() << "Connected to SQLite database successfully.";
    return true;
}

bool Database::isOpen() const
{
    return db.isOpen();
}

QSqlQuery Database::executeQuery(const QString &queryStr)
{
    QSqlQuery query(db);
    if (!query.exec(queryStr)) {
        qDebug() << "Error executing query:" << query.lastError().text();
    }
    return query;
}

bool Database::executeNonQuery(const QString &queryStr)
{
    QSqlQuery query(db);
    if (!query.exec(queryStr)) {
        qDebug() << "Error executing non-query:" << query.lastError().text();
        return false;
    }
    return true;
}

QString Database::lastError() const
{
    return db.lastError().text();
}
