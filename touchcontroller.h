#ifndef TOUCHCONTROLLER_H
#define TOUCHCONTROLLER_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "controller.h"
#include "tbutton.h"
#include "touchpad.h""
#include "rechargeablebattery.h"
#include <iostream>
#include <conio.h>
#include "string"

using namespace std;
class TouchController : public Controller{
public:
    TouchController();
    TouchController(Controller TouchController, RechargeableBattery Battery, TouchPad TouchPad);

    ~TouchController();
protected:
        Controller *t_TouchController;
        RechargeableBattery *t_SBattery;
        TouchPad *t_STouchPad;
};

#endif // TOUCHCONTROLLER_H
