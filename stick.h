#ifndef STICK_H
#define STICK_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "tbutton.h"
#include <iostream>
#include <conio.h>
#include "string"

using namespace std;

class Stick{
public:
    Stick();
    Stick( bool StickButtonStatus, float X, float Y, TButton StickButton);

    ~Stick(void);

protected:
    TButton* s_StickButton;
    bool s_StickButtonStatus;
    float s_X;
    float s_Y;
};

#endif // STICK_H
