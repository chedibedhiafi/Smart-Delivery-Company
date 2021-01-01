#include "menu.h"
#include <QMessageBox>
#include <QtDebug>
#include <QApplication>
#include "connecion.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Menu w;
    connecion c;
    try {
        c.ouvrirconnexion();
        w.show();
    } catch (QString s) {
       qDebug()<<s;
    }
    return a.exec();
}
