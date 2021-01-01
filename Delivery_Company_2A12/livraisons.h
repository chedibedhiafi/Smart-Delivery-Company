#ifndef LIVRAISONS_H
#define LIVRAISONS_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class Livraisons
{
    QString descLiv,etat;//dateLiv
    int numLiv;
public:
    Livraisons();
    Livraisons(int,QString,QString);

    //getters
    int GetidLiv() { return numLiv; }
     QString GetDescLiv() { return descLiv; }
      QString GetEtat() { return etat; }
    // QString GetdateLiv() { return dateLiv; }
    //setters
     void SetidLiv(int val) { numLiv = val; }
     void SetdescLiv(QString val) { descLiv = val; }
     void SetEtat(QString val) { etat = val; }
     //Fonctionnalités de bases relatives à l'entité Fournisseur
     bool ajouterLiv();
     QSqlQueryModel *afficherLiv();
     bool supprimerLiv(int);
     bool modifierLiv(int );
     QSqlQueryModel *trierASC();
     QSqlQueryModel *trierDES();
     QSqlQueryModel *afficherRech(QString,QString);




};

#endif // LIVRAISONS_H
