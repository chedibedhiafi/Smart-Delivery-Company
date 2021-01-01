/*#include "mainwindow.h"
#include "mainwindow.h"
#include "connexion.h"
#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QtWidgets>
#include <QWidget>
#include <QtDebug>
#include <QDialog>
#include <QMediaPlaylist>
#include <QMediaPlayer>

*/

#include "mainwindow.h"
#include "liv.h"
#include"login.h"
#include<QApplication>
#include<QMessageBox>
#include"connexion.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    login w;
    Connection c;
    bool test=c.createConnection();
    if(test)
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}
