#include "menu.h"
#include "ui_menu.h"
#include "gestion_produit.h"
#include "gestion_categorie.h"
#include <QMediaPlayer>
#include <QValidator>


Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}


void Menu::on_pushButton_clicked()
{
    QMediaPlayer *click;
        click= new QMediaPlayer();
        click->setMedia(QUrl::fromLocalFile("C:/Users/zizo_/Desktop/Med_aziz/Med_aziz/Mouse_Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    gestion_produit p;
    p.exec();
}
void Menu::on_pushButton_2_clicked()
{
    QMediaPlayer *click;
        click= new QMediaPlayer();
        click->setMedia(QUrl::fromLocalFile("C:/Users/zizo_/Desktop/Med_aziz/Med_aziz/Mouse_Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    gestion_categorie c;
    c.exec();

}

void Menu::on_pushButton_3_clicked()
{
    QMediaPlayer *click;
        click= new QMediaPlayer();
        click->setMedia(QUrl::fromLocalFile("C:/Users/zizo_/Desktop/Med_aziz/Med_aziz/Mouse_Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();

}
