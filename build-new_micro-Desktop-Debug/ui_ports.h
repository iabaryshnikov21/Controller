/********************************************************************************
** Form generated from reading UI file 'ports.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTS_H
#define UI_PORTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "port.h"

QT_BEGIN_NAMESPACE

class Ui_PORTS
{
public:
    PORT *widget;
    PORT *widget_2;
    PORT *widget_3;
    PORT *widget_4;
    PORT *widget_5;
    PORT *widget_6;
    PORT *widget_7;
    PORT *widget_8;
    PORT *widget_9;

    void setupUi(QWidget *PORTS)
    {
        if (PORTS->objectName().isEmpty())
            PORTS->setObjectName(QStringLiteral("PORTS"));
        PORTS->resize(60, 800);
        widget = new PORT(PORTS);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 60, 80));
        widget_2 = new PORT(PORTS);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 90, 60, 80));
        widget_3 = new PORT(PORTS);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 180, 60, 80));
        widget_4 = new PORT(PORTS);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(0, 270, 60, 80));
        widget_5 = new PORT(PORTS);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(0, 360, 60, 80));
        widget_6 = new PORT(PORTS);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(0, 450, 60, 80));
        widget_7 = new PORT(PORTS);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(0, 540, 60, 80));
        widget_8 = new PORT(PORTS);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setGeometry(QRect(0, 630, 60, 80));
        widget_9 = new PORT(PORTS);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setGeometry(QRect(0, 720, 60, 80));

        retranslateUi(PORTS);

        QMetaObject::connectSlotsByName(PORTS);
    } // setupUi

    void retranslateUi(QWidget *PORTS)
    {
        PORTS->setWindowTitle(QApplication::translate("PORTS", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class PORTS: public Ui_PORTS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTS_H
