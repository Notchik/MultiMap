#include "defaultwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DefaultWindow w;

    w.show();
    return a.exec();
}
