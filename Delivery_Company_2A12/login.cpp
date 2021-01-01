#include "login.h"
#include "ui_login.h"

#include<QMessageBox>
#include<QString>
#include<mainwindow.h>
#include "liv.h"
#include "ui_mainwindow.h"
#include<QSqlQuery>
#include "ressourcehumaine.h"
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    QString nom,mdp;
    nom=ui->lineEdit->text();
    mdp=ui->lineEdit_2->text();
    if (nom=="mm" && mdp =="mm")
    {
       QMessageBox::information(nullptr,QObject::tr("Login"),
                                        QObject::tr("Adresse et mot de passe sont corrects .\n"
                                                    "Click Cancel to exit ."),QMessageBox::Cancel);
      // hide();
      mainwindow = new MainWindow(this);
       mainwindow->show();


    }
    else if (nom=="ww" && mdp =="ww")
    {
       QMessageBox::information(nullptr,QObject::tr("Login"),
                                        QObject::tr("Adresse et mot de passe sont corrects .\n"
                                                    "Click Cancel to exit ."),QMessageBox::Cancel);
      // hide();
       l =new liv(this);

       l->show();
    }
       else if (nom=="cc" && mdp =="cc")
       {
          QMessageBox::information(nullptr,QObject::tr("Login"),
                                           QObject::tr("Adresse et mot de passe sont corrects .\n"
                                                       "Click Cancel to exit ."),QMessageBox::Cancel);
         // hide();
          rh =new ressourceHumaine(this);
          rh->show();
}
}
