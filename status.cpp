#include "status.h"

status::status()
{
    nx = 0;
    ny = 0;
    bt = 100;
    vl = 50;
    st = 1;
}

void status::up()
{
    nx += 5;
    battery();
}

void status::down()
{
    nx -= 5;
    battery();
}

void status::left()
{
    ny -= 5;
    battery();
}

void status::right()
{
    ny += 5;
    battery();
}

void status::battery()
{
    bt -= 1;
}

void status::vUp()
{
    vl += 2;
    battery();
}

void status::vDown()
{
    vl -= 2;
    battery();
}

void status::two()
{
    st+=1;
    if (st > 4)
        st=1;

    battery();
}

int status::get_nx()
{
    return (nx);
}

int status::get_ny()
{
    return (ny);
}

int status::get_bt()
{
    return (bt);
}

int status::get_vl()
{
    return (vl);
}

int status::get_st()
{
    return (st);
}
