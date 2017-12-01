/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QPushButton *batteryButton;
    QPushButton *twoButton;
    QPushButton *vUpButton;
    QPushButton *vDownButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(372, 361);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        upButton = new QPushButton(centralWidget);
        upButton->setObjectName(QStringLiteral("upButton"));
        upButton->setGeometry(QRect(160, 70, 51, 23));
        downButton = new QPushButton(centralWidget);
        downButton->setObjectName(QStringLiteral("downButton"));
        downButton->setGeometry(QRect(160, 150, 51, 23));
        leftButton = new QPushButton(centralWidget);
        leftButton->setObjectName(QStringLiteral("leftButton"));
        leftButton->setGeometry(QRect(110, 110, 51, 23));
        rightButton = new QPushButton(centralWidget);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        rightButton->setGeometry(QRect(210, 110, 51, 23));
        batteryButton = new QPushButton(centralWidget);
        batteryButton->setObjectName(QStringLiteral("batteryButton"));
        batteryButton->setGeometry(QRect(150, 220, 71, 23));
        twoButton = new QPushButton(centralWidget);
        twoButton->setObjectName(QStringLiteral("twoButton"));
        twoButton->setGeometry(QRect(150, 260, 71, 23));
        vUpButton = new QPushButton(centralWidget);
        vUpButton->setObjectName(QStringLiteral("vUpButton"));
        vUpButton->setGeometry(QRect(300, 80, 31, 23));
        vDownButton = new QPushButton(centralWidget);
        vDownButton->setObjectName(QStringLiteral("vDownButton"));
        vDownButton->setGeometry(QRect(300, 140, 31, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 372, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        upButton->setText(QApplication::translate("MainWindow", " \320\222\320\262\320\265\321\200\321\205", Q_NULLPTR));
        downButton->setText(QApplication::translate("MainWindow", " \320\222\320\275\320\270\320\267", Q_NULLPTR));
        leftButton->setText(QApplication::translate("MainWindow", " \320\222\320\273\320\265\320\262\320\276", Q_NULLPTR));
        rightButton->setText(QApplication::translate("MainWindow", " \320\222\320\277\321\200\320\260\320\262\320\276", Q_NULLPTR));
        batteryButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\200\321\217\320\264", Q_NULLPTR));
        twoButton->setText(QApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260 2", Q_NULLPTR));
        vUpButton->setText(QApplication::translate("MainWindow", "V+", Q_NULLPTR));
        vDownButton->setText(QApplication::translate("MainWindow", "V-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
