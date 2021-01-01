#include "employe.h"
#include <QDebug>
#include "connexion.h"
Employes::Employes()
{
cin=0;
nom="";
prenomn="";
adresse="";
email="";
}
Employes::Employes(int cin,QString nom,QString prenom,QString adresse,QString email)
{
  this->cin=cin;
  this->nom=nom;
  this->prenomn=prenom;
    this->adresse=adresse;
    this->email=email;
}
QString Employes::get_nom(){return  nom;}
QString Employes::get_prenom(){return prenomn;}
QString Employes::get_adresse(){return adresse;}
QString Employes::get_email(){return email;}
int Employes::get_cin(){return  cin;}

bool Employes::ajouter()
{
QSqlQuery query;
QString res= QString::number(cin);
query.prepare("INSERT INTO employer (cin, NOM, PRENOM, ADRESSE, EMAIL) "
                    "VALUES (:cin, :nom, :prenom, :adresse, :email)");
query.bindValue(":cin", res);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenomn);
query.bindValue(":adresse", adresse);
query.bindValue(":email", email);

return    query.exec();
}

QSqlQueryModel * Employes::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from employer");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("email"));
    return model;
}

bool Employes::supprimer(int cinn)
{
QSqlQuery query;
QString res= QString::number(cinn);
query.prepare("Delete from employer where CIN = :cin ");
query.bindValue(":cin", res);
return    query.exec();
}
bool Employes::modifierFour(int cin )
 {
     QSqlQuery query;

      QString res=QString::number(cin);


     query.prepare("UPDATE EMPLOYER SET CIN=:cin,NOM=:nom,PRENOM=:prenom,EMAIL=:email,ADRESSE=:adresse,where CIN=:cin");

     query.bindValue(":cin",res);
     query.bindValue(":nom",nom);
     query.bindValue(":prenom",prenomn);
     query.bindValue(":email",email);
     query.bindValue(":adresse",adresse);





     return query.exec();
 }
QSqlQueryModel * Employes::trier()
{
    QSqlQuery *q=new QSqlQuery();
QSqlQueryModel *model=new QSqlQueryModel();
q->prepare("SELECT * FROM EMPLOYER order by nom ASC");
q->exec();
model->setQuery(*q);
return model;
}
