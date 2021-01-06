#include "poste.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QSqlQueryModel>
Poste::Poste()
{
    ID=0;
    Nom="";
    Montant=0;

}
Poste::Poste(int ID,QString Nom,int Montant)
{
    this->ID=ID;
    this->Nom=Nom;
    this->Montant=Montant;
    //test
}
bool Poste::AjouterPoste()
{
    QSqlQuery query;

    QString ID_string=QString::number(ID);
    QString Montant_string=QString::number(Montant);


          query.prepare("INSERT INTO POST (CODEPOSTE,NOM,MONTANT)"
                        "VALUES (:ID, :Nom,:Montant)");
          query.bindValue(":ID", ID_string);
          query.bindValue(":Nom", Nom);
           query.bindValue(":Montant", Montant_string);

         return query.exec();


}
QSqlQueryModel* Poste::AfficherPoste()
{
  QSqlQueryModel* model=new QSqlQueryModel();
   model->setQuery("SELECT* FROM POST");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("CodePoste"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("Montant"));
  return  model;
}
QSqlQueryModel* Poste::Afficher_descID()//tri desc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from POST ORDER BY CODEPOSTE DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CodePoste"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Montant"));

        return model;
    }
QSqlQueryModel* Poste::Afficher_ascID()//tri asc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from POST ORDER BY CODEPOSTE ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CodePoste"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Montant"));

        return model;
    }
QSqlQueryModel* Poste::Afficher_descnom()//tri desc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from POST ORDER BY NOM DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CodePoste"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Montant"));

        return model;
    }
QSqlQueryModel* Poste::Afficher_ascnom()//tri asc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from POST ORDER BY NOM ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CodePoste"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Montant"));

        return model;
    }
QSqlQueryModel* Poste::Afficher_descMontant()//tri desc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from POST ORDER BY MONTANT DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CodePoste"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Montant"));

        return model;
    }
QSqlQueryModel* Poste::Afficher_ascMontant()//tri asc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from POST ORDER BY MONTANT ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CodePoste"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Montant"));

        return model;
    }
QSqlQueryModel* Poste::Rechercher_ID(int id)
{
    QSqlQuery query;
    query.prepare("select * from POST where CODEPOSTE = :id");
    query.bindValue(":id", id);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CodePoste"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Montant"));
        return model;
    }
QSqlQueryModel* Poste::Rechercher_Nom(QString Nom)
{
    QSqlQuery query;
    query.prepare("select * from POST where NOM = :Nom");
    query.bindValue(":Nom", Nom);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CodePoste"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Montant"));
        return model;
    }
QSqlQueryModel* Poste::Rechercher_Montant(int Montant)
{
    QSqlQuery query;
    query.prepare("select * from POST where MONTANT = :Montant");
    query.bindValue(":Montant", Montant);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CodePoste"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Montant"));
        return model;
    }

bool Poste::SupprimerPoste(int id)
{
QSqlQuery query;
QString id_string= QString::number(id);
query.prepare("DELETE FROM POST WHERE CODEPOSTE =:id");
query.bindValue(":id",id);
return query.exec();
}
bool Poste::ModifierPoste()
{

QSqlQuery query;
QString ID_string= QString::number(ID);
QString Montant_string= QString::number(Montant);

   query.prepare("UPDATE POST set CODEPOSTE=:ID, NOM=:Nom,MONTANT=:Montant where CODEPOSTE=:ID");

   query.bindValue(":ID", ID_string);
   query.bindValue(":Nom", Nom);
   query.bindValue(":Montant", Montant_string);

   return query.exec();
}
