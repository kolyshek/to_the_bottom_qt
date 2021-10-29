#ifndef PROGRAMM_HPP
#define PROGRAMM_HPP

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Programm; }
QT_END_NAMESPACE

#define GRAVITY 9.81f

class Programm : public QMainWindow
{
    Q_OBJECT

private:
    Ui::Programm *ui;
protected slots:
    void on_calculate_clicked();
public:
    Programm(QWidget *parent = nullptr);

    qint64 calculateByFormula(qint64 m, qint64 g, qint64 r, qint64 V, qint64 k); // v = sqrt((m * g - r * g * V) / k)

    ~Programm();
};
#endif // PROGRAMM_HPP
