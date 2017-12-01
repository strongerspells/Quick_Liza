#include "mechanicalcontroller.h"
#include <iostream>
#include <conio.h>
#include "string"
#include "controller.h"
#include "tbutton.h"
#include "stick.h"
#include "poweritem.h"

using namespace std;

MechanicalController::MechanicalController(){
    m_MechanicalController = new Controller(*m_MechanicalController);
    m_Battery = new PowerItem(*m_Battery);
    m_MStick = new Stick(*m_MStick);
}

MechanicalController::MechanicalController(Controller MechanicalController, PowerItem Battery, Stick MStick){
    m_MechanicalController = new Controller(MechanicalController);
    m_Battery = new PowerItem(Battery);
    m_MStick = new Stick(MStick);
}

MechanicalController::~MechanicalController(){
}
