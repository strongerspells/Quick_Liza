#ifndef BUTTON_H
#define BUTTON_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <iostream>
#include <conio.h>
#include "string"

using namespace std;

class TButton: public QObject {
    Q_OBJECT
public:
    TButton();
    TButton(string Name, bool ButtonStatus);
    ~TButton(void);

protected:
    bool b_ButtonStatus;
    string b_Name;
};

#endif // BUTTON_H
