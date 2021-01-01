#include "categorie.h"

categorie::categorie()
{

}
//comment
categorie::categorie(int id,QString nom)
{
  this->id=id;
  this->nom=nom;
}

int categorie::get_id(){return  id;}
QString categorie::get_nom(){return nom;}

bool categorie::ajouter(){
    QSqlQuery query;
   QString res= QString::number(id);
    query.prepare("INSERT INTO categories (id, nom) VALUES (:id, :nom)");
    query.bindValue(":id", res);
    query.bindValue(":nom", nom);
    return query.exec();
}
bool categorie::modifier(int f,QString a){
    QSqlQuery query;
    QString yep=QString::number(f);
    query.prepare("UPDATE categories set nom=:nom where id ='"+yep+"'");
    query.bindValue(":nom", a);

    return query.exec();
}
QSqlQueryModel * categorie::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from categories");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    return model;
}

bool categorie::supprimer(int ref_ch)
{
QSqlQuery query;

query.prepare("Delete from categories where id = :ref ");
query.bindValue(":ref", ref_ch);
return    query.exec();
}

QSqlQueryModel * categorie::Modelid()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();
    query->prepare("select id from categories");
    query->exec();
    model->setQuery(*query);
    return model;
}
bool categorie::rech(int x){
    QSqlQuery query;
    query.prepare("select * from categorie where id = :reference;");
    query.bindValue(":reference", x);
    return query.exec();
}
