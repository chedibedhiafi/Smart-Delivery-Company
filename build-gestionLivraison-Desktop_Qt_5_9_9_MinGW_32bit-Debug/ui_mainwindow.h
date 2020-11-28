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
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_3;
    QTabWidget *tabFour;
    QWidget *tab_ajouterFour;
    QGroupBox *ajout_4;
    QLineEdit *line_idLiv_17;
    QPushButton *ajouterFour;
    QLineEdit *line_idLiv_19;
    QLineEdit *line_idLiv_20;
    QLineEdit *line_idLiv_21;
    QLineEdit *line_idLiv_22;
    QLineEdit *line_idLiv_23;
    QDateEdit *dateEdit;
    QWidget *tab_afficherFour;
    QToolBox *toolBox_2;
    QWidget *page_3;
    QGroupBox *ajout_3;
    QLineEdit *line_idLiv_8;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *afficherFour;
    QLineEdit *line_idLiv_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *line_idLiv_12;
    QLineEdit *line_idLiv_13;
    QLineEdit *line_idLiv_14;
    QLineEdit *line_idLiv_15;
    QLineEdit *line_idLiv_16;
    QWidget *page_4;
    QWidget *page_5;
    QWidget *tab_chercherFour;
    QGroupBox *ajout_7;
    QLineEdit *line_aff_idLiv_4;
    QLabel *label_20;
    QPushButton *chercherFour;
    QPushButton *pushButton;
    QWidget *tab_mailingFour;
    QWidget *tab_imprimerFour;
    QCommandLinkButton *goToLiv;
    QWidget *page_2;
    QLabel *label_2;
    QTabWidget *tabLiv;
    QWidget *tab_ajouter;
    QGroupBox *ajout;
    QLineEdit *line_idLiv;
    QLineEdit *line_idfourLiv;
    QLineEdit *line_descLiv;
    QPushButton *ajouterLiv;
    QDateTimeEdit *dateTimeEdit;
    QWidget *tab_afficher;
    QToolBox *toolBox;
    QWidget *page_afficherLiv;
    QGroupBox *ajout_6;
    QLineEdit *line_aff_idLiv_3;
    QLineEdit *line_aff_dateLiv_2;
    QLineEdit *line_aff_idfourLiv_2;
    QLineEdit *line_aff_descLiv_2;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *afficherLiv_2;
    QWidget *page_modifierLiv;
    QWidget *page_suppLiv;
    QWidget *tab_chercher;
    QGroupBox *ajout_5;
    QLineEdit *line_aff_idLiv_2;
    QLabel *label_16;
    QPushButton *chercherLiv;
    QWidget *tab_sms;
    QGroupBox *ajout_2;
    QLineEdit *line_aff_idLiv;
    QLineEdit *line_aff_dateLiv;
    QLineEdit *line_aff_idfourLiv;
    QLineEdit *line_aff_descLiv;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *afficherLiv;
    QWidget *tab_imprimer;
    QCommandLinkButton *goToFour;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(977, 750);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 3001, 731));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 127)"));
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(140, 20, 691, 671));
        stackedWidget->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(194, 59, 36);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 10, 291, 41));
        label_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 127);\n"
