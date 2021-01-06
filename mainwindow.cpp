#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Tab_afe->setModel(e.AfficherEmploye());











    ui->ID_aje->setValidator(new QIntValidator(1,999999, this));
    ui->CodePoste->setValidator(new QIntValidator(1,999999999, this));
    ui->Montant->setValidator(new QIntValidator(1,999999999, this));
    ui->flouss->setValidator(new QIntValidator(1,999999999, this));
    ui->CodePoste_2->setValidator(new QIntValidator(1,999999999, this));
    ui->CodePoste_3->setValidator(new QIntValidator(1,999999999, this));
    ui->ID_ree->setValidator(new QIntValidator(1,999999, this));
    ui->ID_ree_2->setValidator(new QIntValidator(1,999999, this));
    ui->ID_aje_3->setValidator(new QIntValidator(1,999999, this));
    ui->ID_aje_6->setValidator(new QIntValidator(1,999999, this));
    QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    ui->Nom_aje->setValidator(validator_String);
    ui->Nom->setValidator(validator_String);
    ui->Nom_2->setValidator(validator_String);
    ui->Nom_ree->setValidator(validator_String);
    ui->Nom_ree_2->setValidator(validator_String);
    ui->etat_ree->setValidator(validator_String);
    ui->Nom_aje_3->setValidator(validator_String);
    ui->Prenom_aje->setValidator(validator_String);
    ui->Prenom_aje_2->setValidator(validator_String);
    ui->Prenom_aje_3->setValidator(validator_String);
    ui->Prenom_aje_7->setValidator(validator_String);
    ui->Prenom_aje_8->setValidator(validator_String);
    ui->Prenom_aje_9->setValidator(validator_String);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Ajouter_e_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/chedi/Desktop/click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QMessageBox msgBox;
    QString Nom=ui->Nom_aje->text();
    QString Prenom=ui->Prenom_aje->text();
    QString Adresse=ui->Prenom_aje_2->text();
    QString Email=ui->Prenom_aje_3->text();
    int CIN=ui->ID_aje->text().toInt();
        Employe e(CIN,Prenom,Nom,Adresse,Email);
        bool test=e.AjouterEmploye();



        if(test)
           {  msgBox.setText("Ajout avec succes.");
             ui->Tab_afe->setModel(e.AfficherEmploye());}
         else
             msgBox.setText("Echec d'ajout");
             msgBox.exec();
             QString textajouter;
             historique h;
             QSqlQuery query;
             query.prepare("select * from EMPLOYER");
             textajouter="L'ajout d'un Employe a la base de donnees de reference = "+QString::number(CIN)+" a ete effectue avec succees";
             h.write(textajouter);
}

void MainWindow::on_modifier_e_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QMessageBox msgBox;
    QString Nom=ui->Nom_aje_3->text();
    QString Prenom=ui->Prenom_aje_7->text();
    QString Adresse=ui->Prenom_aje_8->text();
    QString Email=ui->Prenom_aje_9->text();
    int CIN=ui->ID_aje_3->text().toInt();
        Employe e(CIN,Prenom,Nom,Adresse,Email);
        bool test=e.ModifierEmploye();



        if(test)
           {  msgBox.setText("Modification avec succes.");
             ui->Tab_afe->setModel(e.AfficherEmploye());}
         else
             msgBox.setText("Echec de modification");
             msgBox.exec();
             QString textajouter;
             historique h;
             QSqlQuery query;
             query.prepare("select * from EMPLOYER");
             textajouter="La modification d'un Equipement a la base de donnees de reference = "+QString::number(CIN)+" a ete effectue avec succees";
             h.write(textajouter);
}

void MainWindow::on_Supprimer_e_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QMessageBox msgBox;
    int CIN=ui->ID_aje_6->text().toInt();
        bool test=e.SupprimerEmploye(CIN);



        if(test)
           {  msgBox.setText("Supression avec succes.");
             ui->Tab_afe->setModel(e.AfficherEmploye());}
         else
             msgBox.setText("Echec de supresssion");
             msgBox.exec();
             QString textajouter;
             historique h;
             QSqlQuery query;
             query.prepare("select * from EMPLOYER");
             textajouter="La suppression d'un Employe a la base de donnees de reference = "+QString::number(CIN)+" a ete effectue avec succees";
             h.write(textajouter);
}

void MainWindow::on_Backtomenu_clicked()
{
    ui->Tab_afe->setModel(e.AfficherEmploye());
}

