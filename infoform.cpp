#include "infoform.h"
#include "ui_infoform.h"

InfoForm::InfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InfoForm)
{
    ui->setupUi(this);
}

void InfoForm::onStatusChanged(const QString& button_name, int current_coord)
{
    ui->label_pressed_button->setText(button_name);
    ui->label_coord->setText(QString::number(current_coord));
    ui->label_pressed_button->repaint();
    ui->label_coord->repaint();
    qApp->processEvents();
}

void InfoForm::onStatusChanged_x(const QString& button_name, int current_coord1)
{
    ui->label_pressed_button->setText(button_name);
    ui->label_coord_x->setText(QString::number(current_coord1));
    ui->label_pressed_button->repaint();
    ui->label_coord_x->repaint();
    qApp->processEvents();
}

void InfoForm::onStatusChanged_bt(const QString& button_name, int current_coord2)
{
    ui->label_pressed_button->setText(button_name);
    ui->label_battery->setText(QString::number(current_coord2));
    ui->label_pressed_button->repaint();
    ui->label_battery->repaint();
    qApp->processEvents();
}

void InfoForm::onStatusChanged_vl(const QString& button_name, int current_coord3)
{
    ui->label_pressed_button->setText(button_name);
    ui->label_value->setText(QString::number(current_coord3));
    ui->label_pressed_button->repaint();
    ui->label_value->repaint();
    qApp->processEvents();
}

void InfoForm::onStatusChanged_st(const QString& button_name, int current_coord4)
{
    ui->label_pressed_button->setText(button_name);
    ui->label_power->setText(QString::number(current_coord4));
    ui->label_pressed_button->repaint();
    ui->label_power->repaint();
    qApp->processEvents();
}

InfoForm::~InfoForm()
{
    delete ui;
}
