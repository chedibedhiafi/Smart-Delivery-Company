#ifndef LIVRAISONS_H
#define LIVRAISONS_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class Livraisons
{
    QString descLiv;//dateLiv
    int idLiv;
public:
    Livraisons();
    Livraisons(int,QString);

    //getters
    int GetidLiv() { return idLiv; }
     QString GetDescLiv() { return descLiv; }
    // QString GetdateLiv() { return dateLiv; }
    //setters
     void SetidLiv(int val) { idLiv = val; }
     void SetdescLiv(QString val) { descLiv = val; }
    // void SetdateLiv(QString val) { dateLiv = val; }
     //Fonctionnalités de bases relatives à l'entité Fournisseur
     bool ajouterLiv();
     QSqlQueryModel *afficherLiv();
     bool supprimerLiv(int);
     bool modifierLiv(int );
    QSqlQueryModel *rechercherLiv(int );



};

#endif // LIVRAISONS_H
