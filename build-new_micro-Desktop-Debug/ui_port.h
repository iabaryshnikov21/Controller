/********************************************************************************
** Form generated from reading UI file 'port.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORT_H
#define UI_PORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PORT
{
public:
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *PORT)
    {
        if (PORT->objectName().isEmpty())
            PORT->setObjectName(QStringLiteral("PORT"));
        PORT->resize(60, 80);
        line = new QFrame(PORT);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 0, 60, 5));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(PORT);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(30, 0, 3, 81));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(PORT);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 20, 60, 5));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label = new QLabel(PORT);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 31, 17));
        line_4 = new QFrame(PORT);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(0, 40, 60, 5));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(PORT);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(0, 60, 60, 5));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(PORT);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(0, 80, 60, 5));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(PORT);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 20, 31, 17));
        label_3 = new QLabel(PORT);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 40, 31, 17));
        label_4 = new QLabel(PORT);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 60, 31, 17));
        label_5 = new QLabel(PORT);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 0, 31, 17));
        label_6 = new QLabel(PORT);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 20, 31, 17));
        label_7 = new QLabel(PORT);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 40, 31, 17));
        label_8 = new QLabel(PORT);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 60, 31, 17));

        retranslateUi(PORT);

        QMetaObject::connectSlotsByName(PORT);
    } // setupUi

    void retranslateUi(QWidget *PORT)
    {
        PORT->setWindowTitle(QApplication::translate("PORT", "Form", 0));
        label->setText(QApplication::translate("PORT", "RA0", 0));
        label_2->setText(QApplication::translate("PORT", "RA0", 0));
        label_3->setText(QApplication::translate("PORT", "RA0", 0));
        label_4->setText(QApplication::translate("PORT", "RA0", 0));
        label_5->setText(QApplication::translate("PORT", "RA0", 0));
        label_6->setText(QApplication::translate("PORT", "RA0", 0));
        label_7->setText(QApplication::translate("PORT", "RA0", 0));
        label_8->setText(QApplication::translate("PORT", "RA0", 0));
    } // retranslateUi

};

namespace Ui {
    class PORT: public Ui_PORT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORT_H
