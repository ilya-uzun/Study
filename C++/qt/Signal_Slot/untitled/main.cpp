#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    w.show();
    return a.exec();
}

// https://evileg.com/ru/post/87/
// https://evileg.com/ru/post/339/
