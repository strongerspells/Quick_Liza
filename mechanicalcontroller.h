#ifndef MECHANICALCONTROLLER_H
#define MECHANICALCONTROLLER_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "controller.h"
#include "tbutton.h"
#include "stick.h"
#include "poweritem.h"
#include <iostream>
#include <conio.h>
#include "string"

using namespace std;
class MechanicalController : public Controller{
public:
    MechanicalController();
    MechanicalController(Controller MechanicalController, PowerItem Battery, Stick MStick);

    ~MechanicalController();
protected:
        Controller* m_MechanicalController;
        PowerItem* m_Battery;
        Stick* m_MStick;
};

#endif // MECHANICALCONTROLLER_H
