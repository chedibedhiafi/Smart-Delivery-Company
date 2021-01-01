#ifndef RESSOURCEHUMAINE_H
#define RESSOURCEHUMAINE_H
#include "employe.h"
#include "poste.h"
#include <QMediaPlayer>
#include <QDialog>

namespace Ui {
class ressourceHumaine;
}

class ressourceHumaine : public QDialog
{
    Q_OBJECT

public:
    explicit ressourceHumaine(QWidget *parent = nullptr);
    ~ressourceHumaine();
private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pushButton_4_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();



    void on_pushButton_5_clicked();

private:
    Ui::ressourceHumaine *ui;
    Employes tmpemployes;
        Poste tmpposte;
        Employes tmpFour;
        QMediaPlayer *click;
};

#endif // RESSOURCEHUMAINE_H
