/********************************************************************************
** Form generated from reading UI file 'radiobuttons.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOBUTTONS_H
#define UI_RADIOBUTTONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RadioButtons
{
public:
    QLabel *label_title;
    QLabel *label_143;
    QLabel *label_297;
    QRadioButton *J_VCC;
    QRadioButton *J_GND;

    void setupUi(QWidget *RadioButtons)
    {
        if (RadioButtons->objectName().isEmpty())
            RadioButtons->setObjectName(QStringLiteral("RadioButtons"));
        RadioButtons->resize(70, 65);
        label_title = new QLabel(RadioButtons);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(30, 0, 41, 17));
        label_title->setAlignment(Qt::AlignCenter);
        label_143 = new QLabel(RadioButtons);
        label_143->setObjectName(QStringLiteral("label_143"));
        label_143->setGeometry(QRect(0, 20, 31, 17));
        label_297 = new QLabel(RadioButtons);
        label_297->setObjectName(QStringLiteral("label_297"));
        label_297->setGeometry(QRect(0, 40, 31, 17));
        J_VCC = new QRadioButton(RadioButtons);
        J_VCC->setObjectName(QStringLiteral("J_VCC"));
        J_VCC->setGeometry(QRect(40, 20, 21, 22));
        J_VCC->setCursor(QCursor(Qt::PointingHandCursor));
        J_VCC->setFocusPolicy(Qt::NoFocus);
        J_GND = new QRadioButton(RadioButtons);
        J_GND->setObjectName(QStringLiteral("J_GND"));
        J_GND->setGeometry(QRect(40, 40, 21, 22));
        J_GND->setCursor(QCursor(Qt::PointingHandCursor));
        J_GND->setFocusPolicy(Qt::NoFocus);

        retranslateUi(RadioButtons);

        QMetaObject::connectSlotsByName(RadioButtons);
    } // setupUi

    void retranslateUi(QWidget *RadioButtons)
    {
        RadioButtons->setWindowTitle(QApplication::translate("RadioButtons", "Form", 0));
        label_title->setText(QApplication::translate("RadioButtons", "title", 0));
        label_143->setText(QApplication::translate("RadioButtons", "VCC", 0));
        label_297->setText(QApplication::translate("RadioButtons", "GND", 0));
        J_VCC->setText(QString());
        J_GND->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RadioButtons: public Ui_RadioButtons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOBUTTONS_H
