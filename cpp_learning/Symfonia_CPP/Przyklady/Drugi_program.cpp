/*-----------------------
Program na przeliczanie wysokosci podanej
w stopach na wysokosc w metrach.
Cwiczymy tu operacje wczytywania z klawiaturry
i wypisywanie na ekranie
-------------------------*/
#include<iostream>
using namespace std;
int main()
{
    int stopy;
    double metry;
    double przelicznik = 0.3;

    std::cout<<"Podaj wysokosc w stopach: ";
    std::cin>>stopy;

    metry = stopy * przelicznik;
    std::cout<<"\n";

    std::cout<<stopy<<" stop to jest : "<<metry<<" metrow"<<endl;


system("pause");
}