/********************************************************************************
** Form generated from reading UI file 'programm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMM_H
#define UI_PROGRAMM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Programm
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *massLabel;
    QLineEdit *massLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *areaLabel;
    QLineEdit *areaLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *calculate;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *resultLabel;
    QLineEdit *resultLineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Programm)
    {
        if (Programm->objectName().isEmpty())
            Programm->setObjectName(QString::fromUtf8("Programm"));
        Programm->resize(300, 175);
        centralWidget = new QWidget(Programm);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        massLabel = new QLabel(centralWidget);
        massLabel->setObjectName(QString::fromUtf8("massLabel"));

        horizontalLayout->addWidget(massLabel);

        massLineEdit = new QLineEdit(centralWidget);
        massLineEdit->setObjectName(QString::fromUtf8("massLineEdit"));
        massLineEdit->setMaxLength(8192);

        horizontalLayout->addWidget(massLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        areaLabel = new QLabel(centralWidget);
        areaLabel->setObjectName(QString::fromUtf8("areaLabel"));

        horizontalLayout_2->addWidget(areaLabel);

        areaLineEdit = new QLineEdit(centralWidget);
        areaLineEdit->setObjectName(QString::fromUtf8("areaLineEdit"));
        areaLineEdit->setMaxLength(8192);

        horizontalLayout_2->addWidget(areaLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        calculate = new QPushButton(centralWidget);
        calculate->setObjectName(QString::fromUtf8("calculate"));

        horizontalLayout_3->addWidget(calculate);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        resultLabel = new QLabel(centralWidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));

        horizontalLayout_4->addWidget(resultLabel);

        resultLineEdit = new QLineEdit(centralWidget);
        resultLineEdit->setObjectName(QString::fromUtf8("resultLineEdit"));

        horizontalLayout_4->addWidget(resultLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        Programm->setCentralWidget(centralWidget);
        menubar = new QMenuBar(Programm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 300, 20));
        Programm->setMenuBar(menubar);
        statusbar = new QStatusBar(Programm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Programm->setStatusBar(statusbar);

        retranslateUi(Programm);

        QMetaObject::connectSlotsByName(Programm);
    } // setupUi

    void retranslateUi(QMainWindow *Programm)
    {
        Programm->setWindowTitle(QCoreApplication::translate("Programm", "Programm", nullptr));
        massLabel->setText(QCoreApplication::translate("Programm", "Enter mass:", nullptr));
        areaLabel->setText(QCoreApplication::translate("Programm", "Enter area:", nullptr));
        calculate->setText(QCoreApplication::translate("Programm", "Calculate", nullptr));
        resultLabel->setText(QCoreApplication::translate("Programm", "Result:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Programm: public Ui_Programm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMM_H
