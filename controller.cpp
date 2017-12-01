#include "controller.h"
#include <iostream>
#include "tbutton.h"
#include <conio.h>
#include "string"

using namespace std;

Controller::Controller(){
c_NameController = "new";
c_BleStatus = 1;
c_VolumeButton1 = new TButton();
c_VolumeButton2 = new TButton();
c_AppButton = new TButton();
c_HomeButton = new TButton();
c_IndexTriggerButton = new TButton();
}

Controller::Controller(string NameController, bool BleStatus, TButton VolumeButton1, TButton VolumeButton2, TButton AppButton, TButton HomeButton, TButton IndexTriggerButton): c_NameController(NameController), c_BleStatus(BleStatus)
{
    c_VolumeButton1 = new TButton();
    c_VolumeButton2 = new TButton();
    c_AppButton = new TButton();
    c_HomeButton = new TButton();
    c_IndexTriggerButton = new TButton();
}

Controller:: ~Controller(){
}
