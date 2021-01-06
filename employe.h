#ifndef EMPLOYE_H
#define EMPLOYE_H


#include <QString>
#include <QSqlQueryModel>
#include <QAbstractItemModel>

class Employe
{private:
    int CIN;
    QString Prenom;
    QString Nom;
    QString Adresse;
    QString Email;
public:
   Employe();
    Employe(int,QString,QString,QString,QString);
    bool AjouterEmploye();
    bool ModifierEmploye();
   QSqlQueryModel* AfficherEmploye();
   QSqlQueryModel* Afficher_ascnom();//tri asc
   QSqlQueryModel* Afficher_descnom();//tri desc
   QSqlQueryModel* Afficher_ascprenom();//tri asc
   QSqlQueryModel* Afficher_descprenom();//tri desc
   QSqlQueryModel* Afficher_ascCIN();//tri asc
   QSqlQueryModel* Afficher_descCIN();//tri desc
   QSqlQueryModel* Rechercher_Prenom(QString Prenom);
   QSqlQueryModel* Rechercher_CIN(int CIN);
   QSqlQueryModel* Rechercher_Nom(QString Nom);
    bool SupprimerEmploye(int);
    void setNom(QString);
    void setPrenom(QString);
    void setAdresse(QString);
    void setEmail(QString);
    void setCIN(int);
    QString getNom();
    QString getPrenom();
    QString getAdresse();
    QString getEmail();
    int getCIN();


};

#endif // EMPLOYE_H