void MainWindow::on_Trier_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_trier->setCurrentIndex(1);
}

void MainWindow::on_Triprix_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_prix->setCurrentIndex(1);
    ui->stackedWidget_etat->setCurrentIndex(0);
    ui->stackedWidget_nom->setCurrentIndex(0);
}

void MainWindow::on_TriAsc_e_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->Tab_afe->setModel(e.Afficher_ascCIN());
}

void MainWindow::on_TriDesc_e_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->Tab_afe->setModel(e.Afficher_descCIN());
}

void MainWindow::on_back_triprix_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_prix->setCurrentIndex(0);
}

void MainWindow::on_trinom_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_nom->setCurrentIndex(1);
    ui->stackedWidget_etat->setCurrentIndex(0);
    ui->stackedWidget_prix->setCurrentIndex(0);
}

void MainWindow::on_TriAsc_en_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->Tab_afe->setModel(e.Afficher_ascnom());
}

void MainWindow::on_TriDesc_en_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->Tab_afe->setModel(e.Afficher_descnom());
}

void MainWindow::on_back_trinom_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_nom->setCurrentIndex(0);
}

void MainWindow::on_Trietat_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_etat->setCurrentIndex(1);
    ui->stackedWidget_nom->setCurrentIndex(0);
    ui->stackedWidget_prix->setCurrentIndex(0);
}

void MainWindow::on_TriAsc_ee_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->Tab_afe->setModel(e.Afficher_ascprenom());
}

void MainWindow::on_TriDesc_ee_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->Tab_afe->setModel(e.Afficher_descprenom());
}

void MainWindow::on_back_trietat_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_etat->setCurrentIndex(0);
}

void MainWindow::on_back_tri_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_trier->setCurrentIndex(0);
}

void MainWindow::on_Rechercher_ID_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    int ID = ui->ID_ree->text().toInt();
    ui->ID_ree->setValidator(new QIntValidator(1,999999999, this));
    bool test=e.Rechercher_CIN(ID);
    QMessageBox msgBox;
    if(test)
       {ui->Tab_afe->setModel(e.Rechercher_CIN(ID));//refresh
        msgBox.setText("Recherche avec succes.");
    }
    else
    msgBox.setText("Erreur de recherche .");
    msgBox.exec();
}

void MainWindow::on_Rechercher_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_rechercher->setCurrentIndex(1);
}

void MainWindow::on_Rechercher_Nom_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    QString Nom=ui->Nom_ree->text();
    ui->Nom_ree->setValidator(validator_String);
    bool test=e.Rechercher_Nom(Nom);
    QMessageBox msgBox;
    if(test)
       {ui->Tab_afe->setModel(e.Rechercher_Nom(Nom));//refresh
        msgBox.setText("Recherche avec succes.");
    }
    else
    msgBox.setText("Erreur de recherche .");
    msgBox.exec();
}

void MainWindow::on_Rechercher_Etat_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QString Prenom=ui->etat_ree->text();

    bool test=e.Rechercher_Prenom(Prenom);
    QMessageBox msgBox;

    if(test)
        {ui->Tab_afe->setModel(e.Rechercher_Prenom(Prenom));//refresh
        msgBox.setText("Recherche avec succes.");}


}

void MainWindow::on_Back_rechercher_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_rechercher->setCurrentIndex(0);
}

void MainWindow::on_print_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QString str;
    str.append("<html><head></head><body><center>"+QString());
    str.append("<table border=1><tr>") ;
    str.append("<td>"+QString("CIN")+"</td>") ;
    str.append("<td>"+QString("Prenom")+"</td>") ;
    str.append("<td>"+QString("Nom")+"</td>") ;
    str.append("<td>"+QString("Adresse")+"</td>") ;
    str.append("<td>"+QString("Email")+"</td>") ;
    QSqlQuery* query=new QSqlQuery();
    query->exec("SELECT CIN,PRENOM,NOM,ADRESSE,EMAIL FROM EMPLOYER");

    while(query->next())
    {
    str.append("<tr><td>");
    str.append(query->value(0).toString()) ;
    str.append("</td><td>") ;
    str.append(query->value(1).toString());
    str.append("</td><td>") ;
    str.append(query->value(2).toString());
    str.append("</td><td>") ;
    str.append(query->value(3).toString());
    str.append("</td><td>") ;
    str.append(query->value(4).toString());
    str.append("</td><td>") ;


    }
    str.append("</table></center></body></html>") ;

    QPrinter printer ;
    printer.setOrientation(QPrinter::Portrait);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4) ;

    QString path=QFileDialog::getSaveFileName(NULL,"Convertir a PDF","C:/Users/skand/OneDrive/Bureau/GestionRH/PDF","PDF(*.pdf)");

    if (path.isEmpty()) return ;
    printer.setOutputFileName(path) ;
    QTextDocument doc;
    doc.setHtml(str) ;
    doc.print(&printer);
    QMessageBox::information(nullptr,QObject::tr("Creation PDF"),QObject::tr("PDF crée .\n"
                                                                                       "Click Cancel to exit ."),QMessageBox::Cancel);
}

