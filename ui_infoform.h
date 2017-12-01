/********************************************************************************
** Form generated from reading UI file 'infoform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOFORM_H
#define UI_INFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoForm
{
public:
    QLabel *label;
    QLabel *label_pressed_button;
    QLabel *label_3;
    QLabel *label_coord;
    QLabel *label_2;
    QLabel *label_coord_x;
    QLabel *label_5;
    QLabel *label_battery;
    QLabel *label_7;
    QLabel *label_value;
    QLabel *label_9;
    QLabel *label_power;

    void setupUi(QWidget *InfoForm)
    {
        if (InfoForm->objectName().isEmpty())
            InfoForm->setObjectName(QStringLiteral("InfoForm"));
        InfoForm->resize(400, 300);
        label = new QLabel(InfoForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 101, 16));
        label_pressed_button = new QLabel(InfoForm);
        label_pressed_button->setObjectName(QStringLiteral("label_pressed_button"));
        label_pressed_button->setGeometry(QRect(160, 40, 101, 16));
        label_3 = new QLabel(InfoForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 80, 121, 16));
        label_coord = new QLabel(InfoForm);
        label_coord->setObjectName(QStringLiteral("label_coord"));
        label_coord->setGeometry(QRect(160, 80, 47, 13));
        label_2 = new QLabel(InfoForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 120, 141, 16));
        label_coord_x = new QLabel(InfoForm);
        label_coord_x->setObjectName(QStringLiteral("label_coord_x"));
        label_coord_x->setGeometry(QRect(160, 120, 47, 13));
        label_5 = new QLabel(InfoForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 160, 121, 16));
        label_battery = new QLabel(InfoForm);
        label_battery->setObjectName(QStringLiteral("label_battery"));
        label_battery->setGeometry(QRect(160, 160, 47, 13));
        label_7 = new QLabel(InfoForm);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 200, 81, 16));
        label_value = new QLabel(InfoForm);
        label_value->setObjectName(QStringLiteral("label_value"));
        label_value->setGeometry(QRect(160, 200, 47, 13));
        label_9 = new QLabel(InfoForm);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 240, 81, 16));
        label_power = new QLabel(InfoForm);
        label_power->setObjectName(QStringLiteral("label_power"));
        label_power->setGeometry(QRect(160, 240, 47, 13));

        retranslateUi(InfoForm);

        QMetaObject::connectSlotsByName(InfoForm);
    } // setupUi

    void retranslateUi(QWidget *InfoForm)
    {
        InfoForm->setWindowTitle(QApplication::translate("InfoForm", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("InfoForm", "\320\235\320\260\320\266\320\260\321\202\320\260 \320\272\320\273\320\260\320\262\320\270\321\210\320\260", Q_NULLPTR));
        label_pressed_button->setText(QApplication::translate("InfoForm", "\320\235\320\270\320\272\320\260\320\272\320\260\321\217 \320\277\320\276\320\272\320\260)", Q_NULLPTR));
        label_3->setText(QApplication::translate("InfoForm", "\320\242\320\265\320\272\321\203\321\211\320\260\321\217 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 y", Q_NULLPTR));
        label_coord->setText(QApplication::translate("InfoForm", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("InfoForm", "\320\242\320\265\320\272\321\203\321\211\320\260\321\217 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 x", Q_NULLPTR));
        label_coord_x->setText(QApplication::translate("InfoForm", "0", Q_NULLPTR));
        label_5->setText(QApplication::translate("InfoForm", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \320\267\320\260\321\200\321\217\320\264", Q_NULLPTR));
        label_battery->setText(QApplication::translate("InfoForm", "100", Q_NULLPTR));
        label_7->setText(QApplication::translate("InfoForm", "\320\223\321\200\320\276\320\274\320\272\320\276\321\201\321\202\321\214", Q_NULLPTR));
        label_value->setText(QApplication::translate("InfoForm", "50", Q_NULLPTR));
        label_9->setText(QApplication::translate("InfoForm", "\320\240\320\265\320\266\320\270\320\274 \321\200\320\260\320\261\320\276\321\202\321\213", Q_NULLPTR));
        label_power->setText(QApplication::translate("InfoForm", "1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InfoForm: public Ui_InfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOFORM_H
