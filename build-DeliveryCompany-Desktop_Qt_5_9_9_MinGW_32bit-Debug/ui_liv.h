/********************************************************************************
** Form generated from reading UI file 'liv.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIV_H
#define UI_LIV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_liv
{
public:
    QGroupBox *groupBox;
    QStackedWidget *stackedWidget;
    QWidget *page_Four;
    QLabel *label_gestionDesFour;
    QTabWidget *tabFour;
    QWidget *tab_ajouterFour;
    QGroupBox *ajout_container;
    QLineEdit *lineEdit_idFour;
    QPushButton *ajouterFour;
    QLineEdit *lineEdit_cinPerso;
    QLineEdit *lineEdit_emailFour;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_numTel;
    QLineEdit *lineEdit_prenom;
    QWidget *tab_afficherFour;
    QTableView *tableView_afficherFour;
    QFrame *frame_2;
    QLineEdit *lineEdit_modifierId;
    QLineEdit *lineEdit_modifierNom;
    QLineEdit *lineEdit_modifierPrenom;
    QLineEdit *lineEdit_modifierEmail;
    QLineEdit *lineEdit_modifierCin;
    QLineEdit *lineEdit_modifierNum;
    QPushButton *pushButton_modifierFour;
    QFrame *frame_3;
    QLineEdit *lineEdit_suppidFour;
    QPushButton *supprimerFour;
    QPushButton *chercherFour;
    QRadioButton *radioButton;
    QFrame *frame;
    QRadioButton *radioButton_D;
    QRadioButton *radioButton_A;
    QRadioButton *radioButton_DES_triID;
    QRadioButton *radioButton_ASC_triID;
    QPushButton *pushButton_imprimerFour;
    QPushButton *pushButton_pdfFour;
    QLabel *label;
    QLabel *label_2;
    QCommandLinkButton *goToLiv;
    QWidget *page_Liv;
    QLabel *label_gestionDeLiv;
    QTabWidget *tabLiv;
    QWidget *tab_ajouter;
    QGroupBox *ajout;
    QLineEdit *line_idLiv;
    QLineEdit *line_descLiv;
    QPushButton *ajouterLiv;
    QLineEdit *lineEdit_etatLiv;
    QWidget *tab_afficher;
    QTableView *tableView_afficherLiv;
    QFrame *frame_4;
    QLineEdit *lineEdit_suppIdLiv;
    QPushButton *supprimerLiv;
    QPushButton *chercherLiv;
    QRadioButton *radioButton_actualiser;
    QPushButton *pushButton_imprimer;
    QPushButton *pushButton_pdf;
    QFrame *frame_5;
    QPushButton *pushButton_modifier;
    QLineEdit *LineEdit_modifierIdLiv;
    QLineEdit *lineEdit_modifierEtat;
    QLineEdit *LineEdit_modifierDescLiv;
    QFrame *frame_6;
    QRadioButton *radioButton_DES;
    QRadioButton *radioButton_ASC;
    QCommandLinkButton *goToFour;
    QLabel *logo;
    QSlider *horizontalSlider;
    QSlider *verticalSlider;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *liv)
    {
        if (liv->objectName().isEmpty())
            liv->setObjectName(QStringLiteral("liv"));
        liv->resize(902, 664);
        groupBox = new QGroupBox(liv);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(-130, -30, 2991, 761));
        groupBox->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(1);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QLatin1String("/*background-color:rgb(143, 178, 255);*/\n"