void MainWindow::on_ajouter_f_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QMessageBox msgBox;
    QString Nom=ui->Nom->text();
    int ID=ui->CodePoste->text().toInt();
    int Mon=ui->Montant->text().toInt();
        Poste P(ID,Nom,Mon);
        bool test=P.AjouterPoste();



        if(test)
           {  msgBox.setText("Ajout avec succes.");
             ui->Tab_aff->setModel(P.AfficherPoste());}
         else
             msgBox.setText("Echec d'ajout");
             msgBox.exec();
             QString textajouter;
             historique h;
             QSqlQuery query;
             query.prepare("select * from POST");
             textajouter="L'ajout d'une poste a la base de donnees de reference = "+QString::number(ID)+" a ete effectue avec succees";
             h.write1(textajouter);
}

void MainWindow::on_modifier_f_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QMessageBox msgBox;
    QString Nom=ui->Nom_2->text();
    int ID=ui->CodePoste_2->text().toInt();
    int Montant=ui->flouss->text().toInt();
        Poste P(ID,Nom,Montant);
        bool test=P.ModifierPoste();



        if(test)
           {  msgBox.setText("Modification avec succes.");
             ui->Tab_aff->setModel(P.AfficherPoste());}
         else
             msgBox.setText("Echec de modification");
             msgBox.exec();
             QString textajouter;
             historique h;
             QSqlQuery query;
             query.prepare("select * from POST");
             textajouter="La modification d'une mondat a la base de donnees de reference = "+QString::number(ID)+" a ete effectue avec succees";
             h.write1(textajouter);
}

void MainWindow::on_Backtomenu_2_clicked()
{
    ui->Tab_aff->setModel(P.AfficherPoste());
}

void MainWindow::on_Supprimer_f_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QMessageBox msgBox;
    int CIN=ui->CodePoste_3->text().toInt();
        bool test=P.SupprimerPoste(CIN);



        if(test)
           {  msgBox.setText("Supression avec succes.");
             ui->Tab_aff->setModel(P.AfficherPoste());}
         else
             msgBox.setText("Echec de supresssion");
             msgBox.exec();
             QString textajouter;
             historique h;
             QSqlQuery query;
             query.prepare("select * from POST");
             textajouter="La suppression d'une Mondat a la base de donnees de reference = "+QString::number(CIN)+" a ete effectue avec succees";
             h.write1(textajouter);
}

void MainWindow::on_Trier_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_trier_2->setCurrentIndex(1);
}

void MainWindow::on_Triprix_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_prix_2->setCurrentIndex(1);
    ui->stackedWidget_etat_2->setCurrentIndex(0);
    ui->stackedWidget_nom_2->setCurrentIndex(0);
}

void MainWindow::on_TriAsc_e_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->Tab_aff->setModel(P.Afficher_ascID());
}

void MainWindow::on_TriDesc_e_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->Tab_aff->setModel(P.Afficher_descID());

}

void MainWindow::on_back_triprix_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_prix_2->setCurrentIndex(0);
}

void MainWindow::on_trinom_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_nom_2->setCurrentIndex(1);
    ui->stackedWidget_etat_2->setCurrentIndex(0);
    ui->stackedWidget_prix_2->setCurrentIndex(0);
}

void MainWindow::on_TriAsc_en_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->Tab_aff->setModel(P.Afficher_ascnom());
}

void MainWindow::on_TriDesc_en_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->Tab_aff->setModel(P.Afficher_descnom());
}

void MainWindow::on_back_trinom_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_nom_2->setCurrentIndex(0);
}

void MainWindow::on_Trietat_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_etat_2->setCurrentIndex(1);
    ui->stackedWidget_nom_2->setCurrentIndex(0);
    ui->stackedWidget_prix_2->setCurrentIndex(0);
}

