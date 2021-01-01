#include "liv.h"
#include "ui_liv.h"
#include"fournisseurs.h"
#include"livraisons.h"
#include"connexion.h"
#include<QMessageBox>
#include<QString>
#include<QPushButton>
#include <QtPrintSupport/QPrinter>
#include<QFileDialog>
#include<QTextDocument>
#include<QComboBox>
#include<QValidator>
liv::liv(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::liv)
{
    ui->setupUi(this);
    Fournisseurs tmpFour;
    QRegExp rx("(|\"|/|\\.,|[A-Z,a-z]){30}");
     ui->lineEdit_nom->setValidator(new QRegExpValidator(rx, this));
     ui->lineEdit_prenom->setValidator(new QRegExpValidator(rx, this));
     ui->lineEdit_modifierNom->setValidator(new QRegExpValidator(rx, this));
     ui->lineEdit_modifierPrenom->setValidator(new QRegExpValidator(rx, this));
     ui->lineEdit_etatLiv->setValidator(new QRegExpValidator(rx, this));
    //cc
     ui->lineEdit_modifierEtat->setValidator(new QRegExpValidator(rx, this));
     /*ui->line_descLiv->setValidator(new QRegExpValidator(rx, this));
     ui->LineEdit_modifierDescLiv->setValidator(new QRegExpValidator(rx, this));*/
 QIntValidator *roll=new QIntValidator(100000000,99999999);
 QIntValidator *roll1=new QIntValidator(1000000,999999);
 ui->lineEdit_cinPerso->setValidator(roll);
 ui->lineEdit_idFour->setValidator(roll1);
 ui->lineEdit_modifierId->setValidator(roll1);
 ui->lineEdit_modifierCin->setValidator(roll);
 ui->lineEdit_numTel->setValidator(roll);
 ui->lineEdit_modifierNum->setValidator(roll);
 ui->line_idLiv->setValidator(roll);
 ui->LineEdit_modifierIdLiv->setValidator(roll);
 ui->tableView_afficherLiv->setModel(tmpLiv.afficherLiv());
 ui->tableView_afficherFour->setModel(tmpFour.afficherFour());

 //sound
 player=new QMediaPlayer(this);
 //animation
 animation =new QPropertyAnimation(ui->goToLiv,"geometry");
 animation->setDuration(5000);
 animation->setStartValue(ui->goToLiv->geometry());
 animation->setEndValue(QRect( 510,640,201,41)); //200,200,100,50
 animation->start();
  connect(ui->ajouterLiv, SIGNAL(clicked(bool)), this, SLOT(on_ajouterLiv_clicked())); //ajout a
}



liv::~liv()
{
    delete ui;
}

void liv::on_goToFour_clicked()
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
    animation->setEndValue(QRect( 510,640,201,41)); //200,200,100,50
    animation->start();
}
void liv::on_goToLiv_clicked()
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
    animation->setEndValue(QRect( 510,640,201,41)); //200,200,100,50
    animation->start();

}

void liv::on_ajouterFour_clicked()
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
   /* else //si requete non effectuee==>QMessageBox::critical
    {
      QMessageBox::critical(nullptr,QObject::tr("Not Ok"),QObject::tr("Ajout non effectuée.\n""Click Cancel to exit."),QMessageBox::Cancel);
}*/
    }


void liv::on_ajouterLiv_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
     //récupération des informations saisies dans les 3 champs
        int numLiv=ui->line_idLiv->text().toInt();
        QString etat=ui->lineEdit_etatLiv->text();
        QString descLiv=ui->line_descLiv->text();

        //instancier un objet de la classe fournisseur en utulisant les info dans l interface
       Livraisons L(numLiv,etat,descLiv);
        bool test=L.ajouterLiv(); //inserer l'objet fournisseur instancié dans le table etudiant et recuperer la valeur de retour de query.exec()
        if(test) //si requete exeecutee ==>QMessageBox::information
         {

          ui->tableView_afficherLiv->setModel(tmpLiv.afficherLiv());

            QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("ajout effectué\n""Click Cancel to exit"),QMessageBox::Cancel);
         }
        /*else //si requete non effectuee==>QMessageBox::critical
        {
          QMessageBox::critical(nullptr,QObject::tr("Not Ok"),QObject::tr("Ajout non effectuée.\n""Click Cancel to exit."),QMessageBox::Cancel);
         }*/
}

void liv::on_supprimerLiv_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();

   int numLiv=ui->lineEdit_suppIdLiv->text().toInt();
bool test=tmpLiv.supprimerLiv(numLiv);
if(test)
{    ui->tableView_afficherLiv->setModel(tmpLiv.afficherLiv());
    QMessageBox::information(nullptr,QObject::tr("Supprimer une livraison"),QObject::tr("Livraison supprimée.\n""Click cancel to exit."),QMessageBox::Cancel);
 }
else //si requete non effectuee==>QMessageBox::critical
{
  QMessageBox::critical(nullptr,QObject::tr("supprimer une livraison"),QObject::tr("Erreur.\n""Click Cancel to exit."),QMessageBox::Cancel);
}
}


void liv::on_supprimerFour_clicked()
{ Fournisseurs tmpFour;
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

void liv::on_pushButton_modifierFour_clicked()
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

      bool test=F.modifierFour(idFour);
      if(test)
      { Fournisseurs tmpFour;
          ui->tableView_afficherFour->setModel(tmpFour.afficherFour());//refresh
          QMessageBox::information(nullptr,QObject::tr("modifier"),
                  QObject::tr("Modification avec succes.\n""click cancel to exit."),QMessageBox::Cancel);


      }
      else
          QMessageBox::critical(nullptr,QObject::tr("modifier"),
                                QObject::tr("Modification echoue .\n""Click cancel to exit."),QMessageBox::Cancel);
}


