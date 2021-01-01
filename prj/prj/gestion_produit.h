#ifndef GESTION_PRODUIT_H
#define GESTION_PRODUIT_H

#include <QDialog>
#include "produit.h"
#include <QPrinter>
#include <QFileDialog>
namespace Ui {
class gestion_produit;
}

class gestion_produit : public QDialog
{
    Q_OBJECT

public:
    explicit gestion_produit(QWidget *parent = nullptr);
    ~gestion_produit();

private slots:
    void on_ajouter_clicked();

    void on_modifier_clicked();

    void on_supprimer_clicked();

    void on_pushButton_9_clicked();

    void on_radioButton_4_clicked();

    void on_comboBox_13_currentTextChanged(const QString &arg1);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_checkBox_clicked(bool checked);

    void on_comboBox_12_currentTextChanged(const QString &arg1);

    void on_comboBox_14_currentTextChanged(const QString &arg1);

    void on_pushButton_10_clicked();

    void on_id_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_clicked();

private:
    Ui::gestion_produit *ui;
    produit tmprec;
    QString champ;
    int etat1=0,etat;
};

#endif // GESTION_PRODUIT_H
