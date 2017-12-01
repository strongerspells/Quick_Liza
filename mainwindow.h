#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <status.h>
#include <QPicture>
#include <QImage>
#include <QPainter>

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
//! это обработка клика кнопки Вверх
    void click_up();
//! это обработка клика кнопки Вниз
    void click_down();
//! это обработка клика кнопки Вниз
    void click_left();
//! это обработка клика кнопки Вниз
    void click_right();
//! это обработка клика кнопки Вниз
    void click_battery();
//! это обработка клика кнопки Вниз
    void click_two();
//! это обработка клика кнопки Вниз
    void click_vUp();
//! это обработка клика кнопки Вниз
    void click_vDown();


//! это то, что мы привязываем в main.cpp к слоту из второй формы.
//! а вызываем мы это из status_changed
    void on_status_changed(const QString& button_name);
    void on_status_changed_x(const QString& button_name);
    void on_status_changed_bt(const QString& button_name);
    void on_status_changed_vl(const QString& button_name);
    void on_status_changed_st(const QString& button_name);

signals:
//! это мы вызываем, когда нажали кнопку, внутри функций click_up/down
    void status_changed(const QString &button_name, int current_coord);

    void status_changed_x(const QString &button_name, int current_coord1);
    void status_changed_bt(const QString &button_name, int current_coord2);
    void status_changed_vl(const QString &button_name, int current_coord3);
    void status_changed_st(const QString &button_name, int current_coord4);
private:
//! это наша "математика" программы
//! описана внутри status.h/.cpp
    status current_status;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
