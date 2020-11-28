#include "login.h"
#include "ui_login.h"
#include<QMessageBox>
#include<QString>
#include<QLineEdit>
#include<QDialog>

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

/*void login::on_pushButton_connecter_clicked()
{
    show();
        QString identifiant=ui->lineEdit_identifiant->text();
         QString mdp=ui->lineEdit_mdp->text();
         if (identifiant=="test"&& mdp=="test")
         {QMessageBox::information(this,"Connexion","welcome");
             hide();
             MainWindow M;
             M.setModel(true);
             M.exec();
             }
         else{if (mdp!="test")

    QMessageBox::warning(this,"Login","impossible de se connecter veuillez verifier votre mot de passe");
            //QPixmap error("C:/Users/hp/Desktop/2 eme anne/projet c++/Qt/hospital-apps-qt-master/PIC/False_icon");
                    //ui->error->setPixmap(error);
         }

}
*/
