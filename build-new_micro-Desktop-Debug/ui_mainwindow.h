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
#include "j1_j9.h"
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
        SW1->setGeometry(QRect(840, 80, 100, 180));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1110, 70, 81, 17));
        debug_1 = new QLabel(centralWidget);
        debug_1->setObjectName(QStringLiteral("debug_1"));
        debug_1->setGeometry(QRect(1110, 100, 67, 17));
        debug_2 = new QLabel(centralWidget);
        debug_2->setObjectName(QStringLiteral("debug_2"));
        debug_2->setGeometry(QRect(1110, 120, 67, 17));
        debug_3 = new QLabel(centralWidget);
        debug_3->setObjectName(QStringLiteral("debug_3"));
        debug_3->setGeometry(QRect(1110, 140, 67, 17));
        debug_4 = new QLabel(centralWidget);
        debug_4->setObjectName(QStringLiteral("debug_4"));
        debug_4->setGeometry(QRect(1110, 160, 67, 17));
        debug_5 = new QLabel(centralWidget);
        debug_5->setObjectName(QStringLiteral("debug_5"));
        debug_5->setGeometry(QRect(1110, 180, 67, 17));
        debug_7 = new QLabel(centralWidget);
        debug_7->setObjectName(QStringLiteral("debug_7"));
        debug_7->setGeometry(QRect(1110, 220, 67, 17));
        debug_6 = new QLabel(centralWidget);
        debug_6->setObjectName(QStringLiteral("debug_6"));
        debug_6->setGeometry(QRect(1110, 200, 67, 17));
        debug_8 = new QLabel(centralWidget);
        debug_8->setObjectName(QStringLiteral("debug_8"));
        debug_8->setGeometry(QRect(1110, 240, 67, 17));
        debugJ_3 = new QLabel(centralWidget);
        debugJ_3->setObjectName(QStringLiteral("debugJ_3"));
        debugJ_3->setGeometry(QRect(1110, 340, 67, 17));
        debugJ_4 = new QLabel(centralWidget);
        debugJ_4->setObjectName(QStringLiteral("debugJ_4"));
        debugJ_4->setGeometry(QRect(1110, 360, 67, 17));
        debugJ_5 = new QLabel(centralWidget);
        debugJ_5->setObjectName(QStringLiteral("debugJ_5"));
        debugJ_5->setGeometry(QRect(1110, 380, 67, 17));
        debugJ_6 = new QLabel(centralWidget);
        debugJ_6->setObjectName(QStringLiteral("debugJ_6"));
        debugJ_6->setGeometry(QRect(1110, 400, 67, 17));
        debugJ_7 = new QLabel(centralWidget);
        debugJ_7->setObjectName(QStringLiteral("debugJ_7"));
        debugJ_7->setGeometry(QRect(1110, 420, 67, 17));
        debugJ_2 = new QLabel(centralWidget);
        debugJ_2->setObjectName(QStringLiteral("debugJ_2"));
        debugJ_2->setGeometry(QRect(1110, 320, 67, 17));
        debugJ_1 = new QLabel(centralWidget);
        debugJ_1->setObjectName(QStringLiteral("debugJ_1"));
        debugJ_1->setGeometry(QRect(1110, 300, 67, 17));
        debugJ_8 = new QLabel(centralWidget);
        debugJ_8->setObjectName(QStringLiteral("debugJ_8"));
        debugJ_8->setGeometry(QRect(1110, 440, 67, 17));
        j1_j9 = new J1_J9(centralWidget);
        j1_j9->setObjectName(QStringLiteral("j1_j9"));
        j1_j9->setGeometry(QRect(460, 50, 70, 625));
        debugJ_9 = new QLabel(centralWidget);
        debugJ_9->setObjectName(QStringLiteral("debugJ_9"));
        debugJ_9->setGeometry(QRect(1110, 460, 67, 17));
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
