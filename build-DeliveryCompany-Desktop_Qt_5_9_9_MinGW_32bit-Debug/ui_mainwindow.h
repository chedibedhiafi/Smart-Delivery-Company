/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *numR;
    QLineEdit *lineEdit_nomR;
    QLineEdit *lineEdit_descriptionR;
    QPushButton *pb_ajouter_rec;
    QPushButton *pushButton_2;
    QLineEdit *dateR;
    QLabel *label_15;
    QWidget *tab_8;
    QLineEdit *lineEdit_nomR2;
    QLineEdit *codeR2;
    QLabel *label_5;
    QLineEdit *dateR2;
    QLineEdit *lineEdit_descriptionR2;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pb_modifier_rec;
    QPushButton *pushButton_9;
    QLabel *label_14;
    QWidget *tab_6;
    QPushButton *pushButton_4;
    QPushButton *pb_print1_rec;
    QTableView *tab_reclamation;
    QPushButton *pb_afficher_rec;
    QLabel *label_13;
    QStackedWidget *widgettrie_2;
    QWidget *page_26;
    QPushButton *Trie_2;
    QWidget *page_27;
    QPushButton *pushButton_47;
    QPushButton *pb_tri_DateDescendant_rec;
    QPushButton *pb_asc_tri_rec;
    QPushButton *pb_desc_tri_rec;
    QPushButton *pb_tri_NomCroissant_rec;
    QPushButton *pb_tri_NomDeCroissant_rec;
    QPushButton *pb_tri_DateAscendant_rec;
    QStackedWidget *widgetrecherche_2;
    QWidget *page_28;
    QPushButton *Rechercher_2;
    QWidget *page_29;
    QPushButton *pushButton_48;
    QLineEdit *lineEdit_num_Rec;
    QPushButton *pb_afficher_reclamation;
    QLineEdit *lineEdit_num_Rec_2;
    QPushButton *pb_afficher_reclamation_2;
    QLineEdit *lineEdit_num_Rec_3;
    QPushButton *pb_afficher_reclamation_3;
    QWidget *tab_22;
    QLabel *label_32;
    QLabel *label_12;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_2;
    QPushButton *pb_supprimer_rec;
    QPushButton *pushButton_24;
    QLabel *temps_2;
    QWidget *tab_4;
    QTabWidget *MainWindow_2;
    QWidget *tab_9;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *codeA;
    QLineEdit *noman;
    QLineEdit *descriptionan;
    QPushButton *pb_ajouter_an;
    QLineEdit *datean;
    QPushButton *pushButton_8;
    QLabel *label_58;
    QWidget *tab_11;
    QLineEdit *datean_2;
    QLabel *label_23;
    QLineEdit *noman_2;
    QLineEdit *descriptionan_2;
    QLabel *label_24;
    QLineEdit *codean_2;
    QLabel *label_25;
    QPushButton *pb_modifier_an;
    QPushButton *pushButton_11;
    QLabel *label_57;
    QWidget *tab_10;
    QPushButton *pushButton_6;
    QTableView *tab_annonce;
    QPushButton *pb_print1_an;
    QPushButton *pb_afficher_an;
    QLabel *label_56;
    QStackedWidget *widgettrie;
    QWidget *page_24;
    QPushButton *Trie;
    QWidget *page_25;
    QPushButton *pushButton_46;
    QPushButton *pb_tri_CodeDescendant;
    QPushButton *pb_tri_NomDeCroissant;
    QPushButton *pb_tri_CodeAscendant;
    QPushButton *pb_tri_DateDescendant;
    QPushButton *pb_tri_DateAscendant;
    QPushButton *pb_tri_NomCroissant;
    QStackedWidget *widgetrecherche;
    QWidget *page_22;
    QPushButton *Rechercher;
    QWidget *page_23;
    QPushButton *pushButton_45;
    QLineEdit *lineEdit_code_an;
    QPushButton *pb_afficher_annonce;
    QLineEdit *lineEdit_code_an_2;
    QPushButton *pb_afficher_annonce_2;
    QLineEdit *lineEdit_code_an_3;
    QPushButton *pb_afficher_annonce_3;
    QWidget *tab_21;
    QLabel *label_55;
    QGroupBox *groupBox_5;
    QLineEdit *codeSuppr;
    QPushButton *pb_supprimer_an;
    QPushButton *pushButton_30;
    QLabel *temps;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(880, 694);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(164, 178, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 881, 661));
        tabWidget->setStyleSheet(QLatin1String("selection-background-color: rgb(85, 255, 127);\n"
"color: rgb(170, 0, 0);\n"
"font: 8pt \"Modern No. 20\";"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(22, 22));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 10, 861, 641));
        tabWidget_2->setStyleSheet(QLatin1String("selection-background-color: rgb(85, 255, 127);\n"
"font: 8pt \"Modern No. 20\";"));
        tabWidget_2->setTabShape(QTabWidget::Triangular);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_3 = new QTabWidget(tab_3);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(10, 10, 841, 541));
        tabWidget_3->setStyleSheet(QLatin1String("selection-background-color: rgb(85, 255, 127);\n"
"background-color: rgb(170, 170, 255);\n"
"font: 8pt \"Modern No. 20\";"));
        tabWidget_3->setTabShape(QTabWidget::Triangular);
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label = new QLabel(tab_5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 131, 20));
        label_2 = new QLabel(tab_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 90, 131, 20));
        label_3 = new QLabel(tab_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 140, 61, 20));
        label_4 = new QLabel(tab_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 190, 47, 14));
        numR = new QLineEdit(tab_5);
        numR->setObjectName(QStringLiteral("numR"));
        numR->setGeometry(QRect(190, 80, 171, 20));
        numR->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        lineEdit_nomR = new QLineEdit(tab_5);
        lineEdit_nomR->setObjectName(QStringLiteral("lineEdit_nomR"));
        lineEdit_nomR->setGeometry(QRect(190, 140, 171, 20));
        lineEdit_nomR->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        lineEdit_descriptionR = new QLineEdit(tab_5);
        lineEdit_descriptionR->setObjectName(QStringLiteral("lineEdit_descriptionR"));
        lineEdit_descriptionR->setGeometry(QRect(190, 200, 171, 20));
        lineEdit_descriptionR->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        pb_ajouter_rec = new QPushButton(tab_5);
        pb_ajouter_rec->setObjectName(QStringLiteral("pb_ajouter_rec"));
        pb_ajouter_rec->setGeometry(QRect(400, 170, 111, 23));
        pb_ajouter_rec->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        pb_ajouter_rec->setAutoRepeat(false);
        pushButton_2 = new QPushButton(tab_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 220, 71, 23));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        dateR = new QLineEdit(tab_5);
        dateR->setObjectName(QStringLiteral("dateR"));
        dateR->setGeometry(QRect(190, 260, 171, 20));
        dateR->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(690, 390, 111, 101));
        label_15->setStyleSheet(QStringLiteral("image: url(:/128600931_1102401160197019_8051103514919619627_n.png);"));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/128600931_1102401160197019_8051103514919619627_n.png")));
        label_15->setScaledContents(true);
        label_15->setWordWrap(false);
        label_15->setOpenExternalLinks(false);
        tabWidget_3->addTab(tab_5, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        lineEdit_nomR2 = new QLineEdit(tab_8);
        lineEdit_nomR2->setObjectName(QStringLiteral("lineEdit_nomR2"));
        lineEdit_nomR2->setGeometry(QRect(190, 110, 151, 20));
        lineEdit_nomR2->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        codeR2 = new QLineEdit(tab_8);
        codeR2->setObjectName(QStringLiteral("codeR2"));
        codeR2->setGeometry(QRect(190, 50, 151, 20));
        codeR2->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        label_5 = new QLabel(tab_8);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 90, 131, 20));
        dateR2 = new QLineEdit(tab_8);
        dateR2->setObjectName(QStringLiteral("dateR2"));
        dateR2->setGeometry(QRect(190, 230, 151, 20));
        dateR2->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        lineEdit_descriptionR2 = new QLineEdit(tab_8);
        lineEdit_descriptionR2->setObjectName(QStringLiteral("lineEdit_descriptionR2"));
        lineEdit_descriptionR2->setGeometry(QRect(190, 170, 151, 20));
        lineEdit_descriptionR2->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        label_7 = new QLabel(tab_8);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 140, 81, 20));
        label_8 = new QLabel(tab_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 200, 47, 14));
        pb_modifier_rec = new QPushButton(tab_8);
        pb_modifier_rec->setObjectName(QStringLiteral("pb_modifier_rec"));
        pb_modifier_rec->setGeometry(QRect(410, 130, 111, 23));
        pb_modifier_rec->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        pushButton_9 = new QPushButton(tab_8);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(430, 170, 71, 23));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        label_14 = new QLabel(tab_8);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(700, 390, 121, 101));
        label_14->setStyleSheet(QStringLiteral("image: url(:/128600931_1102401160197019_8051103514919619627_n.png);"));
        label_14->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/128600931_1102401160197019_8051103514919619627_n.png")));
        label_14->setScaledContents(true);
        label_14->setWordWrap(false);
        label_14->setOpenExternalLinks(false);
        tabWidget_3->addTab(tab_8, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        pushButton_4 = new QPushButton(tab_6);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(470, 440, 91, 23));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        pb_print1_rec = new QPushButton(tab_6);
        pb_print1_rec->setObjectName(QStringLiteral("pb_print1_rec"));
        pb_print1_rec->setGeometry(QRect(260, 440, 101, 23));
        pb_print1_rec->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        tab_reclamation = new QTableView(tab_6);
        tab_reclamation->setObjectName(QStringLiteral("tab_reclamation"));
        tab_reclamation->setGeometry(QRect(10, 210, 621, 201));
        tab_reclamation->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pb_afficher_rec = new QPushButton(tab_6);
        pb_afficher_rec->setObjectName(QStringLiteral("pb_afficher_rec"));
        pb_afficher_rec->setGeometry(QRect(30, 440, 101, 23));
        pb_afficher_rec->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        label_13 = new QLabel(tab_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(740, 430, 91, 71));
        label_13->setStyleSheet(QStringLiteral("image: url(:/128600931_1102401160197019_8051103514919619627_n.png);"));
        label_13->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/128600931_1102401160197019_8051103514919619627_n.png")));
        label_13->setScaledContents(true);
        label_13->setWordWrap(false);
        label_13->setOpenExternalLinks(false);
        widgettrie_2 = new QStackedWidget(tab_6);
        widgettrie_2->setObjectName(QStringLiteral("widgettrie_2"));
        widgettrie_2->setGeometry(QRect(-10, 0, 651, 151));
        page_26 = new QWidget();
        page_26->setObjectName(QStringLiteral("page_26"));
        Trie_2 = new QPushButton(page_26);
        Trie_2->setObjectName(QStringLiteral("Trie_2"));
        Trie_2->setGeometry(QRect(290, 50, 91, 23));
        Trie_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        widgettrie_2->addWidget(page_26);
        page_27 = new QWidget();
        page_27->setObjectName(QStringLiteral("page_27"));
        pushButton_47 = new QPushButton(page_27);
        pushButton_47->setObjectName(QStringLiteral("pushButton_47"));
        pushButton_47->setGeometry(QRect(270, 120, 81, 21));
        pushButton_47->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        pb_tri_DateDescendant_rec = new QPushButton(page_27);
        pb_tri_DateDescendant_rec->setObjectName(QStringLiteral("pb_tri_DateDescendant_rec"));
        pb_tri_DateDescendant_rec->setGeometry(QRect(460, 80, 121, 23));
        pb_tri_DateDescendant_rec->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_asc_tri_rec = new QPushButton(page_27);
        pb_asc_tri_rec->setObjectName(QStringLiteral("pb_asc_tri_rec"));
        pb_asc_tri_rec->setGeometry(QRect(40, 30, 121, 23));
        pb_asc_tri_rec->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        pb_desc_tri_rec = new QPushButton(page_27);
        pb_desc_tri_rec->setObjectName(QStringLiteral("pb_desc_tri_rec"));
        pb_desc_tri_rec->setGeometry(QRect(40, 80, 121, 23));
        pb_desc_tri_rec->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_tri_NomCroissant_rec = new QPushButton(page_27);
        pb_tri_NomCroissant_rec->setObjectName(QStringLiteral("pb_tri_NomCroissant_rec"));
        pb_tri_NomCroissant_rec->setGeometry(QRect(270, 80, 121, 23));
        pb_tri_NomCroissant_rec->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        pb_tri_NomDeCroissant_rec = new QPushButton(page_27);
        pb_tri_NomDeCroissant_rec->setObjectName(QStringLiteral("pb_tri_NomDeCroissant_rec"));
        pb_tri_NomDeCroissant_rec->setGeometry(QRect(270, 30, 121, 23));
        pb_tri_NomDeCroissant_rec->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_tri_DateAscendant_rec = new QPushButton(page_27);
        pb_tri_DateAscendant_rec->setObjectName(QStringLiteral("pb_tri_DateAscendant_rec"));
        pb_tri_DateAscendant_rec->setGeometry(QRect(460, 30, 121, 23));
        pb_tri_DateAscendant_rec->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        widgettrie_2->addWidget(page_27);
        widgetrecherche_2 = new QStackedWidget(tab_6);
        widgetrecherche_2->setObjectName(QStringLiteral("widgetrecherche_2"));
        widgetrecherche_2->setGeometry(QRect(640, 200, 181, 221));
        page_28 = new QWidget();
        page_28->setObjectName(QStringLiteral("page_28"));
        Rechercher_2 = new QPushButton(page_28);
        Rechercher_2->setObjectName(QStringLiteral("Rechercher_2"));
        Rechercher_2->setGeometry(QRect(50, 70, 81, 23));
        Rechercher_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        widgetrecherche_2->addWidget(page_28);
        page_29 = new QWidget();
        page_29->setObjectName(QStringLiteral("page_29"));
        pushButton_48 = new QPushButton(page_29);
        pushButton_48->setObjectName(QStringLiteral("pushButton_48"));
        pushButton_48->setGeometry(QRect(120, 190, 61, 21));
        pushButton_48->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        lineEdit_num_Rec = new QLineEdit(page_29);
        lineEdit_num_Rec->setObjectName(QStringLiteral("lineEdit_num_Rec"));
        lineEdit_num_Rec->setGeometry(QRect(30, 20, 131, 20));
        lineEdit_num_Rec->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        pb_afficher_reclamation = new QPushButton(page_29);
        pb_afficher_reclamation->setObjectName(QStringLiteral("pb_afficher_reclamation"));
        pb_afficher_reclamation->setGeometry(QRect(50, 40, 91, 21));
        pb_afficher_reclamation->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        lineEdit_num_Rec_2 = new QLineEdit(page_29);
        lineEdit_num_Rec_2->setObjectName(QStringLiteral("lineEdit_num_Rec_2"));
        lineEdit_num_Rec_2->setGeometry(QRect(30, 70, 131, 20));
        lineEdit_num_Rec_2->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        pb_afficher_reclamation_2 = new QPushButton(page_29);
        pb_afficher_reclamation_2->setObjectName(QStringLiteral("pb_afficher_reclamation_2"));
        pb_afficher_reclamation_2->setGeometry(QRect(50, 100, 91, 21));
        pb_afficher_reclamation_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        lineEdit_num_Rec_3 = new QLineEdit(page_29);
        lineEdit_num_Rec_3->setObjectName(QStringLiteral("lineEdit_num_Rec_3"));
        lineEdit_num_Rec_3->setGeometry(QRect(30, 130, 131, 20));
        lineEdit_num_Rec_3->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        pb_afficher_reclamation_3 = new QPushButton(page_29);
        pb_afficher_reclamation_3->setObjectName(QStringLiteral("pb_afficher_reclamation_3"));
        pb_afficher_reclamation_3->setGeometry(QRect(50, 160, 91, 21));
        pb_afficher_reclamation_3->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        widgetrecherche_2->addWidget(page_29);
        tabWidget_3->addTab(tab_6, QString());
        tab_22 = new QWidget();
        tab_22->setObjectName(QStringLiteral("tab_22"));
        label_32 = new QLabel(tab_22);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(10, 100, 141, 20));
        label_12 = new QLabel(tab_22);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(690, 250, 141, 91));
        label_12->setStyleSheet(QStringLiteral("image: url(:/128600931_1102401160197019_8051103514919619627_n.png);"));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/128600931_1102401160197019_8051103514919619627_n.png")));
        label_12->setScaledContents(true);
        label_12->setWordWrap(false);
        label_12->setOpenExternalLinks(false);
        groupBox = new QGroupBox(tab_22);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 59, 581, 231));
        groupBox->setStyleSheet(QLatin1String("color: rgb(0, 0, 127);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 60, 211, 20));
        lineEdit_2->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        pb_supprimer_rec = new QPushButton(groupBox);
        pb_supprimer_rec->setObjectName(QStringLiteral("pb_supprimer_rec"));
        pb_supprimer_rec->setGeometry(QRect(400, 80, 111, 23));
        pb_supprimer_rec->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}\n"
"font: 8pt \"Neo Tech Alt Medium\";"));
        pushButton_24 = new QPushButton(groupBox);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setGeometry(QRect(420, 120, 71, 23));
        pushButton_24->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        tabWidget_3->addTab(tab_22, QString());
        temps_2 = new QLabel(tab_3);
        temps_2->setObjectName(QStringLiteral("temps_2"));
        temps_2->setGeometry(QRect(650, 560, 161, 21));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        MainWindow_2 = new QTabWidget(tab_4);
        MainWindow_2->setObjectName(QStringLiteral("MainWindow_2"));
        MainWindow_2->setGeometry(QRect(0, 10, 841, 601));
        MainWindow_2->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"background-color: rgb(170, 170, 255);"));
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_16 = new QLabel(tab_9);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(40, 30, 101, 20));
        label_17 = new QLabel(tab_9);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(40, 80, 101, 20));
        label_18 = new QLabel(tab_9);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(40, 140, 61, 16));
        label_19 = new QLabel(tab_9);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(40, 200, 81, 16));
        codeA = new QLineEdit(tab_9);
        codeA->setObjectName(QStringLiteral("codeA"));
        codeA->setGeometry(QRect(210, 50, 161, 20));
        codeA->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}\n"
