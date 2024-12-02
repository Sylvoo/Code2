//#pragma once   -> dziala z tym zamiast #ifndef itd.
#ifndef PYTANIE_HPP
#define PYTANIE_HPP
#include <iostream>

using namespace std;



class Pytanie
{
    public:
    string tresc;
    string a, b, c, d;
    int nr_pytania;
    string poprawna;
    string odp;
    int pkt; // 1 lub 0 

    void wczytaj(); // wczytuje pytania z pliku tekstowego
    void zadaj(); // pokazuje pytanie, czyta odpowiedz 
    void sprawdz(); // sprawdza poprawnosc
};

#endif