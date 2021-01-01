#ifndef GESTION_CATEGORIE_H
#define GESTION_CATEGORIE_H

#include <QDialog>
#include "categorie.h"
namespace Ui {
class gestion_categorie;
}

class gestion_categorie : public QDialog
{
    Q_OBJECT

public:
    explicit gestion_categorie(QWidget *parent = nullptr);
    ~gestion_categorie();
private slots:
    void on_ajouter_clicked();
    void on_modifier_clicked();

    void on_supprimer_clicked();

private:
    Ui::gestion_categorie *ui;
    categorie tmprec;
};

#endif // GESTION_CATEGORIE_H
