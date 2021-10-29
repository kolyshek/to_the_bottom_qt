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
    QVBoxLayout *verticalLayout;
    QHBoxLayout *generalHorizontalLayout;
    QVBoxLayout *IAndCVerticalLayout;
    QLabel *bodyMassLabel;
    QLabel *aOfGLabel;
    QLabel *enviromentDensityLabel;
    QLabel *bodyVolumeLabel;
    QLabel *ERCLabel;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *calculate;
    QSpacerItem *calculateHorizontalSpacer_;
    QLabel *resultLabel;
    QVBoxLayout *IOVerticalLayout;
    QLineEdit *bodyMassLineEdit;
    QLineEdit *aOfGLineEdit;
    QLineEdit *enviromentDensityLineEdit;
    QLineEdit *bodyVolumeLineEdit;
    QLineEdit *ERCLineEdit;
    QSpacerItem *horizontalSpacer;
    QLineEdit *resultLineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Programm)
    {
        if (Programm->objectName().isEmpty())
            Programm->setObjectName(QString::fromUtf8("Programm"));
        Programm->resize(700, 253);
        Programm->setMinimumSize(QSize(700, 253));
        Programm->setMaximumSize(QSize(700, 253));
        centralWidget = new QWidget(Programm);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        generalHorizontalLayout = new QHBoxLayout();
        generalHorizontalLayout->setObjectName(QString::fromUtf8("generalHorizontalLayout"));
        IAndCVerticalLayout = new QVBoxLayout();
        IAndCVerticalLayout->setObjectName(QString::fromUtf8("IAndCVerticalLayout"));
        bodyMassLabel = new QLabel(centralWidget);
        bodyMassLabel->setObjectName(QString::fromUtf8("bodyMassLabel"));

        IAndCVerticalLayout->addWidget(bodyMassLabel);

        aOfGLabel = new QLabel(centralWidget);
        aOfGLabel->setObjectName(QString::fromUtf8("aOfGLabel"));

        IAndCVerticalLayout->addWidget(aOfGLabel);

        enviromentDensityLabel = new QLabel(centralWidget);
        enviromentDensityLabel->setObjectName(QString::fromUtf8("enviromentDensityLabel"));

        IAndCVerticalLayout->addWidget(enviromentDensityLabel);

        bodyVolumeLabel = new QLabel(centralWidget);
        bodyVolumeLabel->setObjectName(QString::fromUtf8("bodyVolumeLabel"));

        IAndCVerticalLayout->addWidget(bodyVolumeLabel);

        ERCLabel = new QLabel(centralWidget);
        ERCLabel->setObjectName(QString::fromUtf8("ERCLabel"));

        IAndCVerticalLayout->addWidget(ERCLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        calculate = new QPushButton(centralWidget);
        calculate->setObjectName(QString::fromUtf8("calculate"));

        horizontalLayout_2->addWidget(calculate);

        calculateHorizontalSpacer_ = new QSpacerItem(40, 21, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(calculateHorizontalSpacer_);


        IAndCVerticalLayout->addLayout(horizontalLayout_2);

        resultLabel = new QLabel(centralWidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));

        IAndCVerticalLayout->addWidget(resultLabel);


        generalHorizontalLayout->addLayout(IAndCVerticalLayout);

        IOVerticalLayout = new QVBoxLayout();
        IOVerticalLayout->setObjectName(QString::fromUtf8("IOVerticalLayout"));
        bodyMassLineEdit = new QLineEdit(centralWidget);
        bodyMassLineEdit->setObjectName(QString::fromUtf8("bodyMassLineEdit"));
        bodyMassLineEdit->setMaxLength(8192);

        IOVerticalLayout->addWidget(bodyMassLineEdit);

        aOfGLineEdit = new QLineEdit(centralWidget);
        aOfGLineEdit->setObjectName(QString::fromUtf8("aOfGLineEdit"));
        aOfGLineEdit->setMaxLength(8192);

        IOVerticalLayout->addWidget(aOfGLineEdit);

        enviromentDensityLineEdit = new QLineEdit(centralWidget);
        enviromentDensityLineEdit->setObjectName(QString::fromUtf8("enviromentDensityLineEdit"));

        IOVerticalLayout->addWidget(enviromentDensityLineEdit);

        bodyVolumeLineEdit = new QLineEdit(centralWidget);
        bodyVolumeLineEdit->setObjectName(QString::fromUtf8("bodyVolumeLineEdit"));

        IOVerticalLayout->addWidget(bodyVolumeLineEdit);

        ERCLineEdit = new QLineEdit(centralWidget);
        ERCLineEdit->setObjectName(QString::fromUtf8("ERCLineEdit"));

        IOVerticalLayout->addWidget(ERCLineEdit);

        horizontalSpacer = new QSpacerItem(40, 21, QSizePolicy::Fixed, QSizePolicy::Minimum);

        IOVerticalLayout->addItem(horizontalSpacer);

        resultLineEdit = new QLineEdit(centralWidget);
        resultLineEdit->setObjectName(QString::fromUtf8("resultLineEdit"));

        IOVerticalLayout->addWidget(resultLineEdit);


        generalHorizontalLayout->addLayout(IOVerticalLayout);


        verticalLayout->addLayout(generalHorizontalLayout);

        Programm->setCentralWidget(centralWidget);
        menubar = new QMenuBar(Programm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 20));
        Programm->setMenuBar(menubar);
        statusbar = new QStatusBar(Programm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Programm->setStatusBar(statusbar);

        retranslateUi(Programm);

        QMetaObject::connectSlotsByName(Programm);
    } // setupUi

    void retranslateUi(QMainWindow *Programm)
    {
        Programm->setWindowTitle(QCoreApplication::translate("Programm", "ToTheBottom", nullptr));
        bodyMassLabel->setText(QCoreApplication::translate("Programm", "m (body mass (kg)):", nullptr));
        aOfGLabel->setText(QCoreApplication::translate("Programm", "g (acceleration of gravity (m/s2)):", nullptr));
        enviromentDensityLabel->setText(QCoreApplication::translate("Programm", "r (environment density (kg/m3)):", nullptr));
        bodyVolumeLabel->setText(QCoreApplication::translate("Programm", "V (body volume (m3)):", nullptr));
        ERCLabel->setText(QCoreApplication::translate("Programm", "k (environment resistance coefficient (kg/m)):", nullptr));
        calculate->setText(QCoreApplication::translate("Programm", "Calculate", nullptr));
        resultLabel->setText(QCoreApplication::translate("Programm", "Result (speed (m/s)):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Programm: public Ui_Programm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMM_H
