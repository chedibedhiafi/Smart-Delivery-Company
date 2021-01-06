#include "connexion.h"

//connexion
Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{

    bool test=false;
        db=QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Projet_2A");
    db.setUserName("chedi");//inserer nom de l'utilisateur
    db.setPassword("chedi");//inserer mot de passe de cet utilisateur


    if (db.open()) test = true;


    return test;
}

void Connexion::fermerConnexion()
{db.close();}
