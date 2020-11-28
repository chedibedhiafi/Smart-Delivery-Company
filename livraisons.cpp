#include "livraisons.h"

Livraisons::Livraisons()
{

}
Livraisons::Livraisons(int idLiv,QString descLiv)
{
this->idLiv=idLiv;
this->descLiv=descLiv;
}
//*************************AJOUTER LIVRAISON********************************************
bool Livraisons:: ajouterLiv()
{
    QSqlQuery query;

    //prepare() prend la requete en paramètre pour la préparer à l'execution.
      QString res=::QString::number(idLiv);
     query.prepare("INSERT INTO Livraisons VALUES(:idLiv,:descLiv)");
    //creation des variables liées
    query.bindValue(":idLiv",res);
    query.bindValue(":descLiv",descLiv);
     return query.exec();//exec() envoie la requete pour l'executer

}
//*************************AFFICHER LIVRAISON********************************************
 QSqlQueryModel * Livraisons::afficherLiv()
 {
     QSqlQueryModel *model=new QSqlQueryModel();
     model->setQuery("select * from Livraisons");
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("IDENTIFIANT"));
      //model->setHeaderData(2,Qt::Horizontal,QObject::tr(""));
      model->setHeaderData(2,Qt::Horizontal,QObject::tr("DESCRIPTION"));

      return model;


 }
 //*************************SUPPRIMER LIVRAISON********************************************
 bool Livraisons:: supprimerLiv(int idl)
 {
     QSqlQuery query;
     QString res=QString::number(idl);
     query.prepare("Delete from Livraisons where idLiv= :idLiv");
     query.bindValue(":idLiv",res);
     return query.exec();
 }

  //*************************MODIFIER LIVRAISON********************************************
 bool Livraisons:: modifierLiv(int idl )
 {
    QSqlQuery query;
    QString res=QString::number(idl);
     query.prepare("UPDATE Livraisons SET IDLIV=:idLiv,DESCLIV=:descLiv WHERE IDLIV=:idLiv");
     query.bindValue(":idLiv",res);
     query.bindValue(":descLiv",descLiv);
     return query.exec();
 }
 /*bool colloborateur::modifier(int ide){
     QSqlQuery query;
     QString ids=QString::number(ide);

     query.prepare("UPDATE colloborateur SET ID= :id , ADRESSE = :adresse , EMAIL = :email , MARQUE = :marque , NUMERO = :numero WHERE ID= :id");
     query.bindValue(":cin", ids);
     query.bindValue(":id",id);
     query.bindValue(":adresse",adresse);
     query.bindValue(":email",email);
     query.bindValue(":marque",marque);
     query.bindValue(":numero",numero);
     return query.exec();*/

/*
*************************CHERCHER lIVRAISON********************************************
 QSqlQueryModel * Livraisons::rechercherLiv(int idl)
 {
     QSqlQueryModel * model=new QSqlQueryModel();
     model->setQuery("select * from Livraisons where idLiv=:idl");
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("IDENTIFIANT"));
    // model->setHeaderData(1,Qt::Horizontal,QObject::tr("adresse"));
     model->setHeaderData(2,Qt::Horizontal,QObject::tr("DESCRIPTION"));

     return model;
 }*/

/* QSqlQueryModel * colloborateur::rechercher(QString cin)
 {
     QSqlQueryModel * model=new QSqlQueryModel();
     model->setQuery("select * from colloborateur where id LIKE '"+cin+"%' or adresse LIKE '"+cin+"%' or email LIKE '"+cin+"%' or marque LIKE '"+cin+"%' or numero LIKE '"+cin+"%' ");
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("Identifiant"));
     model->setHeaderData(1,Qt::Horizontal,QObject::tr("adresse"));
     model->setHeaderData(2,Qt::Horizontal,QObject::tr("email"));
     model->setHeaderData(3,Qt::Horizontal,QObject::tr("marque"));
     model->setHeaderData(4,Qt::Horizontal,QObject::tr("numero"));
     return model;
 }*/
