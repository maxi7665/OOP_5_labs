#include "mainwindow.h"
#include "hellowindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if (true)
    {
        MainWindow w;
        w.show();
        return a.exec();
    }
    else
    {
        HelloWindow w;
        w.show();
        return a.exec();
    }
}