""));
        noman = new QLineEdit(tab_9);
        noman->setObjectName(QStringLiteral("noman"));
        noman->setGeometry(QRect(210, 120, 161, 20));
        noman->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}\n"
""));
        descriptionan = new QLineEdit(tab_9);
        descriptionan->setObjectName(QStringLiteral("descriptionan"));
        descriptionan->setGeometry(QRect(210, 180, 161, 20));
        descriptionan->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}\n"
""));
        pb_ajouter_an = new QPushButton(tab_9);
        pb_ajouter_an->setObjectName(QStringLiteral("pb_ajouter_an"));
        pb_ajouter_an->setGeometry(QRect(440, 150, 121, 23));
        pb_ajouter_an->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        datean = new QLineEdit(tab_9);
        datean->setObjectName(QStringLiteral("datean"));
        datean->setGeometry(QRect(210, 240, 161, 20));
        datean->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}\n"
""));
        pushButton_8 = new QPushButton(tab_9);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(470, 190, 71, 23));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        label_58 = new QLabel(tab_9);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(700, 320, 121, 111));
        label_58->setStyleSheet(QStringLiteral("image: url(:/128600931_1102401160197019_8051103514919619627_n.png);"));
        label_58->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/128600931_1102401160197019_8051103514919619627_n.png")));
        label_58->setScaledContents(true);
        label_58->setWordWrap(false);
        label_58->setOpenExternalLinks(false);
        MainWindow_2->addTab(tab_9, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        datean_2 = new QLineEdit(tab_11);
        datean_2->setObjectName(QStringLiteral("datean_2"));
        datean_2->setGeometry(QRect(210, 230, 141, 20));
        datean_2->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        label_23 = new QLabel(tab_11);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(40, 30, 101, 20));
        noman_2 = new QLineEdit(tab_11);
        noman_2->setObjectName(QStringLiteral("noman_2"));
        noman_2->setGeometry(QRect(210, 110, 141, 20));
        noman_2->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        descriptionan_2 = new QLineEdit(tab_11);
        descriptionan_2->setObjectName(QStringLiteral("descriptionan_2"));
        descriptionan_2->setGeometry(QRect(210, 170, 141, 20));
        descriptionan_2->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        label_24 = new QLabel(tab_11);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(40, 90, 101, 16));
        codean_2 = new QLineEdit(tab_11);
        codean_2->setObjectName(QStringLiteral("codean_2"));
        codean_2->setGeometry(QRect(210, 50, 141, 20));
        codean_2->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        label_25 = new QLabel(tab_11);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(40, 140, 91, 20));
        pb_modifier_an = new QPushButton(tab_11);
        pb_modifier_an->setObjectName(QStringLiteral("pb_modifier_an"));
        pb_modifier_an->setGeometry(QRect(410, 140, 121, 23));
        pb_modifier_an->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        pushButton_11 = new QPushButton(tab_11);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(440, 190, 75, 23));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        label_57 = new QLabel(tab_11);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(700, 330, 121, 111));
        label_57->setStyleSheet(QStringLiteral("image: url(:/128600931_1102401160197019_8051103514919619627_n.png);"));
        label_57->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/128600931_1102401160197019_8051103514919619627_n.png")));
        label_57->setScaledContents(true);
        label_57->setWordWrap(false);
        label_57->setOpenExternalLinks(false);
        MainWindow_2->addTab(tab_11, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        pushButton_6 = new QPushButton(tab_10);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(460, 430, 101, 23));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        tab_annonce = new QTableView(tab_10);
        tab_annonce->setObjectName(QStringLiteral("tab_annonce"));
        tab_annonce->setGeometry(QRect(10, 200, 561, 201));
        tab_annonce->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pb_print1_an = new QPushButton(tab_10);
        pb_print1_an->setObjectName(QStringLiteral("pb_print1_an"));
        pb_print1_an->setGeometry(QRect(250, 430, 111, 23));
        pb_print1_an->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        pb_afficher_an = new QPushButton(tab_10);
        pb_afficher_an->setObjectName(QStringLiteral("pb_afficher_an"));
        pb_afficher_an->setGeometry(QRect(60, 430, 101, 23));
        pb_afficher_an->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        label_56 = new QLabel(tab_10);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(730, 450, 111, 81));
        label_56->setStyleSheet(QStringLiteral("image: url(:/128600931_1102401160197019_8051103514919619627_n.png);"));
        label_56->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/128600931_1102401160197019_8051103514919619627_n.png")));
        label_56->setScaledContents(true);
        label_56->setWordWrap(false);
        label_56->setOpenExternalLinks(false);
        widgettrie = new QStackedWidget(tab_10);
        widgettrie->setObjectName(QStringLiteral("widgettrie"));
        widgettrie->setGeometry(QRect(0, 30, 651, 151));
        page_24 = new QWidget();
        page_24->setObjectName(QStringLiteral("page_24"));
        Trie = new QPushButton(page_24);
        Trie->setObjectName(QStringLiteral("Trie"));
        Trie->setGeometry(QRect(290, 50, 101, 23));
        Trie->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        widgettrie->addWidget(page_24);
        page_25 = new QWidget();
        page_25->setObjectName(QStringLiteral("page_25"));
        pushButton_46 = new QPushButton(page_25);
        pushButton_46->setObjectName(QStringLiteral("pushButton_46"));
        pushButton_46->setGeometry(QRect(270, 120, 101, 21));
        pushButton_46->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        pb_tri_CodeDescendant = new QPushButton(page_25);
        pb_tri_CodeDescendant->setObjectName(QStringLiteral("pb_tri_CodeDescendant"));
        pb_tri_CodeDescendant->setGeometry(QRect(10, 70, 121, 23));
        pb_tri_CodeDescendant->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 127);\n"
