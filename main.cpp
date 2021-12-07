#include "kin_ui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KIN_ui w;
    w.show();

    return a.exec();
}
