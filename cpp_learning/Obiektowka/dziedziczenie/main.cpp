#include <iostream>
#include <cmath>
//#define M_PI 3.14

using namespace std;

class Punkt
{
    float x,y;
    string nazwa;

    public:
    void wyswietl()
    {
        cout<<nazwa<<"( "<<x<<","<<y<<" )"<<endl;
    }

    Punkt(string np = "S", float a = 0, float b = 0)
    {   
        nazwa = np;
        x = a;
        y = b;
    }
};

class Kolo :public Punkt //
{
    protected:
    float r;
    string nazwa;

    public:
    void wyswietl()
    {
        cout<<"Kolo o nazwie: "<<nazwa<<endl;
        cout<<"Srodek kola: ";
        Punkt::wyswietl();
        cout<<"Promien: "<<r<<endl;
        cout<<"Pole kola: "<<M_PI*r*r<<endl;
    }

    Kolo(string nk = "Kolko", string np = "S", float a = 0, float b = 0, float pr = 1)
    :Punkt(np, a, b)
    {
        nazwa=nk;
        r=pr;
    }
};

class Kula : Kolo 
{

    string nazwa;

    public:

    void wyswietl()
    {
        cout<<"Nazwa Kuli: "<<nazwa<<endl;
        cout<<"Dlugosc promienia: "<<Kolo::r<<endl;
        cout<<"Objetosc kuli: "<<(4/3)*M_PI*pow(Kolo::r,3)<<endl;
    }
    Kula(string n = "Kula", string nk = "s", string np = "k", float a = 0, float b = 0, float pr = 1)
    :Kolo(nk,np,a,b,pr)
    {
        nazwa = n;
    }
};

int main()
{
    Kolo k1;

    //k1.wyswietl();

    Kula k2("Kul2","S","k",1,2,3);

    k2.wyswietl();

    return 0;
}