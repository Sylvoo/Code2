#include<iostream>

using namespace std;

int main()
{
    int cale;
    double metry;
    double przelicznik = 2.54;

    cout<<"Podaj ilosc cali: ";
    cin>>cale;

    metry = cale * przelicznik;

    cout<<cale <<" cali to: "<<metry<<" m"<<endl;


}   