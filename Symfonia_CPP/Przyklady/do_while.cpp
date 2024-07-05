#include<iostream>
using namespace std;
int main()
{
    char litera;
    do{
        cout<<"Napisz jakas literke: ";
        cin>>litera;
        cout<<"\n napisales: "<<litera<<"\n";
    }while(litera != 'K');

    cout<<"Napisales 'K' wiec konczymy zabawe.";
}