#include<iostream>
using namespace std;

long potega(int stopien, long liczba);

int main()
{
    int pocz, kon;
    cout<<"Podaj poczatek przedzialu: ";
    cin>>pocz;
    cout<<"Podaj koniec przedzialu: ";
    cin>>kon;

    for (int i = pocz; i<=kon; i++)
        {
            cout<< i
            << " do kwadratu = "
            << potega(2,i)
            << " a do szescianu = "
            <<potega(3,i)
            <<endl;
        }
    return 0;
}

long potega(int stopien, long liczba)
    {   
        long wynik = liczba;
        for (int i = 1; i<stopien; i++)
        {
            wynik *= liczba;
        }
        return wynik;
    }