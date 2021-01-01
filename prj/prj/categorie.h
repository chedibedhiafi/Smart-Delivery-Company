#ifndef CATEGORIE_H
#define CATEGORIE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class categorie
{
public:
    categorie();
    categorie(int,QString);
    int get_id();
    QString get_nom();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool rech(int);
    bool modifier(int,QString);
    QSqlQueryModel * Modelid();

private:
    int id;
    QString nom;
};

#endif // CATEGORIE_H
