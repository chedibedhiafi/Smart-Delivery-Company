#include "poste.h"
#include <QDebug>
#include "connexion.h"
Poste::Poste()
{
codeposte=0;
nom="";
montant=0;

}
Poste::Poste(int codeposte,QString nom,int montant)
{
  this->codeposte=codeposte;
  this->nom=nom;
  this->montant=montant;

}
QString Poste::get_nom(){return  nom;}

int Poste::get_codeposte(){return  codeposte;}
int Poste::get_montant(){return montant;}
bool Poste::ajouter()
{
QSqlQuery query;
QString res= QString::number(codeposte);
QString res1= QString::number(montant);
query.prepare("INSERT INTO postes (CODEPOSTE, NOM, MONTANT) "
                    "VALUES (:codeposte, :nom, :montant)");
query.bindValue(":codeposte", res);
query.bindValue(":nom", nom);
query.bindValue(":montant", res1);


return    query.exec();
}

QSqlQueryModel * Poste::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from postes");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("codeposte"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("montant"));

    return model;
}

bool Poste::supprimer(int codepostee)
{
QSqlQuery query;
QString res= QString::number(codepostee);
query.prepare("Delete from postes where codeposte = :codeposte ");
query.bindValue(":codeposte", res);
return    query.exec();
}
bool Poste::modifierFour(int codeposte )
 {
     QSqlQuery query;

      QString res=QString::number(codeposte);


     query.prepare("UPDATE POSTES SET CODEPOSTE=:codeposte,NOM=:nom,MONTANT=:montant where CODEPOSTE=:codeposte");

     query.bindValue(":codeposte",res);
     query.bindValue(":nom",nom);
     query.bindValue(":montant",montant);






     return query.exec();
 }
QSqlQueryModel * Poste::trier()
{
    QSqlQuery *q=new QSqlQuery();
QSqlQueryModel *model=new QSqlQueryModel();
q->prepare("SELECT * FROM POSTES order by nom ASC");
q->exec();
model->setQuery(*q);
return model;
}


