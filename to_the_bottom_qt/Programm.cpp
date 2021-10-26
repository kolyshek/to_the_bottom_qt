#include "Programm.hpp"
#include "./ui_programm.h"

Programm::Programm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Programm)
{
    ui->setupUi(this);
}

Programm::~Programm()
{
    delete ui;
}

void Programm::on_calculate_clicked()
{
}
