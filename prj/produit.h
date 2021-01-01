#ifndef PRODUIT_H
#define PRODUIT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class produit
{
public:
    produit();
    produit(int,QString,QString,int,int,int);
    int get_id();
    int get_idcat();
    int get_quantite();
    int get_prix();
    QString get_nom();
    QString get_marque();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool rech(int);
    bool modifier(int,QString,QString,int,int,int);
    bool trier();
    QSqlQueryModel * Modelid();
    QSqlQueryModel * Modelid_categorie();
    QSqlQueryModel * recherchee(QString,QString,int);
    QSqlQueryModel * TRI(QString,QString,int);
    QSqlQueryModel * afficher_cat(QString ref_ch);
private:
    int id,id_cat,quantite;
    int prix;
    QString nom,marque;
};

#endif // PRODUIT_H
