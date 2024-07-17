#include<iostream>
#include<fstream>
using namespace std;

int num;
int menu()
{
    cout<<"\n   ---------- TO DO LIST ---------- \n"
        <<"0. Wyswietl zawartosc listy\n"
        <<"1. Dodaj do listy\n"
        <<"2. Usun z Listy\n"
        <<"3. Dodaj do \"Wykonanych\"\n"
        <<"4. Usun wszystkie pozycje z listy\n"
        <<"5. Exit\n"
        <<"Wybierz czynnosc ktora chcesz wykonac: ";
    cin>> num;
    return num;
}

void Err(file)
{
    if(!file.is_open)
        {
            cerr<<"Error, nie otwarto pliku"<<endl;
            return 1;
        }
}

void Show() 
{
    ifstream file("content.txt");
    Err(file);
    string line;
    while (getline(file, line))
    {
        cout<<line<<endl;
    }
}