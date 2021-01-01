#include "gestion_categorie.h"
#include "ui_gestion_categorie.h"
#include <QMessageBox>
#include <QtDebug>
#include <QApplication>
gestion_categorie::gestion_categorie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestion_categorie)
{
    ui->setupUi(this);
    ui->tableView->setModel(tmprec.afficher());//refresh
              ui->id_m->setModel(tmprec.Modelid());
              ui->id_s->setModel(tmprec.Modelid());
              ui->id->setValidator(new QIntValidator(0,999999,this));
}

gestion_categorie::~gestion_categorie()
{
    delete ui;
}

void gestion_categorie::on_ajouter_clicked()
{


    int ref = ui->id->text().toInt();
    QString nom= ui->nom->text();

  categorie p(ref,nom);
  bool test=p.ajouter();
  if(test)
{ui->tableView->setModel(tmprec.afficher());//refresh
      ui->id_m->setModel(tmprec.Modelid());
      ui->id_s->setModel(tmprec.Modelid());
QMessageBox::information(nullptr, QObject::tr("Ajouter un categorie"),
                  QObject::tr("categorie ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un categorie"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void gestion_categorie::on_modifier_clicked()
{
    int ref= ui->id_m->currentText().toInt();
    QString nom= ui->nom_m->text();

    categorie p;


           bool test = p.modifier(ref,nom);
           if(test){
               ui->tableView->setModel(tmprec.afficher());
               ui->id_m->setModel(tmprec.Modelid());
               ui->id_s->setModel(tmprec.Modelid());
               QMessageBox::information(nullptr,QObject::tr("commande modifié"),QObject::tr("click cancel to exit!"),QMessageBox::Cancel);
           }
}

void gestion_categorie::on_supprimer_clicked()
{
    int rec = ui->id_s->currentText().toInt();
    bool test=tmprec.supprimer(rec);
    if(test)
    {ui->tableView->setModel(tmprec.afficher());//refresh
        ui->id_m->setModel(tmprec.Modelid());
        ui->id_s->setModel(tmprec.Modelid());
        QMessageBox::information(nullptr, QObject::tr("Supprimer une categorie"),
                    QObject::tr("categorie supprimée.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une categorie"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
