#include<iostream>

using namespace std;

int main()
{   
    // warunek ? wartosc1 : wartosc2
    int i = 5;
    int x = (i>4) ? 15:10; // jak prawda to wartosc 1, jak falsz to wartosc 2
    cout<< i<<endl; // to nadal to samo i
    cout<< x<<endl; // 15 

    int a;
    cin>>a; // jesli a = 0  to falsz, jesli inny to prawda 
    cout<<"odp: "<<(a?"TAK":"NIE");
    return 0;
}