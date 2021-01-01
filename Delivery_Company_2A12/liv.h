#ifndef LIV_H
#define LIV_H

#include <QDialog>

//#include <QMainWindow>
#include<QMediaPlayer>
#include<QPropertyAnimation>
#include"fournisseurs.h"
#include"livraisons.h"
//#include"mainwindow.h"
#include<QPainter>
#include<QPrinter>
#include<QPrintDialog>
#include<QDebug>
#include<QDateTimeEdit>
#include<QDate>
namespace Ui {
class liv;
}

class liv : public QDialog
{
    Q_OBJECT

public:
    explicit liv(QWidget *parent = nullptr);
    ~liv();
private slots:

    void on_goToFour_clicked();

    void on_goToLiv_clicked();





    void on_ajouterLiv_clicked();
    void on_ajouterFour_clicked();


    void on_chercherFour_clicked();





    void on_supprimerLiv_clicked();

    void on_supprimerFour_clicked();





    void on_pushButton_modifier_clicked();

    void on_pushButton_modifierFour_clicked();



    void on_radioButton_A_clicked();

    void on_radioButton_D_clicked();

   void on_pushButton_imprimer_clicked();

    void on_pushButton_pdf_clicked();

    void on_radioButton_ASC_clicked();

    void on_radioButton_DES_clicked();

    void on_chercherLiv_clicked();

    void on_pushButton_imprimerFour_clicked();

    void on_pushButton_pdfFour_clicked();

    void on_radioButton_clicked();

    void on_radioButton_actualiser_clicked();

    void on_radioButton_ASC_triID_clicked();

    void on_radioButton_DES_triID_clicked();

    void on_pushButton_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void on_pushButton_2_clicked();
    void on_positionChanged(qint64 position);
    void on_durationChanged(qint64 position);

    void on_verticalSlider_sliderMoved(int position);
    void on_buttonBox_accepted();
private:
    Ui::liv *ui;
    QMediaPlayer* player;
    QPropertyAnimation *animation;
    Livraisons tmpLiv;
    //Fournisseurs tmpFour;
};

#endif // LIV_H