void MainWindow::on_TriAsc_ee_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->Tab_aff->setModel(P.Afficher_ascMontant());
}

void MainWindow::on_TriDesc_ee_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->Tab_aff->setModel(P.Afficher_descMontant());
}

void MainWindow::on_back_trietat_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_etat_2->setCurrentIndex(0);
}

void MainWindow::on_back_tri_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget_trier_2->setCurrentIndex(0);
}

void MainWindow::on_Rechercher_ID_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    int ID = ui->ID_ree_2->text().toInt();
    ui->ID_ree_2->setValidator(new QIntValidator(1,999999999, this));
    bool test=P.Rechercher_ID(ID);
    QMessageBox msgBox;
    if(test)
       {msgBox.setText("Recherche avec succes.");
        ui->Tab_aff->setModel(P.Rechercher_ID(ID));//refresh

    }
    else
    msgBox.setText("Echec de modification.");
    msgBox.exec();
}

void MainWindow::on_Rechercher_Nom_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    QString Nom=ui->Nom_ree_2->text();
    ui->Nom_ree_2->setValidator(validator_String);
    bool test=P.Rechercher_Nom(Nom);
    QMessageBox msgBox;
    if(test)
       {msgBox.setText("Recherche avec succes.");
        ui->Tab_aff->setModel(P.Rechercher_Nom(Nom));//refresh

    }}

void MainWindow::on_Rechercher_Etat_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    int Montant=ui->etat_ree_2->text().toInt();
    bool test=P.Rechercher_Montant(Montant);
    QMessageBox msgBox;
    if(test)
       {msgBox.setText("Recherche avec succes.");
        ui->Tab_aff->setModel(P.Rechercher_Montant(Montant));//refresh

    }
    else
    msgBox.setText("Echec de recherche.");
    msgBox.exec();
}

void MainWindow::on_Rechercher_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
   ui->stackedWidget_rechercher_2->setCurrentIndex(1);
}

void MainWindow::on_Back_rechercher_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
   ui->stackedWidget_rechercher_2->setCurrentIndex(0);
}

void MainWindow::on_print_2_clicked()
{
    QMediaPlayer *click;
    click= new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/hpprobook/Desktop/wa/Final/Mouse_Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QString str;
    str.append("<html><head></head><body><center>"+QString());
    str.append("<table border=1><tr>") ;
    str.append("<td>"+QString("CodePoste")+"</td>") ;
    str.append("<td>"+QString("Nom")+"</td>") ;
    str.append("<td>"+QString("Montant")+"</td>") ;
    QSqlQuery* query=new QSqlQuery();
    query->exec("SELECT CODEPOSTE,NOM,MONTANT FROM POST");

    while(query->next())
    {
    str.append("<tr><td>");
    str.append(query->value(0).toString()) ;
    str.append("</td><td>") ;
    str.append(query->value(1).toString());
    str.append("</td><td>") ;
    str.append(query->value(2).toString());
    str.append("</td><td>") ;
    }
    str.append("</table></center></body></html>") ;

    QPrinter printer ;
    printer.setOrientation(QPrinter::Portrait);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4) ;

    QString path=QFileDialog::getSaveFileName(NULL,"Convertir a PDF","C:/Users/skand/OneDrive/Bureau/GestionRH/PDF","PDF(*.pdf)");

    if (path.isEmpty()) return ;
    printer.setOutputFileName(path) ;
    QTextDocument doc;
    doc.setHtml(str) ;
    doc.print(&printer);
    QMessageBox::information(nullptr,QObject::tr("Creation PDF"),QObject::tr("PDF crée .\n"
                                                                                       "Click Cancel to exit ."),QMessageBox::Cancel);
}

void MainWindow::on_pushButton_clicked()
{
    statistique s;
    s.exec();
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget_historique_3->setCurrentIndex(1);
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->Tab_afe->hide();
    historique h;
    ui->textBrowser_3->show();
    ui->textBrowser_3->setPlainText(h.read());
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->Tab_afe->show();
    ui->textBrowser_3->hide();
    ui->stackedWidget_historique_3->setCurrentIndex(0);

}

void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget_historique_4->setCurrentIndex(1);
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->Tab_aff->hide();
    historique h;
    ui->textBrowser_4->show();
    ui->textBrowser_4->setPlainText(h.read1());
}

void MainWindow::on_pushButton_15_clicked()
{
    ui->Tab_aff->show();
    ui->textBrowser_4->hide();
    ui->stackedWidget_historique_4->setCurrentIndex(0);
}
