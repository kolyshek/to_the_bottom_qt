#include "Programm.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication qApplication(argc, argv);
    Programm programm;

    programm.show();

    return qApplication.exec();
}
