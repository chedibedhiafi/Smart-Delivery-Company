#include "livraisons.h"

Livraisons::Livraisons()
{

}
Livraisons::Livraisons(int numLiv,QString etat,QString descLiv)
{
this->numLiv=numLiv;
 this->etat=etat;
this->descLiv=descLiv;

}
//*************************AJOUTER LIVRAISON********************************************
bool Livraisons:: ajouterLiv()
{
    QSqlQuery query;

    //prepare() prend la requete en paramètre pour la préparer à l'execution.
      QString res=::QString::number(numLiv);
     query.prepare("INSERT INTO Livraisons VALUES(:numLiv,:etat,:descLiv)");
    //creation des variables liées
    query.bindValue(":numLiv",res);
    query.bindValue(":etat",etat);
    query.bindValue(":descLiv",descLiv);

     return query.exec();//exec() envoie la requete pour l'executer

}
//*************************AFFICHER LIVRAISON********************************************
 QSqlQueryModel * Livraisons::afficherLiv()
 {
     QSqlQueryModel *model=new QSqlQueryModel();
     model->setQuery("select * from Livraisons");
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("NUMERO"));
      model->setHeaderData(1,Qt::Horizontal,QObject::tr("ETAT"));
      model->setHeaderData(2,Qt::Horizontal,QObject::tr("DESCRIPTION"));

      return model;


 }
 //*************************SUPPRIMER LIVRAISON********************************************
 bool Livraisons:: supprimerLiv(int numl)
 {
     QSqlQuery query;
     QString res=QString::number(numl);
     query.prepare("Delete from Livraisons where NUMLIV= :numLiv");
     query.bindValue(":numLiv",res);
     return query.exec();
 }

  //*************************MODIFIER LIVRAISON********************************************
 bool Livraisons:: modifierLiv(int numl )
 {
    QSqlQuery query;
    QString res=QString::number(numl);
     query.prepare("UPDATE Livraisons SET NUMLIV=:numLiv,ETAT=:etat,DESCLIV=:descLiv WHERE NUMLIV=:numLiv");
     query.bindValue(":numLiv",res);
      query.bindValue(":etat",etat);
     query.bindValue(":descLiv",descLiv);

     return query.exec();
 }


 //**********************TRIER ASC************************************
 QSqlQueryModel * Livraisons::trierASC()
 {
     QSqlQuery *q=new QSqlQuery();
 QSqlQueryModel *model=new QSqlQueryModel();
 q->prepare("SELECT * FROM Livraisons order by numLiv ASC");
 q->exec();
 model->setQuery(*q);
 return model;
 }

 //**********************TRIER DESC************************************
 QSqlQueryModel * Livraisons::trierDES()
 {
     QSqlQuery *q=new QSqlQuery();
 QSqlQueryModel *model=new QSqlQueryModel();
 q->prepare("SELECT * FROM Livraisons order by numLiv DESC");
 q->exec();
 model->setQuery(*q);
 return model;
 }
//***********************rechercher ***************
 QSqlQueryModel* Livraisons::afficherRech(QString a, QString n)
 {
    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery("select * from Livraisons  where "+a+"="+n+"");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("NUMERO"));
     model->setHeaderData(1,Qt::Horizontal,QObject::tr("ETAT"));
     model->setHeaderData(2,Qt::Horizontal,QObject::tr("DESCRIPTION"));
     return model;

 }







