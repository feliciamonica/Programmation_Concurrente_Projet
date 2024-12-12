#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

class Database : public QObject
{
    Q_OBJECT

public:
    explicit Database(QObject *parent = nullptr);
    ~Database();

    bool connectToDatabase(const QString &dbPath);
    bool isOpen() const;
    QSqlQuery executeQuery(const QString &queryStr);
    bool executeNonQuery(const QString &queryStr);
    QString lastError() const;

private:
    QSqlDatabase db;
};

#endif // DATABASE_H
