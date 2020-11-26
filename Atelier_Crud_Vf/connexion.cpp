#include "connexion.h"

Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{
bool test=false;
    db=QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Projet_2A");
db.setUserName("chedi");
db.setPassword("chedi");


if (db.open()) test = true;


return test;

}
void Connexion::fermerConnexion()
{db.close();}
