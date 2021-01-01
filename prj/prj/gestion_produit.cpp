#include "gestion_produit.h"
#include "ui_gestion_produit.h"
#include <QMessageBox>
#include <QtDebug>
#include <QApplication>
#include "historique.h"
#include "produit.h"
#include "email.h"

gestion_produit::gestion_produit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestion_produit)
{
    ui->setupUi(this);
    ui->tableView->setModel(tmprec.afficher());//refresh
              ui->id_c->setModel(tmprec.Modelid_categorie());
              ui->id_cat_m->setModel(tmprec.Modelid_categorie());
              ui->id_m->setModel(tmprec.Modelid());
              ui->id_s->setModel(tmprec.Modelid());
              ui->comboBox_14->setModel(tmprec.Modelid_categorie());
              ui->id->setValidator(new QIntValidator(0,999999,this));
              ui->prix->setValidator(new QIntValidator(0,999999,this));
              ui->quantite->setValidator(new QIntValidator(0,999999,this));
              ui->prix_m->setValidator(new QIntValidator(0,999999,this));
              ui->quantite_m->setValidator(new QIntValidator(0,999999,this));
}

gestion_produit::~gestion_produit()
{
    delete ui;
}

void gestion_produit::on_ajouter_clicked()
{

        int ref = ui->id->text().toInt();
        int idc= ui->id_c->currentText().toInt();

        QString nom= ui->nom->text();
        QString marque= ui->marque->text();
        int prix=ui->prix->text().toInt();
        int qt=ui->quantite->text().toInt();
      produit p(ref,nom,marque,idc,prix,qt);
      bool test=p.ajouter();
      if(test)
    {ui->tableView->setModel(tmprec.afficher());//refresh
          ui->id_c->setModel(tmprec.Modelid_categorie());
          ui->id_cat_m->setModel(tmprec.Modelid_categorie());
          ui->id_m->setModel(tmprec.Modelid());
          ui->id_s->setModel(tmprec.Modelid());
    QMessageBox::information(nullptr, QObject::tr("Ajouter un produit"),
                      QObject::tr("produit ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("Ajouter un produit"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
      QString textajouter;
      int idR;
      historique h;
      QSqlQuery qry;
      qry.prepare("select * from produit");
      if (qry.exec())
      {
          while (qry.next())
          {
    idR =qry.value(0).toInt();
          }
      }

      textajouter="L'ajout d'un produit a la base de donnees de reference = "+QString::number(idR)+" a ete effectuee avec succees";
      h.write(textajouter);

}

void gestion_produit::on_modifier_clicked()
{
    int ref= ui->id_m->currentText().toInt();
    int idc= ui->id_cat_m->currentText().toInt();
    int prix=ui->prix_m->text().toInt();
    int qt=ui->quantite_m->text().toInt();
    QString nom= ui->nom_m->text();
    QString marque= ui->marque_m->text();
    produit p;

    if(p.rech(ref)){
           bool test = p.modifier(ref,nom,marque,idc,prix,qt);
           if(test){
               ui->tableView->setModel(tmprec.afficher());
               ui->id_c->setModel(tmprec.Modelid_categorie());
               ui->id_cat_m->setModel(tmprec.Modelid_categorie());
               ui->id_m->setModel(tmprec.Modelid());
               ui->id_s->setModel(tmprec.Modelid());
               QMessageBox::information(nullptr,QObject::tr("commande modifié"),QObject::tr("click cancel to exit!"),QMessageBox::Cancel);
           }}
    QString textajouter;
    int idR;
    historique h;
    QSqlQuery qry;
    qry.prepare("select * from produit");
    if (qry.exec())
    {
        while (qry.next())
        {
  idR =qry.value(0).toInt();
        }
    }

    textajouter="La modification d'un produit a la base de donnees de reference = "+QString::number(idR)+" a ete effectuee avec succees";
    h.write(textajouter);
}

void gestion_produit::on_supprimer_clicked()
{
    int rec = ui->id_s->currentText().toInt();
    bool test=tmprec.supprimer(rec);
    if(test)
    {ui->tableView->setModel(tmprec.afficher());//refresh
        ui->id_c->setModel(tmprec.Modelid_categorie());
        ui->id_cat_m->setModel(tmprec.Modelid_categorie());
        ui->id_m->setModel(tmprec.Modelid());
        ui->id_s->setModel(tmprec.Modelid());
        QMessageBox::information(nullptr, QObject::tr("Supprimer une produit"),
                    QObject::tr("produit supprimée.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une produit"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    QString textajouter;
    int idR;
    historique h;
    QSqlQuery qry;
    qry.prepare("select * from produit");
    if (qry.exec())
    {
        while (qry.next())
        {
  idR =qry.value(0).toInt();
        }
    }

    textajouter="La supression d'un produit a la base de donnees de reference = "+QString::number(idR)+" a ete effectuee avec succees";
    h.write(textajouter);
}

void gestion_produit::on_pushButton_9_clicked()
{
    ui->tableView->hide();
    historique h;
    ui->textBrowser->show();
    ui->textBrowser->setPlainText(h.read());
}

void gestion_produit::on_radioButton_4_clicked()
{
    ui->textBrowser->hide();
    ui->tableView->show();
 ui->tableView->setModel(tmprec.afficher());
}

void gestion_produit::on_comboBox_13_currentTextChanged(const QString &arg1)
{
    champ=arg1;
}

void gestion_produit::on_lineEdit_textChanged(const QString &arg1)
{
    QString valeur=arg1;
        champ=ui->comboBox_13->currentText();
        ui->tableView->setModel(tmprec.recherchee(champ,valeur,etat1));
}

void gestion_produit::on_checkBox_clicked(bool checked)
{
    if (checked){etat=1;
        etat1=1;
       }
    else if(checked!=1){
        etat=0;
        etat1=0;
    } qDebug () << "checked" << etat;
}

void gestion_produit::on_comboBox_12_currentTextChanged(const QString &arg1)
{
    QString valeur=arg1;
        champ=ui->comboBox_12->currentText();
         ui->tableView->setModel(tmprec.TRI(champ,valeur,etat1));
}

void gestion_produit::on_comboBox_14_currentTextChanged(const QString &arg1)
{
    QString valeur=arg1;

     ui->tableView->setModel(tmprec.afficher_cat(valeur));
}

void gestion_produit::on_pushButton_10_clicked()
{
    email e;
    e.exec();
}


void gestion_produit::on_pushButton_clicked()
{
    QString str;
        str.append("<html><head></head><body><center>"+QString());
        str.append("<table border=1><tr>") ;
        str.append("<td>"+QString("ID produit: ")+"</td>") ;
        str.append("<td>"+QString("Nom: ")+"</td>") ;
        str.append("<td>"+QString("Marque: ")+"</td>") ;
        str.append("<td>"+QString("ID category")+"</td>") ;
        str.append("<td>"+QString("Prix")+"</td>") ;
        str.append("<td>"+QString("Quantite")+"</td>") ;
        QSqlQuery* query=new QSqlQuery();
        query->exec("SELECT ID,NOM,MARQUE,ID_CAT,PRIX,QUANTITE FROM PRODUIT");

        while(query->next())
        {
        str.append("<tr><td>") ;
        str.append(query->value(0).toString()) ;
        str.append("</td><td>") ;
        str.append(query->value(1).toString());
        str.append("</td><td>") ;
        str.append(query->value(2).toString());
        str.append("</td><td>") ;
        str.append(query->value(3).toString()) ;
        str.append("</td><td>") ;
        str.append(query->value(4).toString()) ;
        str.append("</td><td>") ;
        str.append(query->value(5).toString()) ;
        str.append("</td><td>") ;


        }
        str.append("</table></center></body></html>") ;

        QPrinter printer ;
        printer.setOrientation(QPrinter::Portrait);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4) ;

        QString path=QFileDialog::getSaveFileName(NULL,"Convertir a PDF","C:/Users/zizo_/Desktop/prj","PDF(*.pdf)");

        if (path.isEmpty()) return ;
        printer.setOutputFileName(path) ;
        QTextDocument doc;
        doc.setHtml(str) ;
        doc.print(&printer);
        QMessageBox::information(nullptr,QObject::tr("Creation PDF"),QObject::tr("PDF crée .\n"
                                                                                           "Click Cancel to exit ."),QMessageBox::Cancel);
}
