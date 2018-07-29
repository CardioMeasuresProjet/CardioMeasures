#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QFont>
#include <QIcon>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication Qapp(argc, argv);

    //Création de la fenêtre principale
    MainWindow fenetre;
    fenetre.show();

    //Return
    return Qapp.exec();
}
