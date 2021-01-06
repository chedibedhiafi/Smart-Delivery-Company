#ifndef POSTE_H
#define POSTE_H


#include <QString>
#include <QSqlQueryModel>
#include <QAbstractItemModel>

class Poste
{private:
    int ID;
    QString Nom;
    int Montant;
public:
   Poste();
    Poste(int,QString,int);
    bool AjouterPoste();
    bool ModifierPoste();
   QSqlQueryModel* AfficherPoste();
   QSqlQueryModel* Afficher_ascnom();//tri asc
   QSqlQueryModel* Afficher_descnom();//tri desc
   QSqlQueryModel* Afficher_ascID();//tri asc
   QSqlQueryModel* Afficher_descID();//tri desc
   QSqlQueryModel* Afficher_ascMontant();//tri asc
   QSqlQueryModel* Afficher_descMontant();//tri desc
   QSqlQueryModel* Rechercher_ID(int );
   QSqlQueryModel* Rechercher_Montant(int );
   QSqlQueryModel* Rechercher_Nom(QString );
    bool SupprimerPoste(int);



};

#endif // POSTE_H
