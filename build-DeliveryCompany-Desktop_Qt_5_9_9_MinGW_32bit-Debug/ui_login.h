/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(759, 417);
        frame = new QFrame(login);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(150, 10, 381, 401));
        frame->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"background:#333;\n"
"background:rgba(0,0,0,0.2);\n"
"border-radius:15px;\n"
"\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 70, 131, 31));
        QFont font;
        font.setFamily(QStringLiteral("century-gothic"));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("*{\n"
"font-family:century-gothic;\n"
"font-size:17px;\n"
"color:black;\n"
"background:rgba(0,0,0,0.2);\n"
"}\n"
""));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 179, 241, 41));
        lineEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"	\n"
"	color: rgb(0, 0, 150);\n"
"}"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 279, 241, 31));
        lineEdit_2->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"	color: rgb(0, 0, 150);\n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 340, 261, 31));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(0, 0, 150);\n"
"border-radius:15px;}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"background:#49ebff;\n"
"background:rgb(115, 115, 115);\n"
"}\n"
""));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("login", "Se Connecter", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("login", "NOM_UTULISATEUR", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("login", "******************", Q_NULLPTR));
        pushButton->setText(QApplication::translate("login", "Connecter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
