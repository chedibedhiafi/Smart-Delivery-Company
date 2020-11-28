#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMediaPlayer>
#include<QDebug>
#include<QPropertyAnimation>
#include"fournisseurs.h"
#include"livraisons.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_goToFour_clicked();

    void on_goToLiv_clicked();





    void on_ajouterLiv_clicked();
    void on_ajouterFour_clicked();


    void on_chercherFour_clicked();

    void on_chercherLiv_clicked();



    void on_supprimerLiv_clicked();

    void on_supprimerFour_clicked();





    void on_pushButton_modifier_clicked();

    void on_pushButton_modifierFour_clicked();



    void on_radioButton_A_clicked();

    void on_radioButton_D_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer* player;
    QPropertyAnimation *animation;
    Livraisons tmpLiv;
    Fournisseurs tmpFour;
};
#endif // MAINWINDOW_H