"color: rgb(0, 0, 150);\n"
"font: 87 14pt \"Arial Black\";\n"
"text-decoration: underline;\n"
""));
        tabFour = new QTabWidget(page);
        tabFour->setObjectName(QStringLiteral("tabFour"));
        tabFour->setGeometry(QRect(60, 70, 591, 571));
        tabFour->setStyleSheet(QLatin1String("selection-background-color: rgb(85, 255, 127);\n"
"font: 8pt \"Modern No. 20\";"));
        tabFour->setTabShape(QTabWidget::Triangular);
        tabFour->setDocumentMode(false);
        tabFour->setTabsClosable(false);
        tabFour->setMovable(true);
        tabFour->setTabBarAutoHide(true);
        tab_ajouterFour = new QWidget();
        tab_ajouterFour->setObjectName(QStringLiteral("tab_ajouterFour"));
        ajout_4 = new QGroupBox(tab_ajouterFour);
        ajout_4->setObjectName(QStringLiteral("ajout_4"));
        ajout_4->setGeometry(QRect(20, 10, 551, 531));
        ajout_4->setStyleSheet(QLatin1String("color: rgb(0, 0, 150);\n"
"font: 87 6pt \"Arial Black\";\n"
""));
        line_idLiv_17 = new QLineEdit(ajout_4);
        line_idLiv_17->setObjectName(QStringLiteral("line_idLiv_17"));
        line_idLiv_17->setGeometry(QRect(180, 20, 171, 41));
        line_idLiv_17->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(200, 200, 200) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        ajouterFour = new QPushButton(ajout_4);
        ajouterFour->setObjectName(QStringLiteral("ajouterFour"));
        ajouterFour->setGeometry(QRect(450, 480, 91, 41));
        ajouterFour->setStyleSheet(QLatin1String("QPushButton\n"
"{border-width:3px;\n"
"border-radius:20px;\n"
"border-color:yellow;\n"
"border-style:outset;\n"
"color:rgb(194, 59, 36);\n"
"	font: 9pt \"Arial Black\";\n"
"}"));
        line_idLiv_19 = new QLineEdit(ajout_4);
        line_idLiv_19->setObjectName(QStringLiteral("line_idLiv_19"));
        line_idLiv_19->setGeometry(QRect(180, 90, 171, 41));
        line_idLiv_19->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :65px;\n"
"padding-right :65px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(200, 200, 200) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        line_idLiv_20 = new QLineEdit(ajout_4);
        line_idLiv_20->setObjectName(QStringLiteral("line_idLiv_20"));
        line_idLiv_20->setGeometry(QRect(170, 380, 181, 41));
        line_idLiv_20->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :60px;\n"
"padding-right :60px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(200, 200, 200) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        line_idLiv_21 = new QLineEdit(ajout_4);
        line_idLiv_21->setObjectName(QStringLiteral("line_idLiv_21"));
        line_idLiv_21->setGeometry(QRect(180, 160, 171, 41));
        line_idLiv_21->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :70px;\n"
"padding-right :70px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(200, 200, 200) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        line_idLiv_22 = new QLineEdit(ajout_4);
        line_idLiv_22->setObjectName(QStringLiteral("line_idLiv_22"));
        line_idLiv_22->setGeometry(QRect(170, 460, 181, 41));
        line_idLiv_22->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :50px;\n"
"padding-right :45px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(200, 200, 200) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        line_idLiv_23 = new QLineEdit(ajout_4);
        line_idLiv_23->setObjectName(QStringLiteral("line_idLiv_23"));
        line_idLiv_23->setGeometry(QRect(180, 230, 171, 41));
        line_idLiv_23->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :65px;\n"
