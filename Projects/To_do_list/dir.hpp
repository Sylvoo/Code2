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

void err(string filename)
    {
        ifstream file(filename);
        if(!file.is_open())
            {
                cerr<<"Error, nie otwarto pliku"<<endl;
            }
    }

void Show(string filename) 
    {
        ifstream file(filename);
        err(filename);
        string line;
        while (getline(file, line))
        {
            cout<<line<<endl;
        }
    }
int line_counter(string filename)
    {
        string lineStr;
        int num_lines=0;
        ifstream inputfile(filename);
            while(getline(inputfile, lineStr))
            {
                if(!lineStr.empty())
                {
                    num_lines++;
                }
            }
        //cout<<num_lines;
        return num_lines;
    }
void Add(string filename)
    {    
        int num_lines=0;
        string linia;
        ofstream file;
        file.open(filename, ios_base::app);
        string lineStr;
        ifstream inputfile(filename);
        cout<<"Twoj tekst: ";
        cin>>linia;
        file<<"\n"<<line_counter(filename)<<". "<<linia;
        file.close();   
    }

