#include "rechargeablebattery.h"
#include "poweritem.h"
#include <iostream>
#include <conio.h>
#include "string"

using namespace std;

RechargeableBattery::RechargeableBattery(){
    r_RechargeableBattery = new PowerItem(*r_RechargeableBattery);
    r_Temp = 30;
}

RechargeableBattery::RechargeableBattery(PowerItem RechargebleBattery, float Temp) : r_Temp(Temp){
    r_RechargeableBattery = new PowerItem(RechargebleBattery);
}

RechargeableBattery::~RechargeableBattery(){
}
