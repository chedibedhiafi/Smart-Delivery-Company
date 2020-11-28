#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase> //pour accéder à la base de donnée
#include <QSqlError>
#include <QSqlQuery>

class Connection
{
   QSqlDatabase db;
public:
    Connection();
    bool createConnection();
    void closeConnection();
};

#endif // CONNECTION_H
