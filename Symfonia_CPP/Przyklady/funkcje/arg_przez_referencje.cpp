#include<iostream>
using namespace std;

void zer(int wart, int &ref);

int main()
{
    int a = 44;
    int b = 77;
    cout<<"Przed wywolaniem funkcji\"zer\": \n";
    cout<<"a = "<<a<<", b = "<<b<<endl;
    // cout<<&b;
    zer(a,b);

    cout<<"Po wywolaniu funkcji\"zer\": \n";
    cout<<"a = "<<a<<", b = "<<b<<endl;
    return 0;
}

void zer(int wart, int &ref)
{
    cout<<"\tWartosc funkcji \"zer\" przed zerowaniem:\n";
    cout<<"\twart = "<<wart<<", ref = "<<ref<<endl;

    wart = 0;
    ref = 0;

    cout<<"\tWartosc funkcji \"zer\" po zerowaniu:\n";
    cout<<"\twart = "<<wart<<", ref = "<<ref<<endl;

}