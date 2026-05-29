#include "mainwindow.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setWindowIcon(QIcon(":/images/resource/hamburger.png"));

    MainWindow w;
    w.show();
    return QCoreApplication::exec();
}
