#include "mainwindow.h"
#include "infoform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    InfoForm info;
 //! здесь мы привязываем сигнал status_changed первой формы(MainWindow)
 //! к слоту onStatusChanged второй формы(InfoForm)
    QObject::connect(&w, SIGNAL(status_changed(const QString&,int)),
                     &info, SLOT(onStatusChanged(const QString&,int)));
    QObject::connect(&w, SIGNAL(status_changed_x(const QString&,int)),
                     &info, SLOT(onStatusChanged_x(const QString&,int)));
    QObject::connect(&w, SIGNAL(status_changed_bt(const QString&,int)),
                     &info, SLOT(onStatusChanged_bt(const QString&,int)));
    QObject::connect(&w, SIGNAL(status_changed_vl(const QString&,int)),
                     &info, SLOT(onStatusChanged_vl(const QString&,int)));
    QObject::connect(&w, SIGNAL(status_changed_st(const QString&,int)),
                     &info, SLOT(onStatusChanged_st(const QString&,int)));
    w.show();
    info.show();

    return a.exec();
}




