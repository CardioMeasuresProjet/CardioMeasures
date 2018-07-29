#include "mainwindow.h"

MainWindow::MainWindow()
{
    setFixedSize(900, 450);

     // Construction du bouton
     m_bouton = new QPushButton("Test", this);

     m_bouton->setText("Quitter");
     m_bouton->setFont(QFont("Arial",20, 99, true));
     m_bouton->setToolTip("Texte d'aide");
     m_bouton->setCursor(Qt::PointingHandCursor);
     m_bouton->setIcon(QIcon(":/icons/HeartIcon1.png"));
     m_bouton->setGeometry(200,150,180,70);

     //Connexion du bouton
     QObject::connect(m_bouton, SIGNAL(clicked()), qApp, SLOT(quit()));

     m_lcd = new QLCDNumber(this);
     m_lcd->setSegmentStyle(QLCDNumber::Flat);
     m_lcd->move(50, 20);

     m_slider = new QSlider(Qt::Horizontal, this);
     m_slider->setGeometry(10, 60, 150, 20);

     QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_lcd, SLOT(display(int))) ;
}
