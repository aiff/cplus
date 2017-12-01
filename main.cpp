#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{  //init
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
