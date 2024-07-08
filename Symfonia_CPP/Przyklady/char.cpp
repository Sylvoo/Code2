#include<iostream>
using namespace std;

int main()
// C-string to tablica charow
// "slowo" = const char[6] 6 = 5liter+null na koncu 
{   
    char znak;
    znak = 'Z';
    cout<<znak<<endl;
    char k = '\022'; // Z
    cout<< k<<endl;
    char x = '\x61'; // a
    cout<< x <<endl;
    char sound = '\a';
    cout<<sound<<endl; // ??? idk 
    wchar_t litera;
    litera = L'a';
    cout<<litera<<endl;
    /*
    ZNAKI SPECJALNE
    \b - cofacz
    \f - nowa strona
    \n - nowa linia
    \r - powrot karetki (??)
    \t tabulator poziomy
    \v - tabulator pionowy
    \a - sygnal dzwiekowy (xd idk)
    */

    return 0;   
}