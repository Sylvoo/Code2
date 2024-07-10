#include<iostream>
using namespace std;

int kukulka(int ile);

int main()
{
    int m = 20;
    cout<<"Zaczynamy";
    
    m = kukulka(5);
    cout<<"\n Na koniec m = "<<m;

    return 0;
}

int kukulka(int ile)
{
    for(int i = 0; i<ile;i++)
    {
        cout<<" ku-ku! ";
    }
    return 21;
}