#ifndef STATUS_H
#define STATUS_H

class status
{
public:
    status();

    void up();
    void down();
    void left();
    void right();

    void battery();

    void vUp();
    void vDown();

    void two();

    int get_nx();
    int get_ny();
    int get_bt();
    int get_vl();
    int get_st();
private:
    int nx;
    int ny;
    int bt;
    int vl;
    int st;
};

#endif // STATUS_H
