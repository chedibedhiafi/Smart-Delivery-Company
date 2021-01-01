/********************************************************************************
** Form generated from reading UI file 'gestion_categorie.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_CATEGORIE_H
#define UI_GESTION_CATEGORIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_categorie
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QPushButton *ajouter;
    QLabel *label_5;
    QLineEdit *id;
    QLineEdit *nom;
    QLabel *label_2;
    QWidget *tab_2;
    QLabel *label_9;
    QLabel *label_13;
    QComboBox *id_m;
    QPushButton *modifier;
    QLineEdit *nom_m;
    QLabel *label_3;
    QWidget *tab_3;
    QComboBox *id_s;
    QLabel *label_23;
    QPushButton *supprimer;
    QLabel *label_4;
    QWidget *tab_10;
    QTableView *tableView;
    QTextBrowser *textBrowser;
    QLabel *label_6;

    void setupUi(QDialog *gestion_categorie)
    {
        if (gestion_categorie->objectName().isEmpty())
            gestion_categorie->setObjectName(QString::fromUtf8("gestion_categorie"));
        gestion_categorie->resize(728, 428);
        tabWidget = new QTabWidget(gestion_categorie);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 731, 431));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 80, 56, 16));
        ajouter = new QPushButton(tab);
        ajouter->setObjectName(QString::fromUtf8("ajouter"));
        ajouter->setGeometry(QRect(290, 130, 93, 28));
        ajouter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #e12d4e;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 40, 101, 16));
        id = new QLineEdit(tab);
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(230, 40, 113, 22));
        id->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        nom = new QLineEdit(tab);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(230, 80, 113, 22));
        nom->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, -20, 731, 421));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(\"C:/Users/zizo_/Desktop/prj/prj/Minimalist-Crumpled-Paper-Simple-Background-Image.jpg\"); /* The image"));
        tabWidget->addTab(tab, QString());
        label_2->raise();
        label->raise();
        ajouter->raise();
        label_5->raise();
        id->raise();
        nom->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(110, 70, 56, 16));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(110, 30, 91, 16));
        id_m = new QComboBox(tab_2);
        id_m->setObjectName(QString::fromUtf8("id_m"));
        id_m->setGeometry(QRect(230, 30, 73, 22));
        id_m->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        modifier = new QPushButton(tab_2);
        modifier->setObjectName(QString::fromUtf8("modifier"));
        modifier->setGeometry(QRect(260, 120, 93, 28));
        modifier->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #e12d4e;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        nom_m = new QLineEdit(tab_2);
        nom_m->setObjectName(QString::fromUtf8("nom_m"));
        nom_m->setGeometry(QRect(230, 70, 113, 22));
        nom_m->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, -10, 731, 421));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(\"C:/Users/zizo_/Desktop/prj/prj/Minimalist-Crumpled-Paper-Simple-Background-Image.jpg\"); /* The image"));
        tabWidget->addTab(tab_2, QString());
        label_3->raise();
        label_9->raise();
        label_13->raise();
        id_m->raise();
        modifier->raise();
        nom_m->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        id_s = new QComboBox(tab_3);
        id_s->setObjectName(QString::fromUtf8("id_s"));
        id_s->setGeometry(QRect(270, 60, 73, 22));
        id_s->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        label_23 = new QLabel(tab_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(150, 60, 91, 16));
        supprimer = new QPushButton(tab_3);
        supprimer->setObjectName(QString::fromUtf8("supprimer"));
        supprimer->setGeometry(QRect(192, 110, 111, 28));
        supprimer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #e12d4e;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, -10, 731, 421));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(\"C:/Users/zizo_/Desktop/prj/prj/Minimalist-Crumpled-Paper-Simple-Background-Image.jpg\"); /* The image"));
        tabWidget->addTab(tab_3, QString());
        label_4->raise();
        id_s->raise();
        label_23->raise();
        supprimer->raise();
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        tableView = new QTableView(tab_10);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 641, 361));
        tableView->setStyleSheet(QString::fromUtf8(""));
        textBrowser = new QTextBrowser(tab_10);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(40, 80, 611, 261));
        label_6 = new QLabel(tab_10);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 731, 421));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(\"C:/Users/zizo_/Desktop/prj/prj/Minimalist-Crumpled-Paper-Simple-Background-Image.jpg\"); /* The image"));
        tabWidget->addTab(tab_10, QString());
        label_6->raise();
        textBrowser->raise();
        tableView->raise();

        retranslateUi(gestion_categorie);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_categorie);
    } // setupUi

    void retranslateUi(QDialog *gestion_categorie)
    {
        gestion_categorie->setWindowTitle(QCoreApplication::translate("gestion_categorie", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("gestion_categorie", "Nom:", nullptr));
        ajouter->setText(QCoreApplication::translate("gestion_categorie", "Ajouter", nullptr));
        label_5->setText(QCoreApplication::translate("gestion_categorie", "ID produit:", nullptr));
        label_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("gestion_categorie", "ajouter produit", nullptr));
        label_9->setText(QCoreApplication::translate("gestion_categorie", "nom:", nullptr));
        label_13->setText(QCoreApplication::translate("gestion_categorie", "Id produit:", nullptr));
        modifier->setText(QCoreApplication::translate("gestion_categorie", "Modifier", nullptr));
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("gestion_categorie", "modifier produit", nullptr));
        label_23->setText(QCoreApplication::translate("gestion_categorie", "Id produit:", nullptr));
        supprimer->setText(QCoreApplication::translate("gestion_categorie", "Supprimer", nullptr));
        label_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("gestion_categorie", "supprimer produit", nullptr));
        label_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QCoreApplication::translate("gestion_categorie", "afficher produit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestion_categorie: public Ui_gestion_categorie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_CATEGORIE_H
