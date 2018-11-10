/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "buttons.h"
#include "diodes.h"
#include "j1_j9.h"
#include "mcu.h"
#include "ports.h"
#include "switches.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    Switches *SW1;
    QLabel *label;
    QLabel *debug_1;
    QLabel *debug_2;
    QLabel *debug_3;
    QLabel *debug_4;
    QLabel *debug_5;
    QLabel *debug_7;
    QLabel *debug_6;
    QLabel *debug_8;
    QLabel *debugJ_3;
    QLabel *debugJ_4;
    QLabel *debugJ_5;
    QLabel *debugJ_6;
    QLabel *debugJ_7;
    QLabel *debugJ_2;
    QLabel *debugJ_1;
    QLabel *debugJ_8;
    J1_J9 *j1_j9;
    QLabel *debugJ_9;
    Buttons *buttons;
    Diodes *diodes;
    MCU *mcu;
    Switches *SW2;
    Switches *SW3;
    Switches *SW4;
    PORTS *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1800, 900);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SW1 = new Switches(centralWidget);
        SW1->setObjectName(QStringLiteral("SW1"));
        SW1->setGeometry(QRect(740, 60, 100, 180));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1620, 80, 81, 17));
        debug_1 = new QLabel(centralWidget);
        debug_1->setObjectName(QStringLiteral("debug_1"));
        debug_1->setGeometry(QRect(1620, 110, 67, 17));
        debug_2 = new QLabel(centralWidget);
        debug_2->setObjectName(QStringLiteral("debug_2"));
        debug_2->setGeometry(QRect(1620, 130, 67, 17));
        debug_3 = new QLabel(centralWidget);
        debug_3->setObjectName(QStringLiteral("debug_3"));
        debug_3->setGeometry(QRect(1620, 150, 67, 17));
        debug_4 = new QLabel(centralWidget);
        debug_4->setObjectName(QStringLiteral("debug_4"));
        debug_4->setGeometry(QRect(1620, 170, 67, 17));
        debug_5 = new QLabel(centralWidget);
        debug_5->setObjectName(QStringLiteral("debug_5"));
        debug_5->setGeometry(QRect(1620, 190, 67, 17));
        debug_7 = new QLabel(centralWidget);
        debug_7->setObjectName(QStringLiteral("debug_7"));
        debug_7->setGeometry(QRect(1620, 230, 67, 17));
        debug_6 = new QLabel(centralWidget);
        debug_6->setObjectName(QStringLiteral("debug_6"));
        debug_6->setGeometry(QRect(1620, 210, 67, 17));
        debug_8 = new QLabel(centralWidget);
        debug_8->setObjectName(QStringLiteral("debug_8"));
        debug_8->setGeometry(QRect(1620, 250, 67, 17));
        debugJ_3 = new QLabel(centralWidget);
        debugJ_3->setObjectName(QStringLiteral("debugJ_3"));
        debugJ_3->setGeometry(QRect(1620, 350, 67, 17));
        debugJ_4 = new QLabel(centralWidget);
        debugJ_4->setObjectName(QStringLiteral("debugJ_4"));
        debugJ_4->setGeometry(QRect(1620, 370, 67, 17));
        debugJ_5 = new QLabel(centralWidget);
        debugJ_5->setObjectName(QStringLiteral("debugJ_5"));
        debugJ_5->setGeometry(QRect(1620, 390, 67, 17));
        debugJ_6 = new QLabel(centralWidget);
        debugJ_6->setObjectName(QStringLiteral("debugJ_6"));
        debugJ_6->setGeometry(QRect(1620, 410, 67, 17));
        debugJ_7 = new QLabel(centralWidget);
        debugJ_7->setObjectName(QStringLiteral("debugJ_7"));
        debugJ_7->setGeometry(QRect(1620, 430, 67, 17));
        debugJ_2 = new QLabel(centralWidget);
        debugJ_2->setObjectName(QStringLiteral("debugJ_2"));
        debugJ_2->setGeometry(QRect(1620, 330, 67, 17));
        debugJ_1 = new QLabel(centralWidget);
        debugJ_1->setObjectName(QStringLiteral("debugJ_1"));
        debugJ_1->setGeometry(QRect(1620, 310, 67, 17));
        debugJ_8 = new QLabel(centralWidget);
        debugJ_8->setObjectName(QStringLiteral("debugJ_8"));
        debugJ_8->setGeometry(QRect(1620, 450, 67, 17));
        j1_j9 = new J1_J9(centralWidget);
        j1_j9->setObjectName(QStringLiteral("j1_j9"));
        j1_j9->setGeometry(QRect(1310, 20, 70, 800));
        debugJ_9 = new QLabel(centralWidget);
        debugJ_9->setObjectName(QStringLiteral("debugJ_9"));
        debugJ_9->setGeometry(QRect(1620, 470, 67, 17));
        buttons = new Buttons(centralWidget);
        buttons->setObjectName(QStringLiteral("buttons"));
        buttons->setGeometry(QRect(100, 410, 450, 320));
        diodes = new Diodes(centralWidget);
        diodes->setObjectName(QStringLiteral("diodes"));
        diodes->setGeometry(QRect(200, 60, 350, 320));
        mcu = new MCU(centralWidget);
        mcu->setObjectName(QStringLiteral("mcu"));
        mcu->setGeometry(QRect(1080, 0, 150, 800));
        SW2 = new Switches(centralWidget);
        SW2->setObjectName(QStringLiteral("SW2"));
        SW2->setGeometry(QRect(870, 60, 100, 180));
        SW3 = new Switches(centralWidget);
        SW3->setObjectName(QStringLiteral("SW3"));
        SW3->setGeometry(QRect(740, 260, 100, 180));
        SW4 = new Switches(centralWidget);
        SW4->setObjectName(QStringLiteral("SW4"));
        SW4->setGeometry(QRect(870, 260, 100, 180));
        widget = new PORTS(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(1420, 20, 60, 800));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1800, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "debug area", 0));
        debug_1->setText(QApplication::translate("MainWindow", "0", 0));
        debug_2->setText(QApplication::translate("MainWindow", "0", 0));
        debug_3->setText(QApplication::translate("MainWindow", "0", 0));
        debug_4->setText(QApplication::translate("MainWindow", "0", 0));
        debug_5->setText(QApplication::translate("MainWindow", "0", 0));
        debug_7->setText(QApplication::translate("MainWindow", "0", 0));
        debug_6->setText(QApplication::translate("MainWindow", "0", 0));
        debug_8->setText(QApplication::translate("MainWindow", "0", 0));
        debugJ_3->setText(QApplication::translate("MainWindow", "0", 0));
        debugJ_4->setText(QApplication::translate("MainWindow", "0", 0));
        debugJ_5->setText(QApplication::translate("MainWindow", "0", 0));
        debugJ_6->setText(QApplication::translate("MainWindow", "0", 0));
        debugJ_7->setText(QApplication::translate("MainWindow", "0", 0));
        debugJ_2->setText(QApplication::translate("MainWindow", "0", 0));
        debugJ_1->setText(QApplication::translate("MainWindow", "0", 0));
        debugJ_8->setText(QApplication::translate("MainWindow", "0", 0));
        debugJ_9->setText(QApplication::translate("MainWindow", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
