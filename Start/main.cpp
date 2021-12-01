#include "imageload.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImageLoad w;
    w.show();

    return a.exec();
}
