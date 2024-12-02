#ifndef OSOBA_H
#define OSOBA_H

#include <iostream>
#include <cstdlib>

class osoba
{
    private:
    char nazwisko[80];
    int wiek;

    public:
    void zapamietaj( const char* nazw, const int lata);
    void wypisz();
    void moje_wakacje();
    
    
};

class wakacje
{
    public:
    void zapis_na_wycieczke(const osoba*);
    int id_osoby;
};

#endif

