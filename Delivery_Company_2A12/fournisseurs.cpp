#include "fournisseurs.h"
#include<QDebug>
#include<mainwindow.h>
#include"mainwindow.h"
#include "ui_mainwindow.h"
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrinter>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QTextDocument>
#include<QPrintDialog>
Fournisseurs::Fournisseurs()
{
cinPerso=0;
 numTel=0;
 idFour=0;
}
Fournisseurs::Fournisseurs(int idFour,QString nom,QString prenom ,int numTel,QString email,int cinPerso)
{

     this->idFour=idFour;
     this->nom=nom;
     this->prenom=prenom;
     //this->dateNaiss=dateNaiss;
     this->numTel=numTel;
     this->email=email;
    this->cinPerso=cinPerso;

}
//*************************AJOUTER FOURNISSEUR*****************************************

 bool Fournisseurs::ajouterFour()
 {
     QSqlQuery query;
     QString res=QString::number(cinPerso);
     QString res1=QString::number(idFour);
     QString res2=QString::number(numTel);
     //prepare() prend la requete en paramètre pour la préparer à l'execution.
     query.prepare("INSERT INTO FOURNISSEURS (idFour, nom, prenom , numTel, email,cinPerso) VALUES (:idFour, :nom, :prenom , :numTel, :email,:cinPerso)"); //dateNaiss
     //creation des variables liées
     query.bindValue(":idFour",res1);
     query.bindValue(":nom",nom);
     query.bindValue(":prenom",prenom);

     query.bindValue(":numTel",res2);
     query.bindValue(":email",email);
     query.bindValue(":cinPerso",res);


     return query.exec();//exec() envoie la requete pour l'executer
 }
 //*************************AFFICHER FOURNISSEUR********************************************
 QSqlQueryModel * Fournisseurs::afficherFour()
 {
     QSqlQueryModel *model=new QSqlQueryModel();
     model->setQuery("select * from Fournisseurs");
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("IDENTIFIANT"));
     model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM"));
     model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("TELEPHONE"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("EMAIL"));
  model->setHeaderData(5,Qt::Horizontal,QObject::tr("CIN"));

      return model;


 }
//*************************SUPPRIMER FOURNISSEUR********************************************
 bool Fournisseurs::supprimerFour(int idf)
 {
     QSqlQuery query;
     QString res=QString::number(idf);
    query.prepare("DELETE FROM  FOURNISSEURS WHERE idFour=:idFour" );
    query.bindValue(":idFour",res);
    return query.exec();
 }

 //*************************MODIFIER FOURNISSEUR********************************************
 bool Fournisseurs::modifierFour(int idf )
 {
     QSqlQuery query;

      QString res=QString::number(idf);
      QString cin=QString::number(cinPerso);
     QString num=QString::number(numTel);
    // QString nom;
     query.prepare("UPDATE Fournisseurs SET IDFOUR=:idFour,NOM=:nom,PRENOM=:prenom,NUMTEL=:numTel,EMAIL=:email,CINPERSO=:cinPerso  WHERE IDFOUR=:idFour");

     query.bindValue(":idFour",res);
     query.bindValue(":nom",nom);
     query.bindValue(":prenom",prenom);
     query.bindValue(":numTel",num);
     query.bindValue(":email",email);
     query.bindValue(":cinPerso",cin);





     return query.exec();
 }


 //**********************TRIER A selon NOM************************************
 QSqlQueryModel * Fournisseurs::trierA()
 {
     QSqlQuery *q=new QSqlQuery();
 QSqlQueryModel *model=new QSqlQueryModel();
 q->prepare("SELECT * FROM Fournisseurs order by nom ASC");
 q->exec();
 model->setQuery(*q);
 return model;
 }




 //**********************TRIER D selon NOM ************************************
 QSqlQueryModel * Fournisseurs::trierD()
 {
     QSqlQuery *q=new QSqlQuery();
 QSqlQueryModel *model=new QSqlQueryModel();
 q->prepare("SELECT * FROM Fournisseurs order by nom DESC");
 q->exec();
 model->setQuery(*q);
 return model;
 }
 //**********************TRIER A selon ID************************************
 QSqlQueryModel * Fournisseurs::trier1A()
 {
     QSqlQuery *q=new QSqlQuery();
 QSqlQueryModel *model=new QSqlQueryModel();
 q->prepare("SELECT * FROM Fournisseurs order by idFour ASC");
 q->exec();
 model->setQuery(*q);
 return model;
 }




 //**********************TRIER D selon ID ************************************
 QSqlQueryModel * Fournisseurs::trier1D()
 {
     QSqlQuery *q=new QSqlQuery();
 QSqlQueryModel *model=new QSqlQueryModel();
 q->prepare("SELECT * FROM Fournisseurs order by idFour DESC");
 q->exec();
 model->setQuery(*q);
 return model;
 }

//***********************CHERCHER FOURNISSEUR************************************


void Fournisseurs::recherche(Ui::liv *ui)
{QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    //int id=ui->lineEdit_suppidFour->text().toInt();lineEdit_chercher1
    QString mot =ui->lineEdit_suppidFour->text();
  //QString res=QString::number(idFour);
    q.prepare("SELECT * FROM Fournisseurs WHERE ( IDFOUR LIKE '%"+mot+"%' or NOM LIKE '%"+mot+"%' or CINPERSO LIKE '%"+mot+"%'  )");

    q.exec() ;
    modal->setQuery(q);
    ui->tableView_afficherFour->setModel(modal);

}
//*********************PDF*********************
void Fournisseurs::pdfFour()
{
    QString filename= QFileDialog::getSaveFileName((QWidget*)0, "Export PDF",QString(),"*.pdf");
    if(QFileInfo(filename).suffix().isEmpty()){filename.append(".pdf");}
    QPrinter printer(QPrinter::PrinterResolution);//La classe QPrinter est un périphérique de peinture qui peint sur une imprimante.
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName(filename);
    QTextDocument doc;
    QSqlQuery q;
    q.prepare("SELECT * FROM Fournisseurs"); //idFour, nom, prenom , numTel, email,cinPerso
    q.exec();
    QString pdf="<br> <h1 style='color:red'> LISTE DES FOURNISSEURS<br></h1>\n <br> <table> <tr> <th>REF</th> <tr> <th>IDFOUR</th> <tr> <th> NOM </th> <tr> <th>PRENOM </th> <tr> <th>numTel </th> <tr> <th>EMAIL </th> <tr> <th>CIN </th>   </tr>";

    while(q.next()){
            pdf=pdf+"<br> <tr> <td>"+q.value(0).toString()+" "+q.value(1).toString()+" "+q.value(2).toString()+" "+q.value(3).toString()+"</td>";
           }
            doc.setHtml(pdf);
            doc.setPageSize(printer.pageRect().size());
            doc.print(&printer);
}