"font: 8pt \"Modern No. 20\";\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_tri_NomDeCroissant = new QPushButton(page_25);
        pb_tri_NomDeCroissant->setObjectName(QStringLiteral("pb_tri_NomDeCroissant"));
        pb_tri_NomDeCroissant->setGeometry(QRect(240, 20, 111, 23));
        pb_tri_NomDeCroissant->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 127);\n"
"font: 8pt \"Modern No. 20\";\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_tri_CodeAscendant = new QPushButton(page_25);
        pb_tri_CodeAscendant->setObjectName(QStringLiteral("pb_tri_CodeAscendant"));
        pb_tri_CodeAscendant->setGeometry(QRect(10, 20, 121, 23));
        pb_tri_CodeAscendant->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 127);\n"
"font: 8pt \"Modern No. 20\";\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_tri_DateDescendant = new QPushButton(page_25);
        pb_tri_DateDescendant->setObjectName(QStringLiteral("pb_tri_DateDescendant"));
        pb_tri_DateDescendant->setGeometry(QRect(430, 70, 111, 23));
        pb_tri_DateDescendant->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 127);\n"
"font: 8pt \"Modern No. 20\";\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_tri_DateAscendant = new QPushButton(page_25);
        pb_tri_DateAscendant->setObjectName(QStringLiteral("pb_tri_DateAscendant"));
        pb_tri_DateAscendant->setGeometry(QRect(430, 20, 111, 23));
        pb_tri_DateAscendant->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 127);\n"
