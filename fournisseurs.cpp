#include "fournisseurs.h"

Fournisseurs::Fournisseurs()
{
cinPerso=0;
 numTel=0;
 idFour=0;
}
Fournisseurs::Fournisseurs(int idFour,QString nom,QString prenom ,int numTel,QString email,int cinPerso)
{

     this->idFour=idFour;
     this->nom=nom;
     this->prenom=prenom;
     //this->dateNaiss=dateNaiss;
     this->numTel=numTel;
     this->email=email;
    this->cinPerso=cinPerso;
}
//*************************AJOUTER FOURNISSEUR********************************************
 bool Fournisseurs::ajouterFour()
 {
     QSqlQuery query;
     QString res=QString::number(cinPerso);
     QString res1=QString::number(idFour);
     QString res2=QString::number(numTel);
     //prepare() prend la requete en paramètre pour la préparer à l'execution.
     query.prepare("INSERT INTO FOURNISSEURS (idFour, nom, prenom , numTel, email,cinPerso) VALUES (:idFour, :nom, :prenom , :numTel, :email,:cinPerso)"); //dateNaiss
     //creation des variables liées 
     query.bindValue(":idFour",res1);
     query.bindValue(":nom",nom);
     query.bindValue(":prenom",prenom);
     //query.bindValue(":dateNaiss",dateNaiss);
     query.bindValue(":numTel",res2);
     query.bindValue(":email",email);
     query.bindValue(":cinPerso",res);
     return query.exec();//exec() envoie la requete pour l'executer
 }
 //*************************AFFICHER FOURNISSEUR********************************************
 QSqlQueryModel * Fournisseurs::afficherFour()
 {
     QSqlQueryModel *model=new QSqlQueryModel();
     model->setQuery("select * from Fournisseurs");
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("IDENTIFIANT"));
     model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM"));
     model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM"));
     model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATE NAISSANCE"));

      //model->setHeaderData(4,Qt::Horizontal,QObject::tr("TELEPHONE"));

      model->setHeaderData(5,Qt::Horizontal,QObject::tr("EMAIL"));

      model->setHeaderData(6,Qt::Horizontal,QObject::tr("CIN"));


      return model;


 }
//*************************SUPPRIMER FOURNISSEUR********************************************
 bool Fournisseurs::supprimerFour(int idf)
 {
     QSqlQuery query;
     QString res=QString::number(idf);
    query.prepare("DELETE FROM  FOURNISSEURS WHERE idFour=:idFour" );
    query.bindValue(":idFour",res);
    return query.exec();
 }

 //*************************MODIFIER FOURNISSEUR********************************************
 bool Fournisseurs::modifierFour(int idf )
 {
     QSqlQuery query;

      QString res=QString::number(idf);
      QString cin=QString::number(cinPerso);
     QString num=QString::number(numTel);
     query.prepare("UPDATE Fournisseurs SET IDFOUR=:idFour,NOM=:nom,PRENOM=:prenom,NUMTEL=:numTel,EMAIL=:email,CINPERSO=:cinPerso WHERE IDFOUR=:idFour");

     query.bindValue(":idFour",res);
     query.bindValue(":nom",nom);
     query.bindValue(":prenom",prenom);
     query.bindValue(":numTel",num);
     query.bindValue(":email",email);
     query.bindValue(":cinPerso",cin);

     return query.exec();
 }

 //**********************TRIER A************************************
 QSqlQueryModel * Fournisseurs::trierA()
 {
     QSqlQuery *q=new QSqlQuery();
 QSqlQueryModel *model=new QSqlQueryModel();
 q->prepare("SELECT * FROM Fournisseurs order by nom ASC");
 q->exec();
 model->setQuery(*q);
 return model;
 }




 //**********************TRIER D************************************
 QSqlQueryModel * Fournisseurs::trierD()
 {
     QSqlQuery *q=new QSqlQuery();
 QSqlQueryModel *model=new QSqlQueryModel();
 q->prepare("SELECT * FROM Fournisseurs order by nom DESC");
 q->exec();
 model->setQuery(*q);
 return model;
 }
//**********************CHERCHER FOURNISSEUR************************************

 /*QSqlQueryModel * colloborateur::rechercher(QString cin)
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
QSqlQueryModel * Fournisseurs::rechercherFour(int idf)
 {
     QSqlQueryModel * model=new QSqlQueryModel();
     //QString res=QString::number(idf);
     model->setQuery("SELECT * From Fournisseurs WHERE idFour=:idFour");
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("IDENTIFIANT"));
     model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM"));
     model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM"));
     model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATE NAISSANCE"));

      model->setHeaderData(4,Qt::Horizontal,QObject::tr("TELEPHONE"));

      model->setHeaderData(5,Qt::Horizontal,QObject::tr("EMAIL"));

      model->setHeaderData(6,Qt::Horizontal,QObject::tr("CIN"));
     return model;
 }
