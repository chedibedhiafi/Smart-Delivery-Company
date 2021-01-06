#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QMessageBox>
#include <QDebug>
#include <QPdfWriter>
#include <QPainter>
#include <QPrinter>
#include <QPrintDialog>
#include <QFileDialog>
#include <QTextDocument>
#include <QPixmap>
#include <QPropertyAnimation>
#include "ui_mainwindow.h"
#include "employe.h"
#include "poste.h"
#include "statistique.h"
#include "historique.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Employe e;
    Poste P;

private slots:
    void on_Ajouter_e_clicked();

    void on_modifier_e_clicked();

    void on_Supprimer_e_clicked();

    void on_Backtomenu_clicked();

    void on_Trier_clicked();

    void on_Triprix_clicked();

    void on_TriAsc_e_clicked();

    void on_TriDesc_e_clicked();

    void on_back_triprix_clicked();

    void on_trinom_clicked();

    void on_TriAsc_en_clicked();

    void on_TriDesc_en_clicked();

    void on_back_trinom_clicked();

    void on_Trietat_clicked();

    void on_TriAsc_ee_clicked();

    void on_TriDesc_ee_clicked();

    void on_back_trietat_clicked();

    void on_back_tri_clicked();

    void on_Rechercher_ID_clicked();

    void on_Rechercher_clicked();

    void on_Rechercher_Nom_clicked();

    void on_Rechercher_Etat_clicked();

    void on_Back_rechercher_clicked();

    void on_print_clicked();

    void on_ajouter_f_clicked();

    void on_modifier_f_clicked();

    void on_Backtomenu_2_clicked();

    void on_Supprimer_f_clicked();

    void on_Trier_2_clicked();

    void on_Triprix_2_clicked();

    void on_TriAsc_e_2_clicked();

    void on_TriDesc_e_2_clicked();

    void on_back_triprix_2_clicked();

    void on_trinom_2_clicked();

    void on_TriAsc_en_2_clicked();

    void on_TriDesc_en_2_clicked();

    void on_back_trinom_2_clicked();

    void on_Trietat_2_clicked();

    void on_TriAsc_ee_2_clicked();

    void on_TriDesc_ee_2_clicked();

    void on_back_trietat_2_clicked();

    void on_back_tri_2_clicked();

    void on_Rechercher_ID_2_clicked();

    void on_Rechercher_Nom_2_clicked();

    void on_Rechercher_Etat_2_clicked();

    void on_Rechercher_2_clicked();

    void on_Back_rechercher_2_clicked();

    void on_print_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