"font: 8pt \"Modern No. 20\";\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_tri_NomCroissant = new QPushButton(page_25);
        pb_tri_NomCroissant->setObjectName(QStringLiteral("pb_tri_NomCroissant"));
        pb_tri_NomCroissant->setGeometry(QRect(240, 70, 111, 23));
        pb_tri_NomCroissant->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 127);\n"
"font: 8pt \"Modern No. 20\";\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        widgettrie->addWidget(page_25);
        widgetrecherche = new QStackedWidget(tab_10);
        widgetrecherche->setObjectName(QStringLiteral("widgetrecherche"));
        widgetrecherche->setGeometry(QRect(630, 200, 181, 231));
        page_22 = new QWidget();
        page_22->setObjectName(QStringLiteral("page_22"));
        Rechercher = new QPushButton(page_22);
        Rechercher->setObjectName(QStringLiteral("Rechercher"));
        Rechercher->setGeometry(QRect(40, 110, 111, 23));
        Rechercher->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        widgetrecherche->addWidget(page_22);
        page_23 = new QWidget();
        page_23->setObjectName(QStringLiteral("page_23"));
        pushButton_45 = new QPushButton(page_23);
        pushButton_45->setObjectName(QStringLiteral("pushButton_45"));
        pushButton_45->setGeometry(QRect(100, 200, 61, 21));
        pushButton_45->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        lineEdit_code_an = new QLineEdit(page_23);
        lineEdit_code_an->setObjectName(QStringLiteral("lineEdit_code_an"));
        lineEdit_code_an->setGeometry(QRect(10, 10, 131, 20));
        lineEdit_code_an->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        pb_afficher_annonce = new QPushButton(page_23);
        pb_afficher_annonce->setObjectName(QStringLiteral("pb_afficher_annonce"));
        pb_afficher_annonce->setGeometry(QRect(30, 40, 91, 23));
        pb_afficher_annonce->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 127);\n"
