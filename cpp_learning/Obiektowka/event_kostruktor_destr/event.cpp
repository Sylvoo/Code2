#include <iostream>
#include "event.hpp"

using namespace std;

void Event::load()
{
    cout<<endl<<"Nazwa wydarzenia: ";
    cin>>name;
    cout<<endl<<"Dzien: ";
    cin>>day;
    cout<<endl<<"Miesiac: ";
    cin>>month;
    cout<<endl<<"Rok: ";
    cin>>year;
    cout<<endl<<"Godzina: ";
    cin>>hour;
    cout<<endl<<"Minut: ";
    cin>>minutes;
}

void Event::show()
{
    cout<<endl<<name<<". "<<day<<". "<<month<<". "<<year<<". "<<hour<<". "<<minutes<<endl;
}

Event::Event(string n, int d, int m, int y, int h, int mins) //konstruktor 
{
    name=n;
    day=d;
    month=m;
    year=y;
    hour=h;
    minutes=mins;
}

Event::~Event()
{
    cout<<"Destruktor sie nazywam";
}