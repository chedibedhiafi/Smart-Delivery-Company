#ifndef FOURNISSEURS_H
#define FOURNISSEURS_H
#include<QWidget>
#include<QString>
#include<QDate>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include"liv.h"
#include "ui_liv.h"
class Fournisseurs
{
    QString nom,prenom,email,dateNaiss;
    int idFour,cinPerso;
    long numTel;

public:
    //constructeurs
    Fournisseurs();
    Fournisseurs(int,QString,QString,int,QString,int);
    //Getters
    int GetcinPerso() { return cinPerso; }
    int GetidFour() { return idFour; }
    QString Getnom() { return nom; }
    QString Getprenom() { return prenom; }
    // QDate GetdateNaiss() { return dateNaiss; }
     int GetnumTel() { return numTel; }
     QString Getemail() { return email; }
    //setters
     void SetcinPerso(int cin) { cinPerso = cin; }
    void SetidFour(int id) { idFour = id; }
     void Setnom(QString n) { nom = n; }
     void Setprenom(QString p) { prenom = p; }
    // void SetdateNaiss(QDate val) { dateNaiss = val; }
     void SetnumTel(int num) { numTel = num; }
     void Setemail(QString mail) { email = mail; }
     //Fonctionnalités de bases relatives à l'entité Fournisseur
     bool ajouterFour();
     bool supprimerFour(int );
     QSqlQueryModel *afficherFour();
     bool modifierFour(int);
     QSqlQueryModel *trierA();
     QSqlQueryModel *trierD();
     QSqlQueryModel *trier1A();
     QSqlQueryModel *trier1D();
     void pdfFour();
     void ImprimerFour();
  void recherche(Ui::liv *ui);

};
#endif // FOURNISSEURS_H
