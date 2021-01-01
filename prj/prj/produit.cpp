#include "produit.h"
produit::produit()
{

}
produit::produit(int id,QString nom,QString marque,int id_cat,int prix,int quantite)
{
  this->marque=marque;
  this->id=id;
  this->nom=nom;
  this->id_cat=id_cat;
  this->prix=prix;
  this->quantite=quantite;

}

int produit::get_id(){return  id;}
QString produit::get_nom(){return nom;}
QString produit::get_marque(){return marque;}
int produit::get_idcat(){return id_cat;}
int produit::get_prix(){return prix;}
int produit::get_quantite(){return quantite;}
QSqlQueryModel * produit::Modelid()//combobox
{
    QSqlQueryModel * model = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();
    query->prepare("select id from produit");
    query->exec();
    model->setQuery(*query);
    return model;
}

bool produit::ajouter(){

    QSqlQuery query;
   QString res= QString::number(id),res1= QString::number(quantite),res2= QString::number(id_cat);//res2= QString::number(prix);//res3= QString::n
    query.prepare("INSERT INTO produit (id, nom, marque, id_cat, prix, quantite) VALUES (:id, :nom, :marque, :id_cat, :prix ,:quantite)");
    query.bindValue(":id", res);
    query.bindValue(":nom", nom);
    query.bindValue(":marque", marque);
    query.bindValue(":id_cat", res2);
    query.bindValue(":prix", prix);
    query.bindValue(":quantite", res1);

    return query.exec();
}
QSqlQueryModel * produit::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from produit");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("marque"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("id_cat"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("quantite"));

    return model;
}
bool produit::supprimer(int ref_ch)
{
QSqlQuery query;

query.prepare("Delete from produit where id = :ref ");
query.bindValue(":ref", ref_ch);
return    query.exec();
}
bool produit::rech(int x){
    QSqlQuery query;
    query.prepare("select * from produit where id = :reference;");
    query.bindValue(":reference", x);
    return query.exec();
}
bool produit::modifier(int f,QString a,QString b,int c,int d,int e){
    QSqlQuery query;
    QString yep=QString::number(f);
    query.prepare("UPDATE produit set nom=:nom ,marque=:marque ,id_cat=:id_cat , prix=:prix , quantite=:quantite  where id ='"+yep+"'");
    query.bindValue(":id",f);
    query.bindValue(":nom", a);
    query.bindValue(":marque", b);
    query.bindValue(":id_cat", c);
    query.bindValue(":prix", d);
    query.bindValue(":quantite",e);
    return query.exec();
}

QSqlQueryModel * produit::Modelid_categorie()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();
    query->prepare("select id from categories");
    query->exec();
    model->setQuery(*query);
    return model;
}
QSqlQueryModel * produit:: TRI(QString champ,QString valeur,int etat1)
{
    QSqlQueryModel * model=new QSqlQueryModel();

    QSqlQuery query;
    if(etat1==0)
   { if(valeur=="id"){
            query.prepare("SELECT * FROM produit  order by id");}
        else if(valeur=="nom"){
                    query.prepare("SELECT * FROM produit  order by nom");}
        else if(valeur=="marque"){
                    query.prepare("SELECT * FROM produit  order by marque");}


    }
    else if(etat1==1)  { if(valeur=="id"){
            query.prepare("SELECT * FROM produit  order by id");}
        else if(valeur=="nom"){
                    query.prepare("SELECT * FROM produit  order by nom desc ");}
        else if(valeur=="marque"){
                    query.prepare("SELECT * FROM produit  order by marque desc ");}

      }
    valeur="%"+valeur+"%";
    query.bindValue(":valeur",valeur);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("marque"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("id_cat"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prix"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("quantite"));
    return model;

}
QSqlQueryModel * produit:: recherchee(QString champ,QString valeur,int etat1)
{
    QSqlQueryModel * model=new QSqlQueryModel();

    QSqlQuery query;
    if(etat1==0)
   { query.prepare("SELECT * FROM produit WHERE ("+champ+" LIKE :valeur) order by id");}
    else if(etat1==1)  { query.prepare("SELECT * FROM produit WHERE ("+champ+" LIKE :valeur) order by id desc");}
    valeur="%"+valeur+"%";
    query.bindValue(":valeur",valeur);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("marque"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("id_cat"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prix"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("quantite"));
    return model;

}
QSqlQueryModel * produit::afficher_cat(QString ref_ch)
{QSqlQueryModel * model= new QSqlQueryModel();
QSqlQuery query;
query.prepare("select * from produit WHERE ("+ref_ch+" LIKE id_cat)");
query.exec();
model->setQuery(query);
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("marque"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("id_cat"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("quantite"));

    return model;
}
