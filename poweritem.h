#ifndef POWERITEM_H
#define POWERITEM_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <iostream>
#include <conio.h>
#include "string"

using namespace std;

class PowerItem{
public:
    PowerItem();
    PowerItem(string TypePI, float NodeCharge);

    ~PowerItem();

protected:
    string p_TypePI;
    float p_NodeCharge;
};

#endif // POWERITEM_H