"\n"
""));
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(100, 30, 711, 681));
        stackedWidget->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(194, 59, 36);"));
        page_Four = new QWidget();
        page_Four->setObjectName(QStringLiteral("page_Four"));
        label_gestionDesFour = new QLabel(page_Four);
        label_gestionDesFour->setObjectName(QStringLiteral("label_gestionDesFour"));
        label_gestionDesFour->setGeometry(QRect(40, 10, 291, 41));
        label_gestionDesFour->setStyleSheet(QLatin1String("QLabel\n"
"{background-color:rgb(249, 249, 249);\n"
"color: rgb(0, 0, 150);\n"
"font: 87 14pt \"Arial Black\";\n"
"text-decoration: underline;\n"
"border-radius:20px;\n"
"}"));
        tabFour = new QTabWidget(page_Four);
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
        ajout_container = new QGroupBox(tab_ajouterFour);
        ajout_container->setObjectName(QStringLiteral("ajout_container"));
        ajout_container->setGeometry(QRect(20, 10, 551, 521));
        ajout_container->setStyleSheet(QLatin1String("/*color: rgb(0, 0, 150);*/\n"
"font: 87 6pt \"Arial Black\";\n"
""));
        lineEdit_idFour = new QLineEdit(ajout_container);
        lineEdit_idFour->setObjectName(QStringLiteral("lineEdit_idFour"));
        lineEdit_idFour->setGeometry(QRect(170, 50, 171, 41));
        lineEdit_idFour->setStyleSheet(QLatin1String("QLineEdit\n"
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
        ajouterFour = new QPushButton(ajout_container);
        ajouterFour->setObjectName(QStringLiteral("ajouterFour"));
        ajouterFour->setGeometry(QRect(210, 460, 81, 31));
        ajouterFour->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        lineEdit_cinPerso = new QLineEdit(ajout_container);
        lineEdit_cinPerso->setObjectName(QStringLiteral("lineEdit_cinPerso"));
        lineEdit_cinPerso->setGeometry(QRect(170, 370, 171, 41));
        lineEdit_cinPerso->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :65px;\n"
"padding-right :65px;\n"
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
        lineEdit_cinPerso->setMaxLength(32766);
        lineEdit_emailFour = new QLineEdit(ajout_container);
        lineEdit_emailFour->setObjectName(QStringLiteral("lineEdit_emailFour"));
        lineEdit_emailFour->setGeometry(QRect(170, 310, 171, 41));
        lineEdit_emailFour->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :60px;\n"
"padding-right :60px;\n"
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
        lineEdit_nom = new QLineEdit(ajout_container);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(170, 110, 171, 41));
        lineEdit_nom->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :70px;\n"
"padding-right :70px;\n"
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
        lineEdit_numTel = new QLineEdit(ajout_container);
        lineEdit_numTel->setObjectName(QStringLiteral("lineEdit_numTel"));
        lineEdit_numTel->setGeometry(QRect(170, 240, 171, 41));
        lineEdit_numTel->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :50px;\n"
"padding-right :45px;\n"
"/*background-color:rgb(115, 115, 115) ;*/\n"
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
        lineEdit_prenom = new QLineEdit(ajout_container);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(170, 170, 171, 41));
        lineEdit_prenom->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:2px solid rgb(194, 59, 36);\n"
