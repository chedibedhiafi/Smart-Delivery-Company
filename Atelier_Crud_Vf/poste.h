#ifndef POSTE_H
#define POSTE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class Poste
{public:
    Poste();
    Poste(int,QString,int);
    QString get_nom();
    int get_codeposte();
    int get_montant();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
private:
    QString nom;
    int codeposte,montant;
};

#endif // POSTE_H
