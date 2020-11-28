#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"fournisseurs.h"
#include"livraisons.h"
#include"connection.h"
#include<QMessageBox>
#include<QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_cinPerso->setValidator(new QIntValidator (0,99999999,this));
    ui->tableView_afficherLiv->setModel(tmpLiv.afficherLiv());
    ui->tableView_afficherFour->setModel(tmpFour.afficherFour());
    //sound
    player=new QMediaPlayer(this);
    //animation
    animation =new QPropertyAnimation(ui->goToLiv,"geometry");
    animation->setDuration(5000);
    animation->setStartValue(ui->goToLiv->geometry());
    animation->setEndValue(QRect( 380,530,201,41)); //200,200,100,50
    animation->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_goToFour_clicked()
{
    //go to page fournisseur
    ui->stackedWidget->setCurrentIndex(0);
    //transition sound
    player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/transition.mp3"));
    player->play();
    qDebug()<<player ->errorString();
    //animation
    animation =new QPropertyAnimation(ui->goToLiv,"geometry");
    animation->setDuration(5000);
    animation->setStartValue(ui->goToLiv->geometry());
    animation->setEndValue(QRect( 380,530,201,41)); //200,200,100,50
    animation->start();
}

void MainWindow::on_goToLiv_clicked()
{
    //go to page Livraison
    ui->stackedWidget->setCurrentIndex(1);
    //transition sound
    player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/transition.mp3"));
    player->play();
    qDebug()<<player ->errorString();
    //animation
    animation =new QPropertyAnimation(ui->goToFour,"geometry");
    animation->setDuration(5000);
    animation->setStartValue(ui->goToFour->geometry());
    animation->setEndValue(QRect( 380,530,201,41)); //200,200,100,50
    animation->start();

}

void MainWindow::on_ajouterFour_clicked()
{
    //button sound
    player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
    player->play();
    qDebug()<<player ->errorString();
    //récupération des informations saisies dans les 3 champs
    int cinPerso=ui->lineEdit_cinPerso->text().toInt();
   int idFour=ui->lineEdit_idFour->text().toInt();
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    //QDate dateNaiss=ui->dateEdit_dateFour->date();
    int numTel=ui->lineEdit_numTel->text().toInt();
    QString email=ui->lineEdit_emailFour->text();
    //instancier un objet de la classe fournisseur en utulisant les info dans l interface
    Fournisseurs F(idFour, nom, prenom , numTel, email,cinPerso); //dateNaiss
    bool test=F.ajouterFour(); //inserer l'objet fournisseur instancié dans le table etudiant et recuperer la valeur de retour de query.exec()
    if(test) //si requete exeecutee ==>QMessageBox::information
     {
        Fournisseurs tmpFour;
      ui->tableView_afficherFour->setModel(tmpFour.afficherFour());
        QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("ajout effectué\n""Click Cancek to exit"),QMessageBox::Cancel);
     }
    else //si requete non effectuee==>QMessageBox::critical
    {
      QMessageBox::critical(nullptr,QObject::tr("Not Ok"),QObject::tr("Ajout non effectuée.\n""Click Cancel to exit."),QMessageBox::Cancel);
}
    }


void MainWindow::on_ajouterLiv_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
     //récupération des informations saisies dans les 3 champs
        int idLiv=ui->line_idLiv->text().toInt();
        QString descLiv=ui->line_descLiv->text();
        //instancier un objet de la classe fournisseur en utulisant les info dans l interface
       Livraisons L(idLiv,descLiv);
        bool test=L.ajouterLiv(); //inserer l'objet fournisseur instancié dans le table etudiant et recuperer la valeur de retour de query.exec()
        if(test) //si requete exeecutee ==>QMessageBox::information
         {

          ui->tableView_afficherLiv->setModel(tmpLiv.afficherLiv());

            QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("ajout effectué\n""Click Cancel to exit"),QMessageBox::Cancel);
         }
        else //si requete non effectuee==>QMessageBox::critical
        {
          QMessageBox::critical(nullptr,QObject::tr("Not Ok"),QObject::tr("Ajout non effectuée.\n""Click Cancel to exit."),QMessageBox::Cancel);
         }
}

void MainWindow::on_supprimerLiv_clicked()
{

   int idLiv=ui->lineEdit_suppIdLiv->text().toInt();
bool test=tmpLiv.supprimerLiv(idLiv);
if(test)
{    ui->tableView_afficherLiv->setModel(tmpLiv.afficherLiv());
    QMessageBox::information(nullptr,QObject::tr("Supprimer une livraison"),QObject::tr("Livraison supprimée.\n""Click cancel to exit."),QMessageBox::Cancel);
 }
else //si requete non effectuee==>QMessageBox::critical
{
  QMessageBox::critical(nullptr,QObject::tr("supprimer une livraison"),QObject::tr("Erreur.\n""Click Cancel to exit."),QMessageBox::Cancel);
}
}


