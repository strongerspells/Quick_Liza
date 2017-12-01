#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <iostream>
#include "tbutton.h"
#include <conio.h>
#include "string"

using namespace std;

class Controller
{
public:
    Controller();
    Controller(string NameController, bool BleStatus, TButton VolumeButton1, TButton VolumeButton2, TButton AppButton, TButton HomeButton, TButton IndexTriggerButton);

    virtual ~Controller();

protected:
    string c_NameController;
    bool c_BleStatus;
    TButton* c_VolumeButton1;
    TButton* c_VolumeButton2;
    TButton* c_AppButton;
    TButton* c_HomeButton;
    TButton* c_IndexTriggerButton;
};

#endif // CONTROLLER_H
