#include "Programm.hpp"
#include "./ui_programm.h"

#include <cmath>

void Programm::on_calculate_clicked()
{
    QString massText = ui->bodyMassLineEdit->text();
    QString areaText = ui->aOfGLineEdit->text();

    bool ok;
    qint32 massValue = massText.toInt(&ok, 10);
    qint32 areaValue = areaText.toInt(&ok, 10);
    qint32 resultValue;

    QString resultText = QString::number(resultValue);
}

Programm::Programm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Programm)
{
    ui->setupUi(this);
}

qint64 Programm::calculateByFormula(qint64 m, qint64 g, qint64 r, qint64 V, qint64 k)
{
    return std::sqrt((m * g - r * g * V) / k);
}

Programm::~Programm()
{
    delete ui;
}