"border-radius:20px;\n"
"color:#FFF;\n"
"padding-left :65px;\n"
"padding-right :65px;\n"
"/*background-color:rgb(0, 0, 150) ;*/\n"
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
        QIcon icon;
        icon.addFile(QStringLiteral("../../add.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabFour->addTab(tab_ajouterFour, icon, QString());
        tab_afficherFour = new QWidget();
        tab_afficherFour->setObjectName(QStringLiteral("tab_afficherFour"));
        tableView_afficherFour = new QTableView(tab_afficherFour);
        tableView_afficherFour->setObjectName(QStringLiteral("tableView_afficherFour"));
        tableView_afficherFour->setGeometry(QRect(10, 90, 361, 221));
        frame_2 = new QFrame(tab_afficherFour);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(20, 330, 301, 201));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(164, 178, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lineEdit_modifierId = new QLineEdit(frame_2);
        lineEdit_modifierId->setObjectName(QStringLiteral("lineEdit_modifierId"));
        lineEdit_modifierId->setGeometry(QRect(10, 10, 121, 31));
        lineEdit_modifierId->setStyleSheet(QLatin1String("QLineEdit\n"
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
        lineEdit_modifierNom = new QLineEdit(frame_2);
        lineEdit_modifierNom->setObjectName(QStringLiteral("lineEdit_modifierNom"));
        lineEdit_modifierNom->setGeometry(QRect(10, 60, 121, 31));
        lineEdit_modifierNom->setStyleSheet(QLatin1String("QLineEdit\n"
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
"background-color:rgb(115, 115, 115);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        lineEdit_modifierPrenom = new QLineEdit(frame_2);
        lineEdit_modifierPrenom->setObjectName(QStringLiteral("lineEdit_modifierPrenom"));
        lineEdit_modifierPrenom->setGeometry(QRect(10, 110, 121, 31));
        lineEdit_modifierPrenom->setStyleSheet(QLatin1String("QLineEdit\n"
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
        lineEdit_modifierEmail = new QLineEdit(frame_2);
        lineEdit_modifierEmail->setObjectName(QStringLiteral("lineEdit_modifierEmail"));
        lineEdit_modifierEmail->setGeometry(QRect(170, 60, 121, 31));
        lineEdit_modifierEmail->setStyleSheet(QLatin1String("QLineEdit\n"
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
        lineEdit_modifierCin = new QLineEdit(frame_2);
        lineEdit_modifierCin->setObjectName(QStringLiteral("lineEdit_modifierCin"));
        lineEdit_modifierCin->setGeometry(QRect(170, 110, 121, 31));
        lineEdit_modifierCin->setStyleSheet(QLatin1String("QLineEdit\n"
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
        lineEdit_modifierNum = new QLineEdit(frame_2);
        lineEdit_modifierNum->setObjectName(QStringLiteral("lineEdit_modifierNum"));
        lineEdit_modifierNum->setGeometry(QRect(170, 10, 121, 31));
        lineEdit_modifierNum->setStyleSheet(QLatin1String("QLineEdit\n"
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
"background-color:rgb(115, 115, 115);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color: rgb(121, 121, 121);\n"
"}"));
        pushButton_modifierFour = new QPushButton(frame_2);
        pushButton_modifierFour->setObjectName(QStringLiteral("pushButton_modifierFour"));
        pushButton_modifierFour->setGeometry(QRect(120, 160, 61, 31));
        pushButton_modifierFour->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        frame_3 = new QFrame(tab_afficherFour);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(400, 90, 171, 151));
        frame_3->setStyleSheet(QLatin1String("background-color: rgb(164, 178, 255);\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lineEdit_suppidFour = new QLineEdit(frame_3);
        lineEdit_suppidFour->setObjectName(QStringLiteral("lineEdit_suppidFour"));
        lineEdit_suppidFour->setGeometry(QRect(10, 20, 151, 31));
        lineEdit_suppidFour->setStyleSheet(QLatin1String("/*QLineEdit\n"
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
"}*/\n"
"QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        supprimerFour = new QPushButton(frame_3);
        supprimerFour->setObjectName(QStringLiteral("supprimerFour"));
        supprimerFour->setGeometry(QRect(20, 80, 61, 31));
        supprimerFour->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        chercherFour = new QPushButton(frame_3);
        chercherFour->setObjectName(QStringLiteral("chercherFour"));
        chercherFour->setGeometry(QRect(100, 80, 61, 31));
        chercherFour->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}\n"
""));
        radioButton = new QRadioButton(frame_3);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(20, 130, 82, 17));
        radioButton->setStyleSheet(QLatin1String("QRadioButton\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	\n"
"	font: 87 6pt \"Arial Black\";\n"
"}"));
        frame = new QFrame(tab_afficherFour);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 40, 211, 41));
        frame->setStyleSheet(QLatin1String("background-color: rgb(164, 178, 255);\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        radioButton_D = new QRadioButton(frame);
        radioButton_D->setObjectName(QStringLiteral("radioButton_D"));
        radioButton_D->setGeometry(QRect(10, 20, 82, 17));
        radioButton_D->setStyleSheet(QLatin1String("QRadioButton\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	\n"
"	font: 87 6pt \"Arial Black\";\n"
"}"));
        radioButton_A = new QRadioButton(frame);
        radioButton_A->setObjectName(QStringLiteral("radioButton_A"));
        radioButton_A->setGeometry(QRect(10, 0, 82, 17));
        radioButton_A->setStyleSheet(QLatin1String("QRadioButton\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	\n"
"	font: 87 6pt \"Arial Black\";\n"
"}"));
        radioButton_DES_triID = new QRadioButton(frame);
        radioButton_DES_triID->setObjectName(QStringLiteral("radioButton_DES_triID"));
        radioButton_DES_triID->setGeometry(QRect(150, 20, 82, 17));
        radioButton_DES_triID->setStyleSheet(QLatin1String("QRadioButton\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	\n"
"	font: 87 6pt \"Arial Black\";\n"
"}"));
        radioButton_ASC_triID = new QRadioButton(frame);
        radioButton_ASC_triID->setObjectName(QStringLiteral("radioButton_ASC_triID"));
        radioButton_ASC_triID->setGeometry(QRect(150, 0, 82, 17));
        radioButton_ASC_triID->setStyleSheet(QLatin1String("QRadioButton\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	\n"
"	font: 87 6pt \"Arial Black\";\n"
"}"));
        pushButton_imprimerFour = new QPushButton(tab_afficherFour);
        pushButton_imprimerFour->setObjectName(QStringLiteral("pushButton_imprimerFour"));
        pushButton_imprimerFour->setGeometry(QRect(510, 480, 71, 21));
        pushButton_imprimerFour->setStyleSheet(QLatin1String("QPushButton\n"
"{border-width:3px;\n"
"border-radius:20px;\n"
"border-color:rgb(213, 203, 200);\n"
"border-style:outset;\n"
"color:rgb(194, 59, 36);\n"
"	font: 6pt \"Arial Black\";\n"
"}"));
        pushButton_pdfFour = new QPushButton(tab_afficherFour);
        pushButton_pdfFour->setObjectName(QStringLiteral("pushButton_pdfFour"));
        pushButton_pdfFour->setGeometry(QRect(510, 510, 71, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial Black"));
        font1.setPointSize(6);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_pdfFour->setFont(font1);
        pushButton_pdfFour->setStyleSheet(QLatin1String("QPushButton\n"
"{border-width:3px;\n"
"border-radius:20px;\n"
"border-color:rgb(167, 167, 167);\n"
"border-style:outset;\n"
"color:rgb(194, 59, 36);\n"
"	font: 6pt \"Arial Black\";\n"
"}"));
        label = new QLabel(tab_afficherFour);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 71, 16));
        label->setStyleSheet(QStringLiteral("color:rgb(0, 0, 150);"));
        label_2 = new QLabel(tab_afficherFour);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 20, 71, 16));
        label_2->setStyleSheet(QStringLiteral("color:rgb(0, 0, 150);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../download (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        tabFour->addTab(tab_afficherFour, icon1, QString());
        goToLiv = new QCommandLinkButton(page_Four);
        goToLiv->setObjectName(QStringLiteral("goToLiv"));
        goToLiv->setGeometry(QRect(30, 640, 201, 41));
        goToLiv->setStyleSheet(QStringLiteral("/*color: rgb(0, 120, 215);"));
        stackedWidget->addWidget(page_Four);
        page_Liv = new QWidget();
        page_Liv->setObjectName(QStringLiteral("page_Liv"));
        label_gestionDeLiv = new QLabel(page_Liv);
        label_gestionDeLiv->setObjectName(QStringLiteral("label_gestionDeLiv"));
        label_gestionDeLiv->setGeometry(QRect(40, 10, 241, 41));
        label_gestionDeLiv->setStyleSheet(QLatin1String("QLabel\n"
"{background-color:rgb(249, 249, 249);\n"
"color: rgb(0, 0, 150);\n"
"font: 87 14pt \"Arial Black\";\n"
"text-decoration: underline;\n"
"border-radius:20px;\n"
"}"));
        tabLiv = new QTabWidget(page_Liv);
        tabLiv->setObjectName(QStringLiteral("tabLiv"));
        tabLiv->setGeometry(QRect(30, 50, 591, 551));
        tabLiv->setStyleSheet(QLatin1String("background-color:rgb(255, 255, 255);\n"
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
        ajout->setGeometry(QRect(40, 10, 471, 501));
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
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
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
"background-color:rgb(200, 200, 200);\n"
"\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border: 2px solid rgb(0,0,0);\n"
"background-color:rgb(115, 115, 115) ;\n"
"\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 0,0);\n"
"	background-color: rgb(121,121,121);\n"
"}"));
        ajouterLiv = new QPushButton(ajout);
        ajouterLiv->setObjectName(QStringLiteral("ajouterLiv"));
        ajouterLiv->setGeometry(QRect(190, 390, 81, 31));
        ajouterLiv->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        lineEdit_etatLiv = new QLineEdit(ajout);
        lineEdit_etatLiv->setObjectName(QStringLiteral("lineEdit_etatLiv"));
        lineEdit_etatLiv->setGeometry(QRect(150, 180, 161, 41));
        lineEdit_etatLiv->setStyleSheet(QLatin1String("QLineEdit\n"
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
"\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 0,0);\n"
"	background-color: rgb(121,121,121);\n"
"}"));
        tabLiv->addTab(tab_ajouter, icon, QString());
        tab_afficher = new QWidget();
        tab_afficher->setObjectName(QStringLiteral("tab_afficher"));
        tableView_afficherLiv = new QTableView(tab_afficher);
        tableView_afficherLiv->setObjectName(QStringLiteral("tableView_afficherLiv"));
        tableView_afficherLiv->setGeometry(QRect(10, 50, 351, 241));
        frame_4 = new QFrame(tab_afficher);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(410, 70, 161, 131));
        frame_4->setStyleSheet(QStringLiteral("background-color: rgb(164, 178, 255);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        lineEdit_suppIdLiv = new QLineEdit(frame_4);
        lineEdit_suppIdLiv->setObjectName(QStringLiteral("lineEdit_suppIdLiv"));
        lineEdit_suppIdLiv->setGeometry(QRect(20, 30, 131, 31));
        lineEdit_suppIdLiv->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        supprimerLiv = new QPushButton(frame_4);
        supprimerLiv->setObjectName(QStringLiteral("supprimerLiv"));
        supprimerLiv->setGeometry(QRect(30, 80, 51, 31));
        supprimerLiv->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        chercherLiv = new QPushButton(frame_4);
        chercherLiv->setObjectName(QStringLiteral("chercherLiv"));
        chercherLiv->setGeometry(QRect(90, 80, 51, 31));
        chercherLiv->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        radioButton_actualiser = new QRadioButton(frame_4);
        radioButton_actualiser->setObjectName(QStringLiteral("radioButton_actualiser"));
        radioButton_actualiser->setGeometry(QRect(10, 110, 82, 17));
        radioButton_actualiser->setStyleSheet(QLatin1String("QRadioButton\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	\n"
"	font: 87 6pt \"Arial Black\";\n"
"}"));
        pushButton_imprimer = new QPushButton(tab_afficher);
        pushButton_imprimer->setObjectName(QStringLiteral("pushButton_imprimer"));
        pushButton_imprimer->setGeometry(QRect(520, 460, 61, 31));
        pushButton_imprimer->setStyleSheet(QLatin1String("QPushButton\n"
"{border-width:3px;\n"
"border-radius:20px;\n"
"border-color:rgb(213, 203, 200);\n"
"border-style:outset;\n"
"color:rgb(194, 59, 36);\n"
"	font: 6pt \"Arial Black\";\n"
"}"));
        pushButton_pdf = new QPushButton(tab_afficher);
        pushButton_pdf->setObjectName(QStringLiteral("pushButton_pdf"));
        pushButton_pdf->setGeometry(QRect(520, 490, 61, 31));
        pushButton_pdf->setStyleSheet(QLatin1String("QPushButton\n"
"{border-width:3px;\n"
"border-radius:20px;\n"
"border-color:rgb(213, 203, 200);\n"
"border-style:outset;\n"
"color:rgb(194, 59, 36);\n"
"	font: 6pt \"Arial Black\";\n"
"}"));
        frame_5 = new QFrame(tab_afficher);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(50, 300, 281, 211));
        frame_5->setStyleSheet(QStringLiteral("background-color: rgb(164, 178, 255);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        pushButton_modifier = new QPushButton(frame_5);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(90, 160, 61, 31));
        pushButton_modifier->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 252, 172);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        LineEdit_modifierIdLiv = new QLineEdit(frame_5);
        LineEdit_modifierIdLiv->setObjectName(QStringLiteral("LineEdit_modifierIdLiv"));
        LineEdit_modifierIdLiv->setGeometry(QRect(10, 30, 91, 41));
        LineEdit_modifierIdLiv->setStyleSheet(QLatin1String("QLineEdit\n"
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
"\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 0,0);\n"
"	background-color: rgb(121,121,121);\n"
"}"));
        lineEdit_modifierEtat = new QLineEdit(frame_5);
        lineEdit_modifierEtat->setObjectName(QStringLiteral("lineEdit_modifierEtat"));
        lineEdit_modifierEtat->setGeometry(QRect(10, 90, 91, 41));
        lineEdit_modifierEtat->setStyleSheet(QLatin1String("QLineEdit\n"
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
"\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 0,0);\n"
"	background-color: rgb(121,121,121);\n"
"}"));
        LineEdit_modifierDescLiv = new QLineEdit(frame_5);
        LineEdit_modifierDescLiv->setObjectName(QStringLiteral("LineEdit_modifierDescLiv"));
        LineEdit_modifierDescLiv->setGeometry(QRect(150, 30, 101, 101));
        LineEdit_modifierDescLiv->setStyleSheet(QLatin1String("QLineEdit\n"
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
"\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(0, 0,0);\n"
"	background-color: rgb(121,121,121);\n"
"}"));
        frame_6 = new QFrame(tab_afficher);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(10, 10, 211, 31));
        frame_6->setStyleSheet(QStringLiteral("background-color: rgb(164, 178, 255);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        radioButton_DES = new QRadioButton(frame_6);
        radioButton_DES->setObjectName(QStringLiteral("radioButton_DES"));
        radioButton_DES->setGeometry(QRect(130, 10, 82, 17));
        radioButton_DES->setStyleSheet(QLatin1String("QRadioButton\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	\n"
"	font: 87 6pt \"Arial Black\";\n"
"}"));
        radioButton_ASC = new QRadioButton(frame_6);
        radioButton_ASC->setObjectName(QStringLiteral("radioButton_ASC"));
        radioButton_ASC->setGeometry(QRect(10, 10, 82, 17));
        radioButton_ASC->setStyleSheet(QLatin1String("QRadioButton\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	\n"
"	font: 87 6pt \"Arial Black\";\n"
"}"));
        tabLiv->addTab(tab_afficher, icon1, QString());
        goToFour = new QCommandLinkButton(page_Liv);
        goToFour->setObjectName(QStringLiteral("goToFour"));
        goToFour->setGeometry(QRect(20, 640, 201, 41));
        goToFour->setStyleSheet(QStringLiteral("/*color: rgb(0, 120, 215);"));
        stackedWidget->addWidget(page_Liv);
        logo = new QLabel(groupBox);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(770, 250, 241, 231));
        logo->setPixmap(QPixmap(QString::fromUtf8("../../application - Copy (2)/ressources/logo.png")));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(810, 90, 41, 20));
        horizontalSlider->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(groupBox);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(850, 30, 22, 51));
        verticalSlider->setOrientation(Qt::Vertical);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(810, 30, 31, 21));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 255, 255);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(810, 60, 31, 21));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(255, 255, 255);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(200, 200, 200);\n"
"}"));
        logo->raise();
        stackedWidget->raise();
        horizontalSlider->raise();
        verticalSlider->raise();
        pushButton->raise();
        pushButton_2->raise();

        retranslateUi(liv);

        stackedWidget->setCurrentIndex(1);
        tabFour->setCurrentIndex(1);
        tabLiv->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(liv);
    } // setupUi

    void retranslateUi(QDialog *liv)
    {
        liv->setWindowTitle(QApplication::translate("liv", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_gestionDesFour->setText(QApplication::translate("liv", "Gestion Des Fournisseurs :", Q_NULLPTR));
        ajout_container->setTitle(QApplication::translate("liv", "AJOUT", Q_NULLPTR));
        lineEdit_idFour->setText(QString());
        lineEdit_idFour->setPlaceholderText(QApplication::translate("liv", "Identifiant ", Q_NULLPTR));
        ajouterFour->setText(QApplication::translate("liv", "Ajouter", Q_NULLPTR));
        lineEdit_cinPerso->setText(QString());
        lineEdit_cinPerso->setPlaceholderText(QApplication::translate("liv", "CIN", Q_NULLPTR));
        lineEdit_emailFour->setText(QString());
        lineEdit_emailFour->setPlaceholderText(QApplication::translate("liv", "E-Mail", Q_NULLPTR));
        lineEdit_nom->setText(QString());
        lineEdit_nom->setPlaceholderText(QApplication::translate("liv", "Nom", Q_NULLPTR));
        lineEdit_numTel->setText(QString());
        lineEdit_numTel->setPlaceholderText(QApplication::translate("liv", "Num T\303\251l\303\251phone", Q_NULLPTR));
        lineEdit_prenom->setText(QString());
        lineEdit_prenom->setPlaceholderText(QApplication::translate("liv", "Prenom", Q_NULLPTR));
        tabFour->setTabText(tabFour->indexOf(tab_ajouterFour), QApplication::translate("liv", "AJOUTER", Q_NULLPTR));
        lineEdit_modifierId->setText(QString());
        lineEdit_modifierId->setPlaceholderText(QApplication::translate("liv", "ID", Q_NULLPTR));
        lineEdit_modifierNom->setText(QString());
        lineEdit_modifierNom->setPlaceholderText(QApplication::translate("liv", "NOM", Q_NULLPTR));
        lineEdit_modifierPrenom->setText(QString());
        lineEdit_modifierPrenom->setPlaceholderText(QApplication::translate("liv", "PRENOM", Q_NULLPTR));
        lineEdit_modifierEmail->setText(QString());
        lineEdit_modifierEmail->setPlaceholderText(QApplication::translate("liv", "EMAIL", Q_NULLPTR));
        lineEdit_modifierCin->setText(QString());
        lineEdit_modifierCin->setPlaceholderText(QApplication::translate("liv", "CIN", Q_NULLPTR));
        lineEdit_modifierNum->setText(QString());
        lineEdit_modifierNum->setPlaceholderText(QApplication::translate("liv", "TELE", Q_NULLPTR));
        pushButton_modifierFour->setText(QApplication::translate("liv", "Modifier", Q_NULLPTR));
        lineEdit_suppidFour->setText(QString());
        lineEdit_suppidFour->setPlaceholderText(QApplication::translate("liv", "ID / CIN / NOM", Q_NULLPTR));
        supprimerFour->setText(QApplication::translate("liv", "Supprimer", Q_NULLPTR));
        chercherFour->setText(QApplication::translate("liv", "Chercher", Q_NULLPTR));
        radioButton->setText(QApplication::translate("liv", "Actualiser", Q_NULLPTR));
        radioButton_D->setText(QApplication::translate("liv", "Z>>A", Q_NULLPTR));
        radioButton_A->setText(QApplication::translate("liv", "A>>Z", Q_NULLPTR));
        radioButton_DES_triID->setText(QApplication::translate("liv", "* >> 1", Q_NULLPTR));
        radioButton_ASC_triID->setText(QApplication::translate("liv", "1 >> *", Q_NULLPTR));
        pushButton_imprimerFour->setText(QApplication::translate("liv", "Imprimer", Q_NULLPTR));
        pushButton_pdfFour->setText(QApplication::translate("liv", "pdf", Q_NULLPTR));
        label->setText(QApplication::translate("liv", "Trier par Nom", Q_NULLPTR));
        label_2->setText(QApplication::translate("liv", "Trier par ID", Q_NULLPTR));
        tabFour->setTabText(tabFour->indexOf(tab_afficherFour), QApplication::translate("liv", "AFFICHER", Q_NULLPTR));
        goToLiv->setText(QApplication::translate("liv", "Gestion Des Livraisons", Q_NULLPTR));
        label_gestionDeLiv->setText(QApplication::translate("liv", "Gestion De Livraison :", Q_NULLPTR));
        ajout->setTitle(QApplication::translate("liv", "AJOUT", Q_NULLPTR));
        line_idLiv->setText(QString());
        line_idLiv->setPlaceholderText(QApplication::translate("liv", "Num Livraison", Q_NULLPTR));
        line_descLiv->setText(QString());
        line_descLiv->setPlaceholderText(QApplication::translate("liv", "Description ", Q_NULLPTR));
        ajouterLiv->setText(QApplication::translate("liv", "Ajouter", Q_NULLPTR));
        lineEdit_etatLiv->setText(QString());
        lineEdit_etatLiv->setPlaceholderText(QApplication::translate("liv", "Etat", Q_NULLPTR));
        tabLiv->setTabText(tabLiv->indexOf(tab_ajouter), QApplication::translate("liv", "AJOUTER", Q_NULLPTR));
        lineEdit_suppIdLiv->setText(QApplication::translate("liv", "Ecrivez ici..", Q_NULLPTR));
        lineEdit_suppIdLiv->setPlaceholderText(QApplication::translate("liv", "Ecrivez ici", Q_NULLPTR));
        supprimerLiv->setText(QApplication::translate("liv", "Supprimer", Q_NULLPTR));
        chercherLiv->setText(QApplication::translate("liv", "chercher", Q_NULLPTR));
        radioButton_actualiser->setText(QApplication::translate("liv", "Actualiser", Q_NULLPTR));
        pushButton_imprimer->setText(QApplication::translate("liv", "Imprimer", Q_NULLPTR));
        pushButton_pdf->setText(QApplication::translate("liv", "PDF", Q_NULLPTR));
        pushButton_modifier->setText(QApplication::translate("liv", "Modifier", Q_NULLPTR));
        LineEdit_modifierIdLiv->setText(QString());
        LineEdit_modifierIdLiv->setPlaceholderText(QApplication::translate("liv", "NUM", Q_NULLPTR));
        lineEdit_modifierEtat->setText(QString());
        lineEdit_modifierEtat->setPlaceholderText(QApplication::translate("liv", "Etat", Q_NULLPTR));
        LineEdit_modifierDescLiv->setText(QString());
        LineEdit_modifierDescLiv->setPlaceholderText(QApplication::translate("liv", "DESCRIPTION", Q_NULLPTR));
        radioButton_DES->setText(QApplication::translate("liv", "* >> 1", Q_NULLPTR));
        radioButton_ASC->setText(QApplication::translate("liv", "1 >> *", Q_NULLPTR));
        tabLiv->setTabText(tabLiv->indexOf(tab_afficher), QApplication::translate("liv", "AFFICHER", Q_NULLPTR));
        goToFour->setText(QApplication::translate("liv", "Gestion Des Fournisseurs", Q_NULLPTR));
        logo->setText(QString());
        pushButton->setText(QApplication::translate("liv", "ON", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("liv", "OFF", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class liv: public Ui_liv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIV_H
