//#include<cstdlib>
#include<iostream>
using namespace std;

int num;
double num1, num2;
void calc()
{   
    cout<<"\n**** Witam w Super Kalkulatorze ****\n"<<endl;
    cout<<"1. Dodawanie\n"
        <<"2. Odejmowanie\n"
        <<"3. Mnozenie\n"
        <<"4. Dzielenie\n"
        <<"5. Exit\n"
        <<"Wybierz operacje w menu: ";
    
    cin>>num;
    double wynik;
    cout << "Podaj pierwsza liczbe: ";
    cin >> num1;
    cout << "podaj druga liczbe: ";
    cin >> num2;
    switch(num)
    {
        case 1:
        wynik = num1 + num2;
        cout<<"Wynik dla operacji \"dodawanie\" to: "<<wynik;
        break;

        case 2:
        wynik = num1 - num2;
        cout<<"Wynik dla operacji \"odejmowanie\" to: "<<wynik;
        break;

        case 3:
        wynik = num1 * num2;
        cout<<"Wynik dla operacji \"mnozenie\" to: "<<wynik;
        break;

        case 4:
        wynik = num1 / num2;
        cout<<"Wynik dla operacji \"dzielenie\" to: "<<wynik;
        break;

        case 5:
        cout<<"Dziekuje za uzytkowanie :) ";
        exit(1);
        break;

        default:
        cout<<"Podales numer: "<<num<<", ktorego nie ma w bazie!";
        break;
    }
}