#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "shapes.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Shapes ww;
public:

    MainWindow(QWidget *parent = nullptr); //Конструктор с параметром в виде указателя на родителський виджет
    MainWindow(): ww{};
    ~MainWindow();
    void test ();

};
#endif // MAINWINDOW_H
