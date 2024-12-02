#ifndef EVENT_CPP
#define EVENT_CPP
#include <iostream>

using namespace std;

class Event
{
    int day, month, year;
    int hour, minutes;
    string name;

    public:

    Event(string="eBal", int=1, int=2, int=2070, int=12, int=0);
    ~Event();
    void load();
    void show();

};

#endif