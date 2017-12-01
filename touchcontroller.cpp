#include "touchcontroller.h"
#include "controller.h"
#include "tbutton.h"
#include "touchpad.h""
#include "rechargeablebattery.h"
#include <iostream>
#include <conio.h>
#include "string"

using namespace std;

TouchController::TouchController(){
    t_TouchController = new Controller(*t_TouchController);
    t_SBattery = new RechargeableBattery(*t_SBattery);
    t_STouchPad = new TouchPad(*t_STouchPad);
}

TouchController::TouchController(Controller TouchController, RechargeableBattery Battery, TouchPad STouchPad){
    t_TouchController = new Controller(TouchController);
    t_SBattery = new RechargeableBattery(Battery);
    t_STouchPad = new TouchPad(STouchPad);
}

TouchController::~TouchController(){
}
