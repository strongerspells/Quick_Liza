#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPicture>
#include <QImage>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->upButton,SIGNAL(clicked()),this,SLOT(click_up()));
    connect(ui->downButton,SIGNAL(clicked()),this,SLOT(click_down()));
    connect(ui->leftButton,SIGNAL(clicked()),this,SLOT(click_left()));
    connect(ui->rightButton,SIGNAL(clicked()),this,SLOT(click_right()));
    connect(ui->batteryButton,SIGNAL(clicked()),this,SLOT(click_battery()));
    connect(ui->twoButton,SIGNAL(clicked()),this,SLOT(click_two()));
    connect(ui->vUpButton,SIGNAL(clicked()),this,SLOT(click_vUp()));
    connect(ui->vDownButton,SIGNAL(clicked()),this,SLOT(click_vDown()));
}

/*void MainWindow::paintEvent(QPaintEvent *)
{

    QImage img("controller-xbox-512.png"); // загружаем картинку
    QPainter painter(this); // определяем объект painter, который обеспечивает рисование
    painter.drawImage(0,0, img.scaled(this->size())); // рисуем наше изображение от 0,0 и растягиваем по всему виджет
}*/

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_status_changed(const QString& button_name)
{
    emit this->status_changed(button_name, current_status.get_nx());
}

void MainWindow::on_status_changed_x(const QString& button_name)
{
    emit this->status_changed_x(button_name, current_status.get_ny());
}

void MainWindow::on_status_changed_bt(const QString& button_name)
{
    emit this->status_changed_bt(button_name, current_status.get_bt());
}

void MainWindow::on_status_changed_vl(const QString& button_name)
{
    emit this->status_changed_vl(button_name, current_status.get_vl());
}

void MainWindow::on_status_changed_st(const QString& button_name)
{
    emit this->status_changed_st(button_name, current_status.get_st());
}

void MainWindow::click_up()
{
    current_status.up();
    qDebug() << current_status.get_nx();
    on_status_changed("Вверх");
}

void MainWindow::click_down()
{
    current_status.down();
    qDebug() << current_status.get_nx();
    on_status_changed("Вниз");
}

void MainWindow::click_left()
{
    current_status.left();
    qDebug() << current_status.get_ny();
    on_status_changed_x("Влево");
}

void MainWindow::click_right()
{
    current_status.right();
    qDebug() << current_status.get_ny();
    on_status_changed_x("Вправо");
}

void MainWindow::click_battery()
{
    current_status.battery();
    qDebug() << current_status.get_bt();
    on_status_changed_bt("Заряд");
}

void MainWindow::click_vUp()
{
    current_status.vUp();
    qDebug() << current_status.get_vl();
    on_status_changed_vl("V+");
}

void MainWindow::click_vDown()
{
    current_status.vDown();
    qDebug() << current_status.get_vl();
    on_status_changed_vl("V-");
}

void MainWindow::click_two()
{
    current_status.two();
    qDebug() << current_status.get_st();
    on_status_changed_st("Кнопка 2");
}
