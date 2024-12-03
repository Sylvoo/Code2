#include<iostream>
#include "przyjaciele.hpp"
using namespace std;

Punkt::Punkt(string n, int xx, int yy)
{
    nazwa = n;
    x = xx;
    y = yy;
}

void Punkt::wczytaj()
{
    cout<<"Podaj x: "; cin>>x;
    cout<<"Podaj y: "; cin>>y;
    cout<<"Nazwa punktu: "; cin>>nazwa;
}

Prostokat::Prostokat(string n, float xx, float yy, float sz, float w)
{
    nazwa = n;
    x = xx;
    y = yy;
    szerokosc = sz;
    wysokosc = w;
}

void Prostokat::wczytaj(){
    cout<<"Podaj wspl x dolnego lewego rogu prostokata: "; cin>>x;
    cout<<"Podaj wspl y dolnego lewego rogu prostokata: "; cin>>y;
    cout<<"Podaj szerokosc prostokata: "; cin>>szerokosc;
    cout<<"Podaj wysokosc prostokata: "; cin>>wysokosc;
    cout<<"Podaj nazwe prostokata: "; cin>>nazwa;
}
