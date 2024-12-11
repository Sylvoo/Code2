#include<iostream>

using namespace std;

class Ksztalt
{
    public:
    virtual void policzPole()=0;
};

class Kolo : public Ksztalt
{
    float r;
    public:
    Kolo(float x)
    {
        r=x;
    }
    virtual void policzPole()
    {
        cout<<"Pole tego kola to: "<<3.14*r*r<<endl;
    }
};

class Trapez : public Ksztalt
{
    float a;
    float b;
    float h;
    public:
    Trapez(float aa, float bb, float hh)
    {
        a = aa;
        b = bb;
        h = hh;
    }
    virtual void policzPole()
    {
        cout<<"Pole trapezu wynosi: "<<0.5*(a+b)*h<<endl;
    }
};


int main()
{
    Kolo k(1);
    Trapez T(2, 2, 4);

    Ksztalt *wsk;
    wsk = &k;
    wsk -> policzPole();

    wsk = &T;   
    wsk -> policzPole();
}