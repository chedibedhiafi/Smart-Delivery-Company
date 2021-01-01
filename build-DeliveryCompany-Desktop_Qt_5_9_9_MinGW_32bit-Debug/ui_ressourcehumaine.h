/********************************************************************************
** Form generated from reading UI file 'ressourcehumaine.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESSOURCEHUMAINE_H
#define UI_RESSOURCEHUMAINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ressourceHumaine
{
public:

    void setupUi(QDialog *ressourceHumaine)
    {
        if (ressourceHumaine->objectName().isEmpty())
            ressourceHumaine->setObjectName(QStringLiteral("ressourceHumaine"));
        ressourceHumaine->resize(400, 300);

        retranslateUi(ressourceHumaine);

        QMetaObject::connectSlotsByName(ressourceHumaine);
    } // setupUi

    void retranslateUi(QDialog *ressourceHumaine)
    {
        ressourceHumaine->setWindowTitle(QApplication::translate("ressourceHumaine", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ressourceHumaine: public Ui_ressourceHumaine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESSOURCEHUMAINE_H