"font: 8pt \"Modern No. 20\";\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        lineEdit_code_an_2 = new QLineEdit(page_23);
        lineEdit_code_an_2->setObjectName(QStringLiteral("lineEdit_code_an_2"));
        lineEdit_code_an_2->setGeometry(QRect(10, 70, 131, 20));
        lineEdit_code_an_2->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        pb_afficher_annonce_2 = new QPushButton(page_23);
        pb_afficher_annonce_2->setObjectName(QStringLiteral("pb_afficher_annonce_2"));
        pb_afficher_annonce_2->setGeometry(QRect(30, 100, 91, 23));
        pb_afficher_annonce_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 127);\n"
"font: 8pt \"Modern No. 20\";\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        lineEdit_code_an_3 = new QLineEdit(page_23);
        lineEdit_code_an_3->setObjectName(QStringLiteral("lineEdit_code_an_3"));
        lineEdit_code_an_3->setGeometry(QRect(10, 130, 131, 20));
        lineEdit_code_an_3->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        pb_afficher_annonce_3 = new QPushButton(page_23);
        pb_afficher_annonce_3->setObjectName(QStringLiteral("pb_afficher_annonce_3"));
        pb_afficher_annonce_3->setGeometry(QRect(30, 160, 91, 23));
        pb_afficher_annonce_3->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 127);\n"
