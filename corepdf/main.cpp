#include <QApplication>
#include "corepdf.h"
#include <QTimer>

int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    corepdf w;
    w.show();

    return a.exec();

}
