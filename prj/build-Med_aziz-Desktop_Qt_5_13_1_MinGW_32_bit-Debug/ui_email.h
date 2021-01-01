/********************************************************************************
** Form generated from reading UI file 'email.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAIL_H
#define UI_EMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_email
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendBtn;
    QPushButton *exitBtn;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *server;
    QLabel *label_5;
    QLineEdit *port;
    QLabel *label_6;
    QLineEdit *uname;
    QLabel *label_7;
    QLineEdit *paswd;
    QLabel *label_8;
    QLineEdit *rcpt;
    QLabel *label_9;
    QLineEdit *subject;
    QLabel *label_10;
    QPlainTextEdit *msg;

    void setupUi(QDialog *email)
    {
        if (email->objectName().isEmpty())
            email->setObjectName(QString::fromUtf8("email"));
        email->resize(400, 381);
        buttonBox = new QDialogButtonBox(email);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(email);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, -10, 204, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sendBtn = new QPushButton(layoutWidget);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));

        horizontalLayout->addWidget(sendBtn);

        exitBtn = new QPushButton(layoutWidget);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));

        horizontalLayout->addWidget(exitBtn);

        layoutWidget_2 = new QWidget(email);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 20, 327, 368));
        formLayout = new QFormLayout(layoutWidget_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout->setVerticalSpacing(9);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        server = new QLineEdit(layoutWidget_2);
        server->setObjectName(QString::fromUtf8("server"));

        formLayout->setWidget(0, QFormLayout::FieldRole, server);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        port = new QLineEdit(layoutWidget_2);
        port->setObjectName(QString::fromUtf8("port"));

        formLayout->setWidget(1, QFormLayout::FieldRole, port);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        uname = new QLineEdit(layoutWidget_2);
        uname->setObjectName(QString::fromUtf8("uname"));

        formLayout->setWidget(2, QFormLayout::FieldRole, uname);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        paswd = new QLineEdit(layoutWidget_2);
        paswd->setObjectName(QString::fromUtf8("paswd"));
        paswd->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, paswd);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        rcpt = new QLineEdit(layoutWidget_2);
        rcpt->setObjectName(QString::fromUtf8("rcpt"));

        formLayout->setWidget(4, QFormLayout::FieldRole, rcpt);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_9);

        subject = new QLineEdit(layoutWidget_2);
        subject->setObjectName(QString::fromUtf8("subject"));

        formLayout->setWidget(5, QFormLayout::FieldRole, subject);

        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_10);

        msg = new QPlainTextEdit(layoutWidget_2);
        msg->setObjectName(QString::fromUtf8("msg"));

        formLayout->setWidget(6, QFormLayout::FieldRole, msg);


        retranslateUi(email);
        QObject::connect(buttonBox, SIGNAL(accepted()), email, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), email, SLOT(reject()));

        QMetaObject::connectSlotsByName(email);
    } // setupUi

    void retranslateUi(QDialog *email)
    {
        email->setWindowTitle(QCoreApplication::translate("email", "Dialog", nullptr));
        sendBtn->setText(QCoreApplication::translate("email", "Send", nullptr));
        exitBtn->setText(QCoreApplication::translate("email", "Exit", nullptr));
        label_4->setText(QCoreApplication::translate("email", "Smtp-server:", nullptr));
        server->setText(QCoreApplication::translate("email", "smtp.gmail.com", nullptr));
        label_5->setText(QCoreApplication::translate("email", "Server port:", nullptr));
        port->setText(QCoreApplication::translate("email", "465", nullptr));
        label_6->setText(QCoreApplication::translate("email", "Username:", nullptr));
        label_7->setText(QCoreApplication::translate("email", "Password:", nullptr));
        paswd->setInputMask(QString());
        label_8->setText(QCoreApplication::translate("email", "Recipant to:", nullptr));
        label_9->setText(QCoreApplication::translate("email", "Subject:", nullptr));
        label_10->setText(QCoreApplication::translate("email", "Message:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class email: public Ui_email {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAIL_H
