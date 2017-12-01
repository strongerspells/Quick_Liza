#include "poweritem.h"
#include <iostream>
#include <conio.h>
#include "string"

using namespace std;

PowerItem::PowerItem(){
p_TypePI = "Type";
p_NodeCharge = 100;
}

PowerItem::PowerItem(string TypePI, float NodeCharge): p_TypePI(TypePI), p_NodeCharge(NodeCharge){
}

PowerItem::~PowerItem(){
}
