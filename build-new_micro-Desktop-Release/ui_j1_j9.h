/********************************************************************************
** Form generated from reading UI file 'j1_j9.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_J1_J9_H
#define UI_J1_J9_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "radiobuttons.h"

QT_BEGIN_NAMESPACE

class Ui_J1_J9
{
public:
    RadioButtons *J1;
    RadioButtons *J2;
    RadioButtons *J3;
    RadioButtons *J4;
    RadioButtons *J5;
    RadioButtons *J6;
    RadioButtons *J7;
    RadioButtons *J8;
    RadioButtons *J9;

    void setupUi(QWidget *J1_J9)
    {
        if (J1_J9->objectName().isEmpty())
            J1_J9->setObjectName(QStringLiteral("J1_J9"));
        J1_J9->resize(70, 625);
        J1 = new RadioButtons(J1_J9);
        J1->setObjectName(QStringLiteral("J1"));
        J1->setGeometry(QRect(0, 0, 70, 65));
        J2 = new RadioButtons(J1_J9);
        J2->setObjectName(QStringLiteral("J2"));
        J2->setGeometry(QRect(0, 70, 70, 65));
        J3 = new RadioButtons(J1_J9);
        J3->setObjectName(QStringLiteral("J3"));
        J3->setGeometry(QRect(0, 140, 70, 65));
        J4 = new RadioButtons(J1_J9);
        J4->setObjectName(QStringLiteral("J4"));
        J4->setGeometry(QRect(0, 210, 70, 65));
        J5 = new RadioButtons(J1_J9);
        J5->setObjectName(QStringLiteral("J5"));
        J5->setGeometry(QRect(0, 280, 70, 65));
        J6 = new RadioButtons(J1_J9);
        J6->setObjectName(QStringLiteral("J6"));
        J6->setGeometry(QRect(0, 350, 70, 65));
        J7 = new RadioButtons(J1_J9);
        J7->setObjectName(QStringLiteral("J7"));
        J7->setGeometry(QRect(0, 420, 70, 65));
        J8 = new RadioButtons(J1_J9);
        J8->setObjectName(QStringLiteral("J8"));
        J8->setGeometry(QRect(0, 490, 70, 65));
        J9 = new RadioButtons(J1_J9);
        J9->setObjectName(QStringLiteral("J9"));
        J9->setGeometry(QRect(0, 560, 70, 65));

        retranslateUi(J1_J9);

        QMetaObject::connectSlotsByName(J1_J9);
    } // setupUi

    void retranslateUi(QWidget *J1_J9)
    {
        J1_J9->setWindowTitle(QApplication::translate("J1_J9", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class J1_J9: public Ui_J1_J9 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_J1_J9_H
