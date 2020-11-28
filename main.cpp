#include "mainwindow.h"
#include<QApplication>
#include<QMessageBox>
#include"connection.h"
#include <QApplication>//gère les différentes ressou au nv de l'app :fonct-cursor
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    bool test=c.createConnection(); //etablir la connexion
    MainWindow w;
    if(test)  //si la connexion est établie
    {
         w.show();
       QMessageBox::information(nullptr,QObject::tr("data base is open"),QObject::tr("connection successful.\n""click cancel to exit."),QMessageBox::Cancel);

    }
    else //si la connexion a échoué
        QMessageBox::critical(nullptr,QObject::tr("data base is not open"),QObject::tr("connection failed.\n" "click cancel to exit."),QMessageBox::Cancel);
    return a.exec();
}
