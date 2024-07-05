#include<iostream>
using namespace std;
int main()
{
    int wysokosc, p_karne;

    cout<<"Na jakiej wysokosci lecimy: ";
    cin>>wysokosc;

    if (wysokosc<500)
    {
        cout<<"Lecisz za nisko, KARA!";
        p_karne += 1;
    }
    else
    { cout<<"lecisz prawidlowo, tak trzymaj!";
        p_karne = 0;
    }
    if (p_karne) cout<<"ZLEEEEEE";
    return 0;
}