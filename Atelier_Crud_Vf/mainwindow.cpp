#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employes.h"
#include <QMessageBox>
#include "poste.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
ui->setupUi(this);

ui->tabemployes->setModel(tmpemployes.afficher());
/*
ui->tabposte->setModel(tmpposte.afficher());
*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
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

void MainWindow::on_pb_supprimer_clicked()
{
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



void MainWindow::on_pushButton_clicked()
{

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



void MainWindow::on_pushButton_2_clicked()
{
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

void MainWindow::on_pushButton_4_clicked()
{



    QString cin,nom,prenom,email,adresse;
    cin=ui->lineEdit_modifier_cin->text().toInt();
    prenom=ui->lineEdit_modifier_prenom->text();
    nom=ui->lineEdit_modifier_nom->text();
    email=ui->lineEdit_modifier_email->text();
    adresse=ui->lineEdit_modifier_adresse->text();
    QSqlQuery qry;
    qry.prepare("UPDATE employer SET cin='"+cin+"',prenom='"+prenom+"',nom='"+nom+"',adresse='"+adresse+"',email='"+email+"' where cin='"+cin+"' ");
    if(qry.exec())
    {
        QMessageBox::critical(this,tr("edit"),tr("updated"));

    }




}



