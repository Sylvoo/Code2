#include <iostream>
#include <cstring>
#include "osoba.hpp"

using namespace std;

int main()
{
    osoba profesor, student1, student2;
    
    profesor.zapamietaj("Zbychu Szklarski", 66);
    student1.zapamietaj("Mateusz Trzeciak",21);
    student2.zapamietaj("Filip Mrozik", 21);

    // za pomoca wskaznika

    osoba *wsk; // def wskaznika
    wsk = &profesor; // ustawiam wskaznik na obiekt profesor

    wsk -> zapamietaj("Zbychu Szklarski", 66); 

    student1.wypisz();

}

void wakacje::zapis_na_wycieczke(const osoba*) 
{
    
}

wakacje grecja;
void osoba::moje_wakacje()
{   
    grecja.zapis_na_wycieczke(this);
}



void osoba::zapamietaj( const char* nazw, const int lata)
{
    //nazwisko = nazw;
    //this -> wiek = wiek;
    strcpy(this -> nazwisko,(nazw ? nazw : "Anonim"));
    this -> wiek = lata;
}

void osoba:: wypisz() 
{
    cout<<nazwisko<<endl;
    cout<<wiek;
}
