#include "stick.h"
#include "tbutton.h"
#include <iostream>
#include <conio.h>
#include "string"

using namespace std;

Stick::Stick(){
s_StickButtonStatus = 0;
s_X = 0;
s_Y = 0;
s_StickButton = new TButton();
}

Stick::Stick(bool StickButtonStatus, float X, float Y, TButton StickButton): s_StickButtonStatus(StickButtonStatus), s_X(X), s_Y(Y){
    s_StickButton = new TButton();
}

Stick::~Stick(void){
}
