#include <iostream>
#include "przyjaciele.hpp"
#include "przyjaciele.cpp"

using namespace std;

void sedzia(Punkt pkt, Prostokat p) // dzieki & dzialamy na oryginale i mozemy podmieniac wartosci
{
 if((pkt.x >= p.x)&&(pkt.x<=p.x+p.szerokosc)&&(pkt.y >= p.y)&&(pkt.y <= p.y+p.wysokosc))
 {
    cout<<endl<<"Punkt "<<pkt.nazwa<<" nalezy do prostokata "<<p.nazwa;
 }
 else cout<<"Nie nalezy";
}

int main()
{
    Punkt pkt1("A", 3, 1);

    Prostokat p1("Prostokat", 0.0, 0.0, 6.0, 4.0);

    sedzia(pkt1, p1);
}