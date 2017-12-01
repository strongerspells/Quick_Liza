#include "touchpad.h"
#include "tbutton.h"
#include <iostream>
#include <conio.h>
#include "string"

using namespace std;

TouchPad::TouchPad(){
t_TouchPadButton = new TButton();
t_TouchPadButtonStatus = 0;
t_SensorStatus = 0;
t_X = 0;
t_Y = 0;
}

TouchPad::TouchPad(TButton TouchPadButton, bool TouchPadButtonStatus, bool SensorStatus, float X, float Y) :  t_TouchPadButtonStatus(TouchPadButtonStatus), t_SensorStatus(SensorStatus), t_X(X), t_Y(Y){
    t_TouchPadButton = new TButton();
}

TouchPad::~TouchPad(){
}