"padding-right :65px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(200, 200, 200) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        dateEdit = new QDateEdit(ajout_4);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(180, 300, 171, 41));
        dateEdit->setStyleSheet(QLatin1String("QDateEdit\n"
"{\n"
"	\n"
"	border:2px solid rgb(194, 59, 36);\n"
"	background-color: rgb(0, 0, 150);\n"
"	color: rgb(255, 255, 255);\n"
"border-radius:20px;\n"
"padding-left :50px;\n"
"padding-right :40px;\n"
"}\n"
"QDateEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(200, 200, 200) ;\n"
"}\n"
"QDateEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        dateEdit->setDateTime(QDateTime(QDate(2000, 5, 1), QTime(0, 0, 0)));
        QIcon icon;
        icon.addFile(QStringLiteral("../../add.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabFour->addTab(tab_ajouterFour, icon, QString());
        tab_afficherFour = new QWidget();
        tab_afficherFour->setObjectName(QStringLiteral("tab_afficherFour"));
        toolBox_2 = new QToolBox(tab_afficherFour);
        toolBox_2->setObjectName(QStringLiteral("toolBox_2"));
        toolBox_2->setGeometry(QRect(18, 12, 561, 531));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 561, 447));
        ajout_3 = new QGroupBox(page_3);
        ajout_3->setObjectName(QStringLiteral("ajout_3"));
        ajout_3->setGeometry(QRect(0, -10, 571, 461));
        ajout_3->setStyleSheet(QLatin1String("color: rgb(0, 0, 150);\n"
"font: 87 6pt \"Arial Black\";\n"
""));
        line_idLiv_8 = new QLineEdit(ajout_3);
        line_idLiv_8->setObjectName(QStringLiteral("line_idLiv_8"));
        line_idLiv_8->setGeometry(QRect(170, 90, 131, 41));
        line_idLiv_8->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_idLiv_8->setReadOnly(true);
        label_6 = new QLabel(ajout_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 90, 171, 31));
        QFont font;
        font.setFamily(QStringLiteral("Modern No. 20"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(50);
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        label_9 = new QLabel(ajout_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 180, 161, 31));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        label_10 = new QLabel(ajout_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 290, 161, 31));
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        label_11 = new QLabel(ajout_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 390, 161, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Modern No. 20"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(true);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        label_11->setFont(font1);
        label_11->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        afficherFour = new QPushButton(ajout_3);
        afficherFour->setObjectName(QStringLiteral("afficherFour"));
        afficherFour->setGeometry(QRect(240, 10, 91, 41));
        afficherFour->setStyleSheet(QLatin1String("QPushButton\n"
"{border-width:3px;\n"
"border-radius:20px;\n"
"border-color:yellow;\n"
"border-style:outset;\n"
"color:rgb(194, 59, 36);\n"
"	font: 9pt \"Arial Black\";\n"
"}"));
        line_idLiv_11 = new QLineEdit(ajout_3);
        line_idLiv_11->setObjectName(QStringLiteral("line_idLiv_11"));
        line_idLiv_11->setGeometry(QRect(420, 90, 131, 41));
        line_idLiv_11->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_idLiv_11->setReadOnly(true);
        label_12 = new QLabel(ajout_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(310, 90, 161, 31));
        label_12->setFont(font1);
        label_12->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        label_13 = new QLabel(ajout_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(310, 300, 161, 31));
        label_13->setFont(font1);
        label_13->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        label_14 = new QLabel(ajout_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(320, 190, 161, 31));
        label_14->setFont(font1);
        label_14->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        line_idLiv_12 = new QLineEdit(ajout_3);
        line_idLiv_12->setObjectName(QStringLiteral("line_idLiv_12"));
        line_idLiv_12->setGeometry(QRect(160, 180, 141, 41));
        line_idLiv_12->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_idLiv_12->setReadOnly(true);
        line_idLiv_13 = new QLineEdit(ajout_3);
        line_idLiv_13->setObjectName(QStringLiteral("line_idLiv_13"));
        line_idLiv_13->setGeometry(QRect(410, 180, 141, 41));
        line_idLiv_13->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_idLiv_13->setReadOnly(true);
        line_idLiv_14 = new QLineEdit(ajout_3);
        line_idLiv_14->setObjectName(QStringLiteral("line_idLiv_14"));
        line_idLiv_14->setGeometry(QRect(160, 290, 141, 41));
        line_idLiv_14->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_idLiv_14->setReadOnly(true);
        line_idLiv_15 = new QLineEdit(ajout_3);
        line_idLiv_15->setObjectName(QStringLiteral("line_idLiv_15"));
        line_idLiv_15->setGeometry(QRect(410, 290, 141, 41));
        line_idLiv_15->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_idLiv_15->setReadOnly(true);
        line_idLiv_16 = new QLineEdit(ajout_3);
        line_idLiv_16->setObjectName(QStringLiteral("line_idLiv_16"));
        line_idLiv_16->setGeometry(QRect(160, 390, 141, 41));
        line_idLiv_16->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_idLiv_16->setReadOnly(true);
        label_6->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        afficherFour->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        line_idLiv_12->raise();
        line_idLiv_13->raise();
        line_idLiv_14->raise();
        line_idLiv_11->raise();
        line_idLiv_15->raise();
        line_idLiv_16->raise();
        line_idLiv_8->raise();
        toolBox_2->addItem(page_3, QStringLiteral("Page 1"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 100, 30));
        toolBox_2->addItem(page_4, QStringLiteral("Page 2"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 100, 30));
        toolBox_2->addItem(page_5, QStringLiteral("Page"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../download (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        tabFour->addTab(tab_afficherFour, icon1, QString());
        tab_chercherFour = new QWidget();
        tab_chercherFour->setObjectName(QStringLiteral("tab_chercherFour"));
        ajout_7 = new QGroupBox(tab_chercherFour);
        ajout_7->setObjectName(QStringLiteral("ajout_7"));
        ajout_7->setGeometry(QRect(40, 90, 501, 351));
        ajout_7->setStyleSheet(QLatin1String("color: rgb(0, 0, 150);\n"
"font: 87 6pt \"Arial Black\";\n"
""));
        line_aff_idLiv_4 = new QLineEdit(ajout_7);
        line_aff_idLiv_4->setObjectName(QStringLiteral("line_aff_idLiv_4"));
        line_aff_idLiv_4->setGeometry(QRect(280, 110, 181, 31));
        line_aff_idLiv_4->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(217, 217, 217) ;\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(200,200,200) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"	background-color: rgb(121,121,121);\n"
"}"));
        label_20 = new QLabel(ajout_7);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 110, 221, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Modern No. 20"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        label_20->setFont(font2);
        label_20->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        chercherFour = new QPushButton(ajout_7);
        chercherFour->setObjectName(QStringLiteral("chercherFour"));
        chercherFour->setGeometry(QRect(400, 200, 91, 41));
        chercherFour->setStyleSheet(QLatin1String("QPushButton\n"
"{border-width:3px;\n"
"border-radius:20px;\n"
"border-color:yellow;\n"
"border-style:outset;\n"
"color:rgb(194, 59, 36);\n"
"	font: 9pt \"Arial Black\";\n"
"}"));
        pushButton = new QPushButton(tab_chercherFour);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 60, 75, 23));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../download (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        tabFour->addTab(tab_chercherFour, icon2, QString());
        tab_mailingFour = new QWidget();
        tab_mailingFour->setObjectName(QStringLiteral("tab_mailingFour"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../sms.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabFour->addTab(tab_mailingFour, icon3, QString());
        tab_imprimerFour = new QWidget();
        tab_imprimerFour->setObjectName(QStringLiteral("tab_imprimerFour"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../download.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabFour->addTab(tab_imprimerFour, icon4, QString());
        goToLiv = new QCommandLinkButton(page);
        goToLiv->setObjectName(QStringLiteral("goToLiv"));
        goToLiv->setGeometry(QRect(510, 630, 191, 41));
        goToLiv->setStyleSheet(QStringLiteral("color: rgb(0, 120, 215);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 10, 241, 41));
        label_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 127);\n"
"color: rgb(0, 0, 150);\n"
"font: 87 14pt \"Arial Black\";\n"
"text-decoration: underline;\n"
""));
        tabLiv = new QTabWidget(page_2);
        tabLiv->setObjectName(QStringLiteral("tabLiv"));
        tabLiv->setGeometry(QRect(60, 70, 561, 581));
        tabLiv->setStyleSheet(QLatin1String("selection-background-color: rgb(85, 255, 127);\n"
"font: 8pt \"Modern No. 20\";"));
        tabLiv->setTabShape(QTabWidget::Triangular);
        tabLiv->setDocumentMode(false);
        tabLiv->setTabsClosable(false);
        tabLiv->setMovable(true);
        tabLiv->setTabBarAutoHide(false);
        tab_ajouter = new QWidget();
        tab_ajouter->setObjectName(QStringLiteral("tab_ajouter"));
        ajout = new QGroupBox(tab_ajouter);
        ajout->setObjectName(QStringLiteral("ajout"));
        ajout->setGeometry(QRect(40, 10, 471, 541));
        ajout->setStyleSheet(QLatin1String("color: rgb(0, 0, 150);\n"
"font: 87 6pt \"Arial Black\";\n"
""));
        line_idLiv = new QLineEdit(ajout);
        line_idLiv->setObjectName(QStringLiteral("line_idLiv"));
        line_idLiv->setGeometry(QRect(150, 60, 161, 41));
        line_idLiv->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150)  ;\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(200, 200, 200) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        line_idfourLiv = new QLineEdit(ajout);
        line_idfourLiv->setObjectName(QStringLiteral("line_idfourLiv"));
        line_idfourLiv->setGeometry(QRect(150, 400, 161, 41));
        line_idfourLiv->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color: rgb(200,200,200);\n"
"\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 0,0);\n"
"	background-color: rgb(121,121,121);\n"
"}"));
        line_descLiv = new QLineEdit(ajout);
        line_descLiv->setObjectName(QStringLiteral("line_descLiv"));
        line_descLiv->setGeometry(QRect(150, 290, 161, 41));
        line_descLiv->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(200,200, 200) ;\n"
"\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 0,0);\n"
"	background-color: rgb(121,121,121);\n"
"}"));
        ajouterLiv = new QPushButton(ajout);
        ajouterLiv->setObjectName(QStringLiteral("ajouterLiv"));
        ajouterLiv->setGeometry(QRect(370, 480, 91, 41));
        ajouterLiv->setStyleSheet(QLatin1String("QPushButton\n"
"{border-width:3px;\n"
"border-radius:20px;\n"
"border-color:yellow;\n"
"border-style:outset;\n"
"color:rgb(194, 59, 36);\n"
"	font: 9pt \"Arial Black\";\n"
"}"));
        dateTimeEdit = new QDateTimeEdit(ajout);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(150, 170, 161, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial Black"));
        font3.setPointSize(6);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(10);
        font3.setStyleStrategy(QFont::PreferDefault);
        dateTimeEdit->setFont(font3);
        dateTimeEdit->setStyleSheet(QLatin1String("QDateTimeEdit\n"
"{\n"
"	background-color: rgb(0, 0, 142);\n"
"	color: rgb(255, 255, 255);\n"
"border-radius:20px;\n"
"padding-left:25;\n"
"padding-right:20;\n"
"border:2px solid rgb(194, 59, 36);\n"
"}\n"
"QDateTimeEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(200, 200, 200) ;\n"
"}\n"
"QDateTimeEditt:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        dateTimeEdit->setCurrentSection(QDateTimeEdit::MonthSection);
        tabLiv->addTab(tab_ajouter, icon, QString());
        tab_afficher = new QWidget();
        tab_afficher->setObjectName(QStringLiteral("tab_afficher"));
        toolBox = new QToolBox(tab_afficher);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(20, 10, 521, 541));
        page_afficherLiv = new QWidget();
        page_afficherLiv->setObjectName(QStringLiteral("page_afficherLiv"));
        page_afficherLiv->setGeometry(QRect(0, 0, 521, 457));
        page_afficherLiv->setContextMenuPolicy(Qt::DefaultContextMenu);
        ajout_6 = new QGroupBox(page_afficherLiv);
        ajout_6->setObjectName(QStringLiteral("ajout_6"));
        ajout_6->setGeometry(QRect(10, 0, 461, 461));
        ajout_6->setStyleSheet(QLatin1String("color: rgb(0, 0, 150);\n"
"font: 87 6pt \"Arial Black\";\n"
""));
        line_aff_idLiv_3 = new QLineEdit(ajout_6);
        line_aff_idLiv_3->setObjectName(QStringLiteral("line_aff_idLiv_3"));
        line_aff_idLiv_3->setGeometry(QRect(240, 90, 161, 41));
        line_aff_idLiv_3->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_aff_idLiv_3->setReadOnly(true);
        line_aff_dateLiv_2 = new QLineEdit(ajout_6);
        line_aff_dateLiv_2->setObjectName(QStringLiteral("line_aff_dateLiv_2"));
        line_aff_dateLiv_2->setGeometry(QRect(240, 160, 161, 41));
        line_aff_dateLiv_2->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_aff_dateLiv_2->setReadOnly(true);
        line_aff_idfourLiv_2 = new QLineEdit(ajout_6);
        line_aff_idfourLiv_2->setObjectName(QStringLiteral("line_aff_idfourLiv_2"));
        line_aff_idfourLiv_2->setGeometry(QRect(240, 290, 161, 41));
        line_aff_idfourLiv_2->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_aff_idfourLiv_2->setReadOnly(true);
        line_aff_descLiv_2 = new QLineEdit(ajout_6);
        line_aff_descLiv_2->setObjectName(QStringLiteral("line_aff_descLiv_2"));
        line_aff_descLiv_2->setGeometry(QRect(240, 230, 161, 41));
        line_aff_descLiv_2->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_aff_descLiv_2->setReadOnly(true);
        label_15 = new QLabel(ajout_6);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 90, 161, 31));
        label_15->setFont(font);
        label_15->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        label_17 = new QLabel(ajout_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 160, 161, 31));
        label_17->setFont(font);
        label_17->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        label_18 = new QLabel(ajout_6);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 230, 161, 31));
        label_18->setFont(font);
        label_18->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        label_19 = new QLabel(ajout_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 300, 161, 31));
        label_19->setFont(font1);
        label_19->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        afficherLiv_2 = new QPushButton(ajout_6);
        afficherLiv_2->setObjectName(QStringLiteral("afficherLiv_2"));
        afficherLiv_2->setGeometry(QRect(160, 10, 91, 41));
        afficherLiv_2->setStyleSheet(QLatin1String("QPushButton\n"
"{border-width:3px;\n"
"border-radius:20px;\n"
"border-color:yellow;\n"
"border-style:outset;\n"
"color:rgb(194, 59, 36);\n"
"	font: 9pt \"Arial Black\";\n"
"}"));
        toolBox->addItem(page_afficherLiv, QStringLiteral("Page 1"));
        page_modifierLiv = new QWidget();
        page_modifierLiv->setObjectName(QStringLiteral("page_modifierLiv"));
        page_modifierLiv->setGeometry(QRect(0, 0, 100, 30));
        toolBox->addItem(page_modifierLiv, QStringLiteral("Page 2"));
        page_suppLiv = new QWidget();
        page_suppLiv->setObjectName(QStringLiteral("page_suppLiv"));
        page_suppLiv->setGeometry(QRect(0, 0, 100, 30));
        toolBox->addItem(page_suppLiv, QStringLiteral("Page"));
        tabLiv->addTab(tab_afficher, icon1, QString());
        tab_chercher = new QWidget();
        tab_chercher->setObjectName(QStringLiteral("tab_chercher"));
        ajout_5 = new QGroupBox(tab_chercher);
        ajout_5->setObjectName(QStringLiteral("ajout_5"));
        ajout_5->setGeometry(QRect(30, 110, 501, 351));
        ajout_5->setStyleSheet(QLatin1String("color: rgb(0, 0, 150);\n"
"font: 87 6pt \"Arial Black\";\n"
""));
        line_aff_idLiv_2 = new QLineEdit(ajout_5);
        line_aff_idLiv_2->setObjectName(QStringLiteral("line_aff_idLiv_2"));
        line_aff_idLiv_2->setGeometry(QRect(220, 80, 181, 31));
        line_aff_idLiv_2->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(217, 217, 217) ;\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(200,200,200) ;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"	background-color: rgb(121,121,121);\n"
