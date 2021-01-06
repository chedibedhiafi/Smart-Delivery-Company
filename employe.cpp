#include "employe.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QSqlQueryModel>
Employe::Employe()
{
    CIN=0;
    Prenom="";
    Nom="";
    Adresse="";
    Email="";

}
Employe::Employe(int CIN,QString Prenom,QString Nom,QString Adresse,QString Email)
{
    this->CIN=CIN;
    this->Prenom=Prenom;
    this->Nom=Nom;
    this->Adresse=Adresse;
    this->Email=Email;
    //test
}
bool Employe::AjouterEmploye()
{
    QSqlQuery query;

    QString CIN_string=QString::number(CIN);

          query.prepare("INSERT INTO EMPLOYER (CIN,PRENOM,NOM,ADRESSE,EMAIL)"
                        "VALUES (:CIN, :Prenom, :Nom,:Adresse,:Email)");
          query.bindValue(":CIN", CIN_string);
          query.bindValue(":Prenom", Prenom);
          query.bindValue(":Nom", Nom);
          query.bindValue(":Adresse", Adresse);
          query.bindValue(":Email", Email);

         return query.exec();


}
QSqlQueryModel* Employe::AfficherEmploye()
{
  QSqlQueryModel* model=new QSqlQueryModel();
   model->setQuery("SELECT* FROM EMPLOYER");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prenom"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));
  return  model;
}
QSqlQueryModel* Employe::Afficher_descprenom()//tri desc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from EMPLOYER ORDER BY PRENOM DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));

        return model;
    }
QSqlQueryModel* Employe::Afficher_ascprenom()//tri asc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from EMPLOYER ORDER BY PRENOM ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));

        return model;
    }
QSqlQueryModel* Employe::Afficher_descnom()//tri desc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from EMPLOYER ORDER BY NOM DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));

        return model;
    }
QSqlQueryModel* Employe::Afficher_ascnom()//tri asc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from EMPLOYER ORDER BY NOM ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));

        return model;
    }
QSqlQueryModel* Employe::Afficher_descCIN()//tri desc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from EMPLOYER ORDER BY CIN DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));

        return model;
    }
QSqlQueryModel* Employe::Afficher_ascCIN()//tri asc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from EMPLOYER ORDER BY CIN ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));

        return model;
    }
QSqlQueryModel* Employe::Rechercher_CIN(int id)
{
    QSqlQuery query;
    query.prepare("select * from EMPLOYER where CIN = :id");
    query.bindValue(":id", id);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));
        return model;
    }
QSqlQueryModel* Employe::Rechercher_Nom(QString Nom)
{
    QSqlQuery query;
    query.prepare("select * from EMPLOYER where NOM = :Nom");
    query.bindValue(":Nom", Nom);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));
        return model;
    }
QSqlQueryModel* Employe::Rechercher_Prenom(QString Prenom)
{
    QSqlQuery query;
    query.prepare("select * from EMPLOYER where PRENOM = :Prenom");
    query.bindValue(":Prenom", Prenom);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));
        return model;
    }

bool Employe::SupprimerEmploye(int id)
{
QSqlQuery query;
QString id_string= QString::number(id);
query.prepare("DELETE FROM EMPLOYER WHERE CIN =:id");
query.bindValue(":id",id);
return query.exec();
}
bool Employe::ModifierEmploye()
{

QSqlQuery query;
QString CIN_string= QString::number(CIN);

   query.prepare("UPDATE EMPLOYER set CIN=:CIN, PRENOM=:Prenom,NOM=:Nom,ADRESSE=:Adresse,EMAIL=:Email where CIN=:CIN");

   query.bindValue(":CIN", CIN_string);
   query.bindValue(":Prenom", Prenom);
   query.bindValue(":Nom", Nom);
   query.bindValue(":Adresse", Adresse);
   query.bindValue(":Email", Email);

   return query.exec();
}
