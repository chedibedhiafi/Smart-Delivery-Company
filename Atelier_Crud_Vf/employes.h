#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class Employes
{public:
    Employes();
    Employes(int,QString,QString,QString,QString);
    QString get_nom();
    QString get_prenom();
    QString get_email();
    QString get_adresse();
    int get_cin();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
private:
    QString nom,prenomn,adresse,email;
    int cin;
};

#endif // ETUDIANT_H
