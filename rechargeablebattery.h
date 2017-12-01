#ifndef RECHARGEABLEBATTERY_H
#define RECHARGEABLEBATTERY_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "poweritem.h"
#include <iostream>
#include <conio.h>
#include "string"

using namespace std;

class RechargeableBattery : public PowerItem
{
public:
    RechargeableBattery();
    RechargeableBattery(PowerItem RechargebleBattery, float Temp);

    ~RechargeableBattery();

    protected:
        PowerItem* r_RechargeableBattery;
        float r_Temp;
};

#endif // RECHARGEABLEBATTERY_H
