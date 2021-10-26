#ifndef PROGRAMM_HPP
#define PROGRAMM_HPP

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Programm; }
QT_END_NAMESPACE

class Programm : public QMainWindow
{
    Q_OBJECT

public:
    Programm(QWidget *parent = nullptr);
    ~Programm();

private slots:
    void on_calculate_clicked();

private:
    Ui::Programm *ui;
};
#endif // PROGRAMM_HPP