"font: 8pt \"Modern No. 20\";\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        widgetrecherche->addWidget(page_23);
        MainWindow_2->addTab(tab_10, QString());
        tab_21 = new QWidget();
        tab_21->setObjectName(QStringLiteral("tab_21"));
        label_55 = new QLabel(tab_21);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(690, 340, 131, 111));
        label_55->setStyleSheet(QStringLiteral("image: url(:/128600931_1102401160197019_8051103514919619627_n.png);"));
        label_55->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/128600931_1102401160197019_8051103514919619627_n.png")));
        label_55->setScaledContents(true);
        label_55->setWordWrap(false);
        label_55->setOpenExternalLinks(false);
        groupBox_5 = new QGroupBox(tab_21);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(50, 30, 601, 271));
        groupBox_5->setStyleSheet(QLatin1String("color: rgb(0, 0, 127);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        codeSuppr = new QLineEdit(groupBox_5);
        codeSuppr->setObjectName(QStringLiteral("codeSuppr"));
        codeSuppr->setGeometry(QRect(120, 70, 201, 20));
        codeSuppr->setStyleSheet(QLatin1String(" QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        codeSuppr->setClearButtonEnabled(false);
        pb_supprimer_an = new QPushButton(groupBox_5);
        pb_supprimer_an->setObjectName(QStringLiteral("pb_supprimer_an"));
        pb_supprimer_an->setGeometry(QRect(360, 70, 111, 23));
        pb_supprimer_an->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        pushButton_30 = new QPushButton(groupBox_5);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setGeometry(QRect(390, 120, 61, 23));
        pushButton_30->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        MainWindow_2->addTab(tab_21, QString());
        tabWidget_2->addTab(tab_4, QString());
        temps = new QLabel(tab);
        temps->setObjectName(QStringLiteral("temps"));
        temps->setGeometry(QRect(570, 0, 161, 21));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 880, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(2);
        widgettrie_2->setCurrentIndex(0);
        widgetrecherche_2->setCurrentIndex(1);
        MainWindow_2->setCurrentIndex(3);
        widgettrie->setCurrentIndex(0);
        widgetrecherche->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        numR->setPlaceholderText(QApplication::translate("MainWindow", "  Numero de la Reclamation", Q_NULLPTR));
        lineEdit_nomR->setPlaceholderText(QApplication::translate("MainWindow", "     Nom de la Reclamation", Q_NULLPTR));
        lineEdit_descriptionR->setPlaceholderText(QApplication::translate("MainWindow", "             Description", Q_NULLPTR));
        pb_ajouter_rec->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        dateR->setPlaceholderText(QApplication::translate("MainWindow", "                   Date", Q_NULLPTR));
        label_15->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("MainWindow", "Ajouter une Reclamation", Q_NULLPTR));
        lineEdit_nomR2->setPlaceholderText(QApplication::translate("MainWindow", "Nom de la Reclamation", Q_NULLPTR));
        codeR2->setPlaceholderText(QApplication::translate("MainWindow", "Numero Reclamation", Q_NULLPTR));
        label_5->setText(QString());
        dateR2->setPlaceholderText(QApplication::translate("MainWindow", "               Date", Q_NULLPTR));
        lineEdit_descriptionR2->setPlaceholderText(QApplication::translate("MainWindow", "          Description", Q_NULLPTR));
        label_7->setText(QString());
        label_8->setText(QString());
        pb_modifier_rec->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        label_14->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("MainWindow", "Modifier une Reclamation", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        pb_print1_rec->setText(QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        pb_afficher_rec->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        label_13->setText(QString());
        Trie_2->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        pushButton_47->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        pb_tri_DateDescendant_rec->setText(QApplication::translate("MainWindow", "Date_rec Descendant", Q_NULLPTR));
        pb_asc_tri_rec->setText(QApplication::translate("MainWindow", "Num_rec Ascendant", Q_NULLPTR));
        pb_desc_tri_rec->setText(QApplication::translate("MainWindow", "Num_rec Descendant", Q_NULLPTR));
        pb_tri_NomCroissant_rec->setText(QApplication::translate("MainWindow", "Nom_rec Ascendant", Q_NULLPTR));
        pb_tri_NomDeCroissant_rec->setText(QApplication::translate("MainWindow", "Nom_rec Descendant", Q_NULLPTR));
        pb_tri_DateAscendant_rec->setText(QApplication::translate("MainWindow", "Date_rec Ascendant", Q_NULLPTR));
        Rechercher_2->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        pushButton_48->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        lineEdit_num_Rec->setPlaceholderText(QApplication::translate("MainWindow", "Numero de la Reclamation", Q_NULLPTR));
        pb_afficher_reclamation->setText(QApplication::translate("MainWindow", "Rechercher num", Q_NULLPTR));
        lineEdit_num_Rec_2->setPlaceholderText(QApplication::translate("MainWindow", "nom de la Reclamation", Q_NULLPTR));
        pb_afficher_reclamation_2->setText(QApplication::translate("MainWindow", "Rechercher nom", Q_NULLPTR));
        lineEdit_num_Rec_3->setPlaceholderText(QApplication::translate("MainWindow", "date de la Reclamation", Q_NULLPTR));
        pb_afficher_reclamation_3->setText(QApplication::translate("MainWindow", "Rechercher date", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Afficher Reclamations", Q_NULLPTR));
        label_32->setText(QString());
        label_12->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Suppression", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "Numero de la  Reclamation", Q_NULLPTR));
        pb_supprimer_rec->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButton_24->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_22), QApplication::translate("MainWindow", "Supprimer une Reclamation", Q_NULLPTR));
        temps_2->setText(QApplication::translate("MainWindow", "time", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Reclamations", Q_NULLPTR));
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        codeA->setPlaceholderText(QApplication::translate("MainWindow", "     Code de l'Annonce", Q_NULLPTR));
        noman->setPlaceholderText(QApplication::translate("MainWindow", "      Nom de l'Annonce", Q_NULLPTR));
        descriptionan->setPlaceholderText(QApplication::translate("MainWindow", "          Description", Q_NULLPTR));
        pb_ajouter_an->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        datean->setPlaceholderText(QApplication::translate("MainWindow", "               Date", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        label_58->setText(QString());
        MainWindow_2->setTabText(MainWindow_2->indexOf(tab_9), QApplication::translate("MainWindow", "Ajouter une Annonce", Q_NULLPTR));
        datean_2->setPlaceholderText(QApplication::translate("MainWindow", "           Date ", Q_NULLPTR));
        label_23->setText(QString());
        noman_2->setPlaceholderText(QApplication::translate("MainWindow", "    Nom de l'Annonce", Q_NULLPTR));
        descriptionan_2->setPlaceholderText(QApplication::translate("MainWindow", "        Description", Q_NULLPTR));
        label_24->setText(QString());
        codean_2->setPlaceholderText(QApplication::translate("MainWindow", "   Code de l'Annonce", Q_NULLPTR));
        label_25->setText(QString());
        pb_modifier_an->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        label_57->setText(QString());
        MainWindow_2->setTabText(MainWindow_2->indexOf(tab_11), QApplication::translate("MainWindow", "Modifier une Annonce", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        pb_print1_an->setText(QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        pb_afficher_an->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        label_56->setText(QString());
        Trie->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        pushButton_46->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        pb_tri_CodeDescendant->setText(QApplication::translate("MainWindow", "Code_an Descendant", Q_NULLPTR));
        pb_tri_NomDeCroissant->setText(QApplication::translate("MainWindow", "Nom_an Descendant", Q_NULLPTR));
        pb_tri_CodeAscendant->setText(QApplication::translate("MainWindow", "Code_an Ascendant", Q_NULLPTR));
        pb_tri_DateDescendant->setText(QApplication::translate("MainWindow", "Date_an Descendant", Q_NULLPTR));
        pb_tri_DateAscendant->setText(QApplication::translate("MainWindow", "Date_an Ascendant", Q_NULLPTR));
        pb_tri_NomCroissant->setText(QApplication::translate("MainWindow", "Nom_an Ascendant", Q_NULLPTR));
        Rechercher->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        pushButton_45->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        lineEdit_code_an->setPlaceholderText(QApplication::translate("MainWindow", "Code de l'Annonce", Q_NULLPTR));
        pb_afficher_annonce->setText(QApplication::translate("MainWindow", "Recherche coder", Q_NULLPTR));
        lineEdit_code_an_2->setPlaceholderText(QApplication::translate("MainWindow", "Nom de l'Annonce", Q_NULLPTR));
        pb_afficher_annonce_2->setText(QApplication::translate("MainWindow", "Recherche nom", Q_NULLPTR));
        lineEdit_code_an_3->setPlaceholderText(QApplication::translate("MainWindow", "   Date de l'Annonce", Q_NULLPTR));
        pb_afficher_annonce_3->setText(QApplication::translate("MainWindow", "Recherche date", Q_NULLPTR));
        MainWindow_2->setTabText(MainWindow_2->indexOf(tab_10), QApplication::translate("MainWindow", "Afficher Annonce", Q_NULLPTR));
        label_55->setText(QString());
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Suppression", Q_NULLPTR));
        codeSuppr->setPlaceholderText(QApplication::translate("MainWindow", "        Code de l'Annonce", Q_NULLPTR));
        pb_supprimer_an->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButton_30->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        MainWindow_2->setTabText(MainWindow_2->indexOf(tab_21), QApplication::translate("MainWindow", "Supprimer une Annonce", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Annonces", Q_NULLPTR));
        temps->setText(QApplication::translate("MainWindow", "time", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Gestion de Service", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
