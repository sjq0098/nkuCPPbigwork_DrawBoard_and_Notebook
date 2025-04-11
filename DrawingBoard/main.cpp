#include"form_start.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    form_start w;
    w.show();
     return a.exec();
}
