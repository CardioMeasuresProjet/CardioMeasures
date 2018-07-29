#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>

class MainWindow : public QWidget
{
    public:
    MainWindow();

    private:
    QPushButton *m_bouton;
    QLCDNumber *m_lcd;
    QSlider *m_slider;


};

#endif // MAINWINDOW_H
