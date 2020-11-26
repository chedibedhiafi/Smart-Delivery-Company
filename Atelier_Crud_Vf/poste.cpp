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
query.prepare("INSERT INTO postes (CODEPOSTE, NOM, MONTANT) "
                    "VALUES (:codeposte, :nom, :montant)");
query.bindValue(":codeposte", res);
query.bindValue(":nom", nom);
query.bindValue(":montant", montant);


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


