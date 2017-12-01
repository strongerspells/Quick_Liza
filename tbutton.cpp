#include "tbutton.h"
#include <iostream>
#include <conio.h>
#include "string"

using namespace std;

TButton::TButton(){
    b_Name = "None";
    b_ButtonStatus = 0;
}

TButton::TButton(string Name, bool ButtonStatus){
    b_Name = Name;
    b_ButtonStatus = ButtonStatus;
}

TButton::~TButton(void){
}