"}"));
        label_16 = new QLabel(ajout_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 80, 181, 31));
        label_16->setFont(font2);
        label_16->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        chercherLiv = new QPushButton(ajout_5);
        chercherLiv->setObjectName(QStringLiteral("chercherLiv"));
        chercherLiv->setGeometry(QRect(380, 160, 91, 41));
        chercherLiv->setStyleSheet(QLatin1String("QPushButton\n"
"{border-width:3px;\n"
"border-radius:20px;\n"
"border-color:yellow;\n"
"border-style:outset;\n"
"color:rgb(194, 59, 36);\n"
"	font: 9pt \"Arial Black\";\n"
"}"));
        tabLiv->addTab(tab_chercher, icon2, QString());
        tab_sms = new QWidget();
        tab_sms->setObjectName(QStringLiteral("tab_sms"));
        ajout_2 = new QGroupBox(tab_sms);
        ajout_2->setObjectName(QStringLiteral("ajout_2"));
        ajout_2->setGeometry(QRect(50, 30, 461, 351));
        ajout_2->setStyleSheet(QLatin1String("color: rgb(0, 0, 150);\n"
"font: 87 6pt \"Arial Black\";\n"
""));
        line_aff_idLiv = new QLineEdit(ajout_2);
        line_aff_idLiv->setObjectName(QStringLiteral("line_aff_idLiv"));
        line_aff_idLiv->setGeometry(QRect(240, 90, 161, 41));
        line_aff_idLiv->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_aff_idLiv->setReadOnly(true);
        line_aff_dateLiv = new QLineEdit(ajout_2);
        line_aff_dateLiv->setObjectName(QStringLiteral("line_aff_dateLiv"));
        line_aff_dateLiv->setGeometry(QRect(240, 160, 161, 41));
        line_aff_dateLiv->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_aff_dateLiv->setReadOnly(true);
        line_aff_idfourLiv = new QLineEdit(ajout_2);
        line_aff_idfourLiv->setObjectName(QStringLiteral("line_aff_idfourLiv"));
        line_aff_idfourLiv->setGeometry(QRect(240, 290, 161, 41));
        line_aff_idfourLiv->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_aff_idfourLiv->setReadOnly(true);
        line_aff_descLiv = new QLineEdit(ajout_2);
        line_aff_descLiv->setObjectName(QStringLiteral("line_aff_descLiv"));
        line_aff_descLiv->setGeometry(QRect(240, 230, 161, 41));
        line_aff_descLiv->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :20px;\n"
