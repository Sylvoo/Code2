#include <iostream>
#include <cstring>

using namespace std;

class osoba
{
    private:
    char nazwisko[80];
    int lata;

    public:
    void zapamietaj( const char* nazw, const int wiek);
    void wypisz();
};

void osoba:: zapamietaj( const char* nazw, const int wiek)
    {
        //nazwisko = nazw;
        //this -> wiek = wiek;
        strcpy(nazwisko,(nazw ? nazw : "Anonim"));
        lata = wiek;
    }

void osoba:: wypisz() 
    {
        cout<<nazwisko<<endl;
        cout<<lata;
    }

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