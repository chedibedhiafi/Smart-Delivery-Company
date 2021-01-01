
#include "connexion.h"
#include<QFile>
#include<QDebug>



Connection::Connection()
{

}
 bool Connection::createConnection()
 {
     QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
     bool test=false;
     db.setDatabaseName("source_Projet2A"); //inserer le nom de la source de donnée ODBC
     db.setUserName("wala");//inserer nom de l'utulisateur
     db.setPassword("wala");//inserer mdp de cet utulisateur
     if(db.open()) //donnée correcte
         test=true;
     return test;

 }
void Connection::closeConnection()
{
    db.close();
}