void MainWindow::on_supprimerFour_clicked()
{
    int idFour=ui->lineEdit_suppidFour->text().toInt();

    bool test=tmpFour.supprimerFour(idFour);
    if(test)
    {     ui->tableView_afficherFour->setModel(tmpFour.afficherFour());
        QMessageBox::information(nullptr,QObject::tr("Supprimer un Fournisseur"),QObject::tr("Fournisseur supprimé.\n""Click cancel to exit."),QMessageBox::Cancel);
     }
    else //si requete non effectuee==>QMessageBox::critical
    {
      QMessageBox::critical(nullptr,QObject::tr("supprimer un Fournisseur"),QObject::tr("Erreur.\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
}

void MainWindow::on_pushButton_modifierFour_clicked()
{
    //button sound
         player->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Downloads/click.mp3"));
         player->play();
         qDebug()<<player ->errorString();
         //modifier
         int idFour=ui->lineEdit_modifierId->text().toInt();
         QString nom=ui->lineEdit_modifierNom->text();
         QString prenom=ui->lineEdit_modifierPrenom->text();
         int numTel=ui->lineEdit_modifierNum->text().toInt();
         QString email=ui->lineEdit_modifierEmail->text();
         int cinPerso=ui->lineEdit_modifierCin->text().toInt();
         Fournisseurs F(idFour,nom,prenom,numTel,email,cinPerso);

      bool test=tmpFour.modifierFour(idFour);
      if(test)
      {
          ui->tableView_afficherFour->setModel(tmpFour.afficherFour());//refresh
          QMessageBox::information(nullptr,QObject::tr("modifier"),
                  QObject::tr("Modification avec succes.\n""click cancel to exit."),QMessageBox::Cancel);


      }
      else
          QMessageBox::critical(nullptr,QObject::tr("modifier"),
                                QObject::tr("Modification echoue .\n""Click cancel to exit."),QMessageBox::Cancel);
}
/*void MainWindow::on_pushButton_2_clicked()
{


         int id=ui -> lineEdit_1->text().toInt();
         QString adresse=ui->lineEdit_7->text();
         QString email=ui->lineEdit_6->text();
        QString marque=ui->lineEdit_8->text();
         int numero=ui->lineEdit_9->text().toInt();

         colloborateur c(id,adresse,email,marque,numero);
   bool test=c.modifier(id);
   if(test)
   {
       ui->tableView_colloborateur->setModel(tempcolloborateur.afficher());//refresh
       QMessageBox::information(nullptr,QObject::tr("modifier"),
                QObject::tr("Modification avec succes.\n"
                            "click cancel to exit."),QMessageBox::Cancel);

   }
   else
       QMessageBox::critical(nullptr,QObject::tr("modifier"),
                             QObject::tr("Modification echoue! .\n"
                                         "Click cancel to exit."),QMessageBox::Cancel);

   }*/




void MainWindow::on_pushButton_modifier_clicked()
{
      int idLiv=ui->LineEdit_modifierIdLiv->text().toInt();
       QString descLiv=ui->LineEdit_modifierDescLiv->text();

      Livraisons L(idLiv,descLiv);
      bool test=L.modifierLiv(idLiv);
      if(test)
      {
          ui->tableView_afficherLiv->setModel(tmpLiv.afficherLiv());//refresh
          QMessageBox::information(nullptr,QObject::tr("modifier"),
                  QObject::tr("Modification avec succes.\n""click cancel to exit."),QMessageBox::Cancel);

      }
      else
          QMessageBox::critical(nullptr,QObject::tr("modifier"),
                                QObject::tr("Modification echoue .\n""Click cancel to exit."),QMessageBox::Cancel);
}




void MainWindow::on_radioButton_A_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
        //trier
    ui->tableView_afficherFour->setModel(tmpFour.trierA());
}


void MainWindow::on_radioButton_D_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
        //trier
    ui->tableView_afficherFour->setModel(tmpFour.trierD());
}

/*void MainWindow::on_chercherFour_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
        //chercher
        int idFour=ui->line_aff_idLiv_4->text().toInt();
        ui->tableView_afficherFour ->setModel(tmpFour.rechercherFour(idFour));

}*/

void MainWindow::on_chercherFour_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
        //chercher
        int idFour=ui->lineEdit_suppidFour->text().toInt();
        ui->tableView_afficherFour->setModel(tmpFour.rechercherFour(idFour)) ;


}

/*void MainWindow::on_pushButton_7_clicked()
{

    QString cin =ui->lineEdit_12->text();
    ui->tableView_colloborateur->setModel(tempcolloborateur.rechercher(cin));
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Downloads/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();


}*/
/*void MainWindow::on_chercherLiv_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
        //chercher
        int idLiv=ui->lineEdit_suppidFour->text().toInt();
         ui->tableView_afficherLiv->setModel( tmpLiv.rechercherLiv(idLiv));

}*/

