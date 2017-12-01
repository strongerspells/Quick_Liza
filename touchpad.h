#ifndef TOUCHPAD_H
#define TOUCHPAD_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <iostream>
#include "tbutton.h"
#include <conio.h>
#include "string"

using namespace std;

class TouchPad{
public:
    TouchPad();
    TouchPad(TButton TouchPadButton, bool TouchPadButtonStatus, bool SensorStatus, float X, float Y);

    ~TouchPad();
protected:
    TButton* t_TouchPadButton;
    bool t_TouchPadButtonStatus;
    bool t_SensorStatus;
    float t_X;
    float t_Y;
};

#endif // TOUCHPAD_H