"padding-right :20px;\n"
"background-color:rgb(0, 0, 150) ;\n"
"\n"
"}\n"
"/*QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0)\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 255, 255);\n"
"	background-color: rgb(225, 10, 40);\n"
"}*/"));
        line_aff_descLiv->setReadOnly(true);
        label_4 = new QLabel(ajout_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 90, 161, 31));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        label_5 = new QLabel(ajout_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 160, 161, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        label_7 = new QLabel(ajout_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 230, 161, 31));
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        label_8 = new QLabel(ajout_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 300, 161, 31));
        label_8->setFont(font1);
        label_8->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 10.5pt \"Modern No. 20\";"));
        afficherLiv = new QPushButton(ajout_2);
        afficherLiv->setObjectName(QStringLiteral("afficherLiv"));
        afficherLiv->setGeometry(QRect(160, 10, 91, 41));
        afficherLiv->setStyleSheet(QLatin1String("QPushButton\n"
"{border-width:3px;\n"
"border-radius:20px;\n"
"border-color:yellow;\n"
"border-style:outset;\n"
"color:rgb(194, 59, 36);\n"
"	font: 9pt \"Arial Black\";\n"
"}"));
        tabLiv->addTab(tab_sms, icon3, QString());
        tab_imprimer = new QWidget();
        tab_imprimer->setObjectName(QStringLiteral("tab_imprimer"));
        tabLiv->addTab(tab_imprimer, icon4, QString());
        goToFour = new QCommandLinkButton(page_2);
        goToFour->setObjectName(QStringLiteral("goToFour"));
        goToFour->setGeometry(QRect(500, 640, 201, 41));
        goToFour->setStyleSheet(QStringLiteral("color: rgb(0, 120, 215);"));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 977, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        tabFour->setCurrentIndex(2);
        toolBox_2->setCurrentIndex(0);
        tabLiv->setCurrentIndex(2);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Gestion De Livraison", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Gestion Des Fournisseurs :", Q_NULLPTR));
        ajout_4->setTitle(QApplication::translate("MainWindow", "AJOUT", Q_NULLPTR));
        line_idLiv_17->setText(QString());
        line_idLiv_17->setPlaceholderText(QApplication::translate("MainWindow", "Identifiant Du Fournisseur", Q_NULLPTR));
        ajouterFour->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        line_idLiv_19->setText(QString());
        line_idLiv_19->setPlaceholderText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        line_idLiv_20->setText(QString());
        line_idLiv_20->setPlaceholderText(QApplication::translate("MainWindow", "E-Mail", Q_NULLPTR));
        line_idLiv_21->setText(QString());
        line_idLiv_21->setPlaceholderText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        line_idLiv_22->setText(QString());
        line_idLiv_22->setPlaceholderText(QApplication::translate("MainWindow", "Num T\303\251l\303\251phone", Q_NULLPTR));
        line_idLiv_23->setText(QString());
        line_idLiv_23->setPlaceholderText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        dateEdit->setSpecialValueText(QString());
        tabFour->setTabText(tabFour->indexOf(tab_ajouterFour), QApplication::translate("MainWindow", "AJOUTER", Q_NULLPTR));
        ajout_3->setTitle(QApplication::translate("MainWindow", "AFFICHAGE", Q_NULLPTR));
        line_idLiv_8->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Identifiant Du Fournisseur :", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "CIN:", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Nom:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Prenom:", Q_NULLPTR));
        afficherFour->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        line_idLiv_11->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "Date De Naissance:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Num T\303\251l\303\251phone:", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "E-Mail:", Q_NULLPTR));
        line_idLiv_12->setText(QString());
        line_idLiv_13->setText(QString());
        line_idLiv_14->setText(QString());
        line_idLiv_15->setText(QString());
        line_idLiv_16->setText(QString());
        toolBox_2->setItemText(toolBox_2->indexOf(page_3), QApplication::translate("MainWindow", "Page 1", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_4), QApplication::translate("MainWindow", "Page 2", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_5), QApplication::translate("MainWindow", "Page", Q_NULLPTR));
        tabFour->setTabText(tabFour->indexOf(tab_afficherFour), QApplication::translate("MainWindow", "AFFICHER", Q_NULLPTR));
        ajout_7->setTitle(QApplication::translate("MainWindow", "CHERCHER", Q_NULLPTR));
        line_aff_idLiv_4->setText(QString());
        line_aff_idLiv_4->setPlaceholderText(QApplication::translate("MainWindow", "J/M/YYYY", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Donner L'Identifiant Du Fournisseur :", Q_NULLPTR));
        chercherFour->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        tabFour->setTabText(tabFour->indexOf(tab_chercherFour), QApplication::translate("MainWindow", "CHERCHER", Q_NULLPTR));
        tabFour->setTabText(tabFour->indexOf(tab_mailingFour), QApplication::translate("MainWindow", "MAILING", Q_NULLPTR));
        tabFour->setTabText(tabFour->indexOf(tab_imprimerFour), QApplication::translate("MainWindow", "IMPRIMER", Q_NULLPTR));
        goToLiv->setText(QApplication::translate("MainWindow", "Gestion Du Livraison", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Gestion De Livraison :", Q_NULLPTR));
        ajout->setTitle(QApplication::translate("MainWindow", "AJOUT", Q_NULLPTR));
        line_idLiv->setText(QString());
        line_idLiv->setPlaceholderText(QApplication::translate("MainWindow", "Identifiant Du  Livraison ", Q_NULLPTR));
        line_idfourLiv->setText(QString());
        line_idfourLiv->setPlaceholderText(QApplication::translate("MainWindow", "Identifiant Du Forunisseur", Q_NULLPTR));
        line_descLiv->setText(QString());
        line_descLiv->setPlaceholderText(QApplication::translate("MainWindow", "Description Du Livraison", Q_NULLPTR));
        ajouterLiv->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabLiv->setTabText(tabLiv->indexOf(tab_ajouter), QApplication::translate("MainWindow", "AJOUTER", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        page_afficherLiv->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        ajout_6->setTitle(QApplication::translate("MainWindow", "AFFICHAGE", Q_NULLPTR));
        line_aff_idLiv_3->setText(QString());
        line_aff_dateLiv_2->setText(QString());
        line_aff_idfourLiv_2->setText(QString());
        line_aff_descLiv_2->setText(QString());
        label_15->setText(QApplication::translate("MainWindow", "Identifiant Du Livraison :", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Date Du Livraison :", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Description Du Livraison :", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Identifiant Du Fournisseur:", Q_NULLPTR));
        afficherLiv_2->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_afficherLiv), QApplication::translate("MainWindow", "Page 1", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_modifierLiv), QApplication::translate("MainWindow", "Page 2", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_suppLiv), QApplication::translate("MainWindow", "Page", Q_NULLPTR));
        tabLiv->setTabText(tabLiv->indexOf(tab_afficher), QApplication::translate("MainWindow", "AFFICHER", Q_NULLPTR));
        ajout_5->setTitle(QApplication::translate("MainWindow", "CHERCHER", Q_NULLPTR));
        line_aff_idLiv_2->setText(QString());
        line_aff_idLiv_2->setPlaceholderText(QApplication::translate("MainWindow", "J/M/YYYY", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Donner La Date  Du Livraison :", Q_NULLPTR));
        chercherLiv->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        tabLiv->setTabText(tabLiv->indexOf(tab_chercher), QApplication::translate("MainWindow", "CHERCHER", Q_NULLPTR));
        ajout_2->setTitle(QApplication::translate("MainWindow", "AFFICHAGE", Q_NULLPTR));
        line_aff_idLiv->setText(QString());
        line_aff_dateLiv->setText(QString());
        line_aff_idfourLiv->setText(QString());
        line_aff_descLiv->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Identifiant Du Livraison :", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Date Du Livraison :", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Description Du Livraison :", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Identifiant Du Fournisseur:", Q_NULLPTR));
        afficherLiv->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        tabLiv->setTabText(tabLiv->indexOf(tab_sms), QApplication::translate("MainWindow", "SMS", Q_NULLPTR));
        tabLiv->setTabText(tabLiv->indexOf(tab_imprimer), QApplication::translate("MainWindow", "IMPRIMER", Q_NULLPTR));
        goToFour->setText(QApplication::translate("MainWindow", "Gestion Des Fournisseurs", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
