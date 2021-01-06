/********************************************************************************
** Form generated from reading UI file 'gestion_produit.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_PRODUIT_H
#define UI_GESTION_PRODUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_produit
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *ajouter;
    QLabel *label_5;
    QLineEdit *id;
    QComboBox *id_c;
    QLabel *label_2;
    QLineEdit *marque;
    QLineEdit *nom;
    QLabel *label_14;
    QLineEdit *prix;
    QLineEdit *quantite;
    QLabel *label_18;
    QWidget *tab_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QComboBox *id_m;
    QPushButton *modifier;
    QLineEdit *prix_m;
    QLineEdit *nom_m;
    QLineEdit *marque_m;
    QComboBox *id_cat_m;
    QLineEdit *quantite_m;
    QLabel *label_15;
    QLabel *label_19;
    QWidget *tab_3;
    QComboBox *id_s;
    QLabel *label_23;
    QPushButton *supprimer;
    QLabel *label_17;
    QLabel *label_20;
    QWidget *tab_10;
    QTableView *tableView;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QComboBox *comboBox_13;
    QCheckBox *checkBox;
    QComboBox *comboBox_12;
    QLabel *label_6;
    QRadioButton *radioButton_4;
    QLabel *label_8;
    QPushButton *pushButton_9;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_10;
    QComboBox *comboBox_14;
    QLabel *label_16;
    QLabel *label_21;
    QPushButton *pushButton;

    void setupUi(QDialog *gestion_produit)
    {
        if (gestion_produit->objectName().isEmpty())
            gestion_produit->setObjectName(QString::fromUtf8("gestion_produit"));
        gestion_produit->resize(861, 442);
        tabWidget = new QTabWidget(gestion_produit);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 861, 441));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 80, 56, 16));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 160, 81, 16));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 200, 81, 16));
        ajouter = new QPushButton(tab);
        ajouter->setObjectName(QString::fromUtf8("ajouter"));
        ajouter->setGeometry(QRect(260, 290, 93, 28));
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
        id_c = new QComboBox(tab);
        id_c->setObjectName(QString::fromUtf8("id_c"));
        id_c->setGeometry(QRect(230, 160, 111, 22));
        id_c->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 240, 71, 16));
        marque = new QLineEdit(tab);
        marque->setObjectName(QString::fromUtf8("marque"));
        marque->setGeometry(QRect(230, 120, 113, 22));
        marque->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(110, 120, 56, 16));
        prix = new QLineEdit(tab);
        prix->setObjectName(QString::fromUtf8("prix"));
        prix->setGeometry(QRect(230, 200, 113, 22));
        prix->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        quantite = new QLineEdit(tab);
        quantite->setObjectName(QString::fromUtf8("quantite"));
        quantite->setGeometry(QRect(230, 240, 113, 22));
        quantite->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(0, -5, 851, 411));
        label_18->setStyleSheet(QString::fromUtf8("background-image: url(\"C:/Users/zizo_/Desktop/prj/prj/Minimalist-Crumpled-Paper-Simple-Background-Image.jpg\"); /* The image"));
        tabWidget->addTab(tab, QString());
        label_18->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        ajouter->raise();
        label_5->raise();
        id->raise();
        id_c->raise();
        label_2->raise();
        marque->raise();
        nom->raise();
        label_14->raise();
        prix->raise();
        quantite->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(110, 70, 56, 16));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(110, 110, 71, 16));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(110, 150, 81, 16));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(110, 190, 71, 16));
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
        modifier->setGeometry(QRect(242, 270, 111, 28));
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
        prix_m = new QLineEdit(tab_2);
        prix_m->setObjectName(QString::fromUtf8("prix_m"));
        prix_m->setGeometry(QRect(230, 190, 113, 22));
        prix_m->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
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
        marque_m = new QLineEdit(tab_2);
        marque_m->setObjectName(QString::fromUtf8("marque_m"));
        marque_m->setGeometry(QRect(230, 110, 113, 22));
        marque_m->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        id_cat_m = new QComboBox(tab_2);
        id_cat_m->setObjectName(QString::fromUtf8("id_cat_m"));
        id_cat_m->setGeometry(QRect(230, 150, 73, 22));
        id_cat_m->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        quantite_m = new QLineEdit(tab_2);
        quantite_m->setObjectName(QString::fromUtf8("quantite_m"));
        quantite_m->setGeometry(QRect(230, 230, 113, 22));
        quantite_m->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(110, 230, 71, 16));
        label_19 = new QLabel(tab_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(0, -15, 841, 421));
        label_19->setStyleSheet(QString::fromUtf8("background-image: url(\"C:/Users/zizo_/Desktop/prj/prj/Minimalist-Crumpled-Paper-Simple-Background-Image.jpg\"); /* The image"));
        tabWidget->addTab(tab_2, QString());
        label_19->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        id_m->raise();
        modifier->raise();
        prix_m->raise();
        nom_m->raise();
        marque_m->raise();
        id_cat_m->raise();
        quantite_m->raise();
        label_15->raise();
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
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(50, 310, 55, 16));
        label_20 = new QLabel(tab_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(0, -15, 851, 421));
        label_20->setStyleSheet(QString::fromUtf8("background-image: url(\"C:/Users/zizo_/Desktop/prj/prj/Minimalist-Crumpled-Paper-Simple-Background-Image.jpg\"); /* The image"));
        tabWidget->addTab(tab_3, QString());
        label_20->raise();
        id_s->raise();
        label_23->raise();
        supprimer->raise();
        label_17->raise();
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        tableView = new QTableView(tab_10);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 80, 611, 261));
        label_7 = new QLabel(tab_10);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(250, 10, 99, 16));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_7->setFont(font);
        lineEdit = new QLineEdit(tab_10);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(250, 42, 211, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        comboBox_13 = new QComboBox(tab_10);
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->setObjectName(QString::fromUtf8("comboBox_13"));
        comboBox_13->setGeometry(QRect(370, 10, 101, 22));
        comboBox_13->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        checkBox = new QCheckBox(tab_10);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(530, 10, 106, 22));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        checkBox->setFont(font1);
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        comboBox_12 = new QComboBox(tab_10);
        comboBox_12->addItem(QString());
        comboBox_12->addItem(QString());
        comboBox_12->addItem(QString());
        comboBox_12->setObjectName(QString::fromUtf8("comboBox_12"));
        comboBox_12->setGeometry(QRect(550, 40, 91, 22));
        comboBox_12->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        label_6 = new QLabel(tab_10);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(480, 40, 61, 21));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        radioButton_4 = new QRadioButton(tab_10);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(450, 350, 21, 20));
        radioButton_4->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        label_8 = new QLabel(tab_10);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(280, 350, 165, 16));
        label_8->setFont(font2);
        pushButton_9 = new QPushButton(tab_10);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(480, 350, 141, 21));
        QFont font3;
        font3.setBold(true);
        font3.setUnderline(false);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        pushButton_9->setFont(font3);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        textBrowser = new QTextBrowser(tab_10);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(40, 80, 611, 261));
        pushButton_10 = new QPushButton(tab_10);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(30, 40, 191, 21));
        pushButton_10->setFont(font3);
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        comboBox_14 = new QComboBox(tab_10);
        comboBox_14->setObjectName(QString::fromUtf8("comboBox_14"));
        comboBox_14->setGeometry(QRect(160, 350, 101, 22));
        comboBox_14->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        label_16 = new QLabel(tab_10);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 350, 131, 16));
        label_16->setFont(font);
        label_21 = new QLabel(tab_10);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(0, -20, 851, 431));
        label_21->setStyleSheet(QString::fromUtf8("background-image: url(\"C:/Users/zizo_/Desktop/prj/prj/Minimalist-Crumpled-Paper-Simple-Background-Image.jpg\"); /* The image"));
        pushButton = new QPushButton(tab_10);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(670, 150, 111, 71));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        tabWidget->addTab(tab_10, QString());
        label_21->raise();
        textBrowser->raise();
        tableView->raise();
        label_7->raise();
        lineEdit->raise();
        comboBox_13->raise();
        checkBox->raise();
        comboBox_12->raise();
        label_6->raise();
        radioButton_4->raise();
        label_8->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        comboBox_14->raise();
        label_16->raise();
        pushButton->raise();

        retranslateUi(gestion_produit);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(gestion_produit);
    } // setupUi

    void retranslateUi(QDialog *gestion_produit)
    {
        gestion_produit->setWindowTitle(QCoreApplication::translate("gestion_produit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("gestion_produit", "Nom:", nullptr));
        label_3->setText(QCoreApplication::translate("gestion_produit", "Id categorie:", nullptr));
        label_4->setText(QCoreApplication::translate("gestion_produit", "Prix:", nullptr));
        ajouter->setText(QCoreApplication::translate("gestion_produit", "Ajouter", nullptr));
        label_5->setText(QCoreApplication::translate("gestion_produit", "ID produit:", nullptr));
        label_2->setText(QCoreApplication::translate("gestion_produit", "Quantite:", nullptr));
        label_14->setText(QCoreApplication::translate("gestion_produit", "Marque", nullptr));
        label_18->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("gestion_produit", "ajouter produit", nullptr));
        label_9->setText(QCoreApplication::translate("gestion_produit", "nom:", nullptr));
        label_10->setText(QCoreApplication::translate("gestion_produit", "marque:", nullptr));
        label_11->setText(QCoreApplication::translate("gestion_produit", "ID categorie:", nullptr));
        label_12->setText(QCoreApplication::translate("gestion_produit", "prix:", nullptr));
        label_13->setText(QCoreApplication::translate("gestion_produit", "Id produit:", nullptr));
        modifier->setText(QCoreApplication::translate("gestion_produit", "Modifier", nullptr));
        label_15->setText(QCoreApplication::translate("gestion_produit", "Quantite:", nullptr));
        label_19->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("gestion_produit", "modifier produit", nullptr));
        label_23->setText(QCoreApplication::translate("gestion_produit", "Id produit:", nullptr));
        supprimer->setText(QCoreApplication::translate("gestion_produit", "Supprimer", nullptr));
        label_17->setText(QString());
        label_20->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("gestion_produit", "supprimer produit", nullptr));
        label_7->setText(QCoreApplication::translate("gestion_produit", "Chercher avec:", nullptr));
        comboBox_13->setItemText(0, QCoreApplication::translate("gestion_produit", "id", nullptr));
        comboBox_13->setItemText(1, QCoreApplication::translate("gestion_produit", "nom", nullptr));
        comboBox_13->setItemText(2, QCoreApplication::translate("gestion_produit", "marque", nullptr));
        comboBox_13->setItemText(3, QCoreApplication::translate("gestion_produit", "id_cat", nullptr));
        comboBox_13->setItemText(4, QCoreApplication::translate("gestion_produit", "prix", nullptr));
        comboBox_13->setItemText(5, QCoreApplication::translate("gestion_produit", "quantite", nullptr));

        checkBox->setText(QCoreApplication::translate("gestion_produit", "Decroissant", nullptr));
        comboBox_12->setItemText(0, QCoreApplication::translate("gestion_produit", "id", nullptr));
        comboBox_12->setItemText(1, QCoreApplication::translate("gestion_produit", "nom", nullptr));
        comboBox_12->setItemText(2, QCoreApplication::translate("gestion_produit", "marque", nullptr));

        label_6->setText(QCoreApplication::translate("gestion_produit", "Tri selon:", nullptr));
        radioButton_4->setText(QString());
        label_8->setText(QCoreApplication::translate("gestion_produit", "Afficher tous les produits", nullptr));
        pushButton_9->setText(QCoreApplication::translate("gestion_produit", "HISTORIQUE", nullptr));
        pushButton_10->setText(QCoreApplication::translate("gestion_produit", "ENVOYER UN MAIL", nullptr));
        label_16->setText(QCoreApplication::translate("gestion_produit", "Afficher categorie:", nullptr));
        label_21->setText(QString());
        pushButton->setText(QCoreApplication::translate("gestion_produit", "imprimer ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QCoreApplication::translate("gestion_produit", "afficher produit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestion_produit: public Ui_gestion_produit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_PRODUIT_H