void liv::on_pushButton_modifier_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
      int numLiv=ui->LineEdit_modifierIdLiv->text().toInt();
       QString etat=ui->lineEdit_modifierEtat->text();
       QString descLiv=ui->LineEdit_modifierDescLiv->text();


      Livraisons L(numLiv,etat,descLiv);
      bool test=L.modifierLiv(numLiv);
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



void liv::on_chercherFour_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
    Fournisseurs F;
    F.recherche(ui);
}

void liv::on_radioButton_A_clicked()
{ Fournisseurs tmpFour;
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
        //trier
    ui->tableView_afficherFour->setModel(tmpFour.trierA());
}


void liv::on_radioButton_D_clicked()
{ Fournisseurs tmpFour;
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
        //trier
    ui->tableView_afficherFour->setModel(tmpFour.trierD());
}



void liv::on_pushButton_imprimer_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
        //imprimer
        QPrinter rd;
        QPrintDialog d(&rd,this);
        d.setWindowTitle("Print livre");
        d.addEnabledOption(QAbstractPrintDialog::PrintSelection);
        if(d.exec() != QDialog::Accepted)
            return;

}

void liv::on_pushButton_pdf_clicked()
{ //button sound
    player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
    player->play();
    qDebug()<<player ->errorString();
    //pdf

        QString fileName =QFileDialog::getSaveFileName((QWidget*)0,"Export PDF",QString(),"*pdf");
        if(QFileInfo(fileName).suffix().isEmpty()){fileName.append(".pdf");}
        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(fileName);
        QTextDocument doc ;
        QSqlQuery q;
        q.prepare("SELECT * FROM Livraisons");
        q.exec();
        QString pdf="<br> <h1 style='color:red'> LISTE DES LIVRAISONS <br></h1>\n <br> <table> <tr> <th>numLiv </th> <th>DescLiv </th>    </tr>  ";

        while (q.next()) {
            pdf= pdf+ "<br> <tr> <td>"+ q.value(0).toString()+" " + q.value(1).toString() +"</td> <td>" +q.value(2).toString() +"  ""  " "</td> <td>"+q.value(3).toString()+"</td> ";
            }
        doc.setHtml(pdf);
        doc.setPageSize(printer.pageRect().size()); //This is necessary if you want to hide the page number
        doc.print(&printer);

}

void liv::on_radioButton_ASC_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
        //trier
    ui->tableView_afficherLiv->setModel(tmpLiv.trierASC());
}

void liv::on_radioButton_DES_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
        //trier
    ui->tableView_afficherLiv->setModel(tmpLiv.trierDES());
}

/*void liv::on_chercherLiv_clicked()
{
    QString rech=ui->lineEdit_suppIdLiv->text();
    QString selon=ui->comboBox->currentText();
    if(rech.isEmpty())
    {QMessageBox::information(this,tr("Empty Field"),tr("Please choose"));
        return;
    }
    else
        ui->tableView_afficherLiv->setModel(tmpLiv.afficherRech(selon,rech));
}*/

void liv::on_pushButton_imprimerFour_clicked()
{

    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
        //imprimer
        QPrinter rd;
        QPrintDialog d(&rd,this);
        d.setWindowTitle("Print livre");
        d.addEnabledOption(QAbstractPrintDialog::PrintSelection);
        if(d.exec() != QDialog::Accepted)
            return;


}
void liv::on_pushButton_pdfFour_clicked()
{
    Fournisseurs tmpFour;


        tmpFour.pdfFour();
}

void liv::on_radioButton_clicked()
{

        QSqlQueryModel * modal=new QSqlQueryModel();


        QSqlQuery* qry=new QSqlQuery();

        qry->prepare("select * from Fournisseurs");
        qry->exec();

        modal->setQuery(*qry);
        ui->tableView_afficherFour->setModel(modal);

}

void liv::on_radioButton_actualiser_clicked()
{
    QSqlQueryModel * modal=new QSqlQueryModel();


    QSqlQuery* qry=new QSqlQuery();

    qry->prepare("select * from Livraisons");
    qry->exec();

    modal->setQuery(*qry);
    ui->tableView_afficherLiv->setModel(modal);

}

void liv::on_radioButton_ASC_triID_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
        //trier
        Fournisseurs tmpFour;
    ui->tableView_afficherFour->setModel(tmpFour.trier1A());
}

void liv::on_radioButton_DES_triID_clicked()
{
    //button sound
        player->setMedia(QUrl::fromLocalFile("C:/Users/Wala/Desktop/application/ressources/click.mp3"));
        player->play();
        qDebug()<<player ->errorString();
        //trier
        Fournisseurs tmpFour;
    ui->tableView_afficherFour->setModel(tmpFour.trier1D());
}

void liv::on_pushButton_clicked()
{

    // import file

    player->setMedia(QUrl("C:/Users/Wala/Desktop/elissa-aa-baly-habibi_uCClgMns.mp3")) ;
           player->play();
           qDebug() << player->errorString();

}


void liv::on_horizontalSlider_sliderMoved(int position)
{

    player->setPosition(position);

}

void liv::on_pushButton_2_clicked()
{
       player->stop();
}

void liv::on_positionChanged(qint64 position)
{
ui->horizontalSlider->setValue(position);
}

void liv::on_durationChanged(qint64 position)
{
 ui->horizontalSlider->setMaximum(position);

}

void liv::on_verticalSlider_sliderMoved(int position)
{
     player->setVolume(position);



}

