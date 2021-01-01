#include "ressourcehumaine.h"
#include "ui_ressourcehumaine.h"
#include "employe.h"
#include <QMessageBox>
#include "poste.h"
#include <QString>
#include<QtWidgets>
//#include "qtablewidget.h"
ressourceHumaine::ressourceHumaine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ressourceHumaine)
{
    ui->setupUi(this);

  ui->tabemployes->setModel(tmpemployes.afficher());
     // ui->tabposte->setModel(tmpposte.afficher());
     click = new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/chedi/Desktop/click.mp3"));
}

ressourceHumaine::~ressourceHumaine()
{
    delete ui;
}

void ressourceHumaine::on_pb_ajouter_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/chedi/Desktop/click.mp3"));
    click->play();
    qDebug()<<click ->errorString();

    int cin = ui->lineEdit_cin->text().toInt();
    QString nom= ui->lineEdit_nom->text();
    QString prenom= ui->lineEdit_prenom->text();
    QString email= ui->lineEdit_email->text();
    QString adresse= ui->lineEdit_adresse->text();
  Employes e(cin,nom,prenom,adresse,email);
  bool test=e.ajouter();
  if(test)
{

      ui->tabemployes->setModel(tmpemployes.afficher());
QMessageBox::information(nullptr, QObject::tr("Ajouter un employes"),
                  QObject::tr("Employes ajoutes.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un employes"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}

void ressourceHumaine::on_pb_supprimer_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/chedi/Desktop/click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
int cin = ui->lineEdit_cin_2->text().toInt();
bool test=tmpemployes.supprimer(cin);
if(test)
{ui->tabemployes->setModel(tmpemployes.afficher());
    QMessageBox::information(nullptr, QObject::tr("Supprimer un employes"),
                QObject::tr("Employes supprimé.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("Supprimer un émployes"),
                QObject::tr("Erreur !.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


}


void ressourceHumaine::on_pushButton_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/chedi/Desktop/click.mp3"));
    click->play();
    qDebug()<<click ->errorString();

        int codeposte = ui->lineEdit_codeposte->text().toInt();
        int montant = ui->lineEdit_montant->text().toInt();
        QString nom= ui->lineEdit_nom_2->text();

      Poste p(codeposte,nom,montant);
      bool test=p.ajouter();
      if(test)
    {

          ui->tabposte->setModel(tmpposte.afficher());
    QMessageBox::information(nullptr, QObject::tr("Ajouter un poste"),
                      QObject::tr("Poste ajoutes.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("Ajouter un poste"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);


    }

void ressourceHumaine::on_pushButton_2_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/chedi/Desktop/click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    int codeposte = ui->lineEdit_codeposte_2->text().toInt();
    bool test=tmpposte.supprimer(codeposte);
    if(test)
    {ui->tabposte->setModel(tmpposte.afficher());
        QMessageBox::information(nullptr, QObject::tr("Supprimer un poste"),
                    QObject::tr("Poste supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un poste"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}






void ressourceHumaine::on_pushButton_4_clicked()
{
    int cin=ui->lineEdit_modifiercin->text().toInt();
             QString nom=ui->lineEdit_modifiernom->text();
             QString prenom=ui->lineEdit_modifierprenom->text();

             QString email=ui->lineEdit_modifieremail->text();

             QString adresse=ui->lineEdit_modifieradresse->text();

             Employes F(cin,nom,prenom,email,adresse);

          bool test=F.modifierFour(cin);
          if(test)
          { Employes tmpFour;
              ui->tabemployes->setModel(tmpFour.afficher());
              QMessageBox::information(nullptr,QObject::tr("modifier"),
                      QObject::tr("Succes.\n""click cancel to exit."),QMessageBox::Cancel);


          }
          else
              QMessageBox::critical(nullptr,QObject::tr("modifier"),
                                    QObject::tr(" Erreur .\n""Click cancel to exit."),QMessageBox::Cancel);
    }


void ressourceHumaine::on_pushButton_3_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/chedi/Desktop/click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    int codeposte=ui->lineEdit_modifiercodeposte->text().toInt();
             QString nom=ui->lineEdit_modifiernom1->text();
             int montant=ui->lineEdit_modifiermontant->text().toInt();



             Poste F(codeposte,nom,montant);

          bool test=F.modifierFour(codeposte);
          if(test)
          { Poste tmpposte;
              ui->afficherFour->setModel(tmpposte.afficher());
              QMessageBox::information(nullptr,QObject::tr("modifier"),
                      QObject::tr("Succes.\n""click cancel to exit."),QMessageBox::Cancel);


          }
          else
              QMessageBox::critical(nullptr,QObject::tr("modifier"),
                                    QObject::tr("Erreur .\n""Click cancel to exit."),QMessageBox::Cancel);
    }



void ressourceHumaine::on_pushButton_5_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/chedi/Desktop/click.mp3"));
       click->play();
       qDebug()<<click ->errorString();
   ui->tab_trier->setModel(tmpemployes.trier());
}
