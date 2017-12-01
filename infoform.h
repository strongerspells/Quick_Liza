#ifndef INFOFORM_H
#define INFOFORM_H

#include <QWidget>

namespace Ui {
class InfoForm;
}

class InfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit InfoForm(QWidget *parent = 0);
    ~InfoForm();

public slots:
//! Это то что принимает сигнал из первой формы status_changed
    void onStatusChanged(const QString &button_name, int current_coord);

    void onStatusChanged_x(const QString &button_name, int current_coord);
    void onStatusChanged_bt(const QString &button_name, int current_coord);
    void onStatusChanged_vl(const QString &button_name, int current_coord);
    void onStatusChanged_st(const QString &button_name, int current_coord);
private:
    Ui::InfoForm *ui;
};

#endif // INFOFORM_H
