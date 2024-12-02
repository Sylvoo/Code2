#include<iostream>
using namespace std;

int main()
{   
    int numer;
    cout<<"Kapitanie, ktory podzespol sprawdzic?"<<endl;
    cout<<"nr 10-silnik\nnr 35-stery\nnr 28-radar\n";
    cout<<"Kapitanie, podaj numer: ";
    cin>>numer;

    switch(numer)
    {
        case 10:
        cout<<"Sprawdzam silnik";
        break;

        case 35:
        cout<<"Sprawdzam stery";
        break;
        
        case 28:
        cout<<"Sprawdzam radar";
        break;

        default:
        cout<<"Podales numer: "<<numer<<", ktorego nie ma w bazie!";
        break;
    }
    
    int nr;
    cin>> nr;
    switch(nr)
    {
        case 1:
        cout<<"*";
        case 2:
        cout<<"-";
        case 3:
        cout<<"!";
        break;
    }
    return 0;
}