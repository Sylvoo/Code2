#include<iostream>
#include<fstream>
using namespace std;

int num;
int menu()
    {
        cout<<"\n   --------------------------------"
            <<"\n   ---------- TO DO LIST ---------- \n"
            <<"   ----------    MENU    ---------- \n"
            <<"   --------------------------------\n"
            <<"\n1. Wyswietl zawartosc listy\n"
            <<"2. Dodaj do listy\n"
            <<"3. Usun z Listy\n"
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
        int num_lines=1;
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
        string linia;
        ofstream file;
        file.open(filename, ios::app);
        string lineStr;
        ifstream inputfile(filename);
        cout<<"Tekst ktory chcesz dodac do listy : ";
       /* while(true)
        {
            getline(cin, lineStr);
            if(lineStr != " ")
            {
                break;
            }
            file << "\n"<<line_counter(filename)<<". "<< lineStr<<" ";
        }
        */
        cin>>linia;
        file<<"\n"<<line_counter(filename)<<". "<<linia;
        file.close();   
    }

void clear(string filename)
{   
    ofstream file(filename, ios::trunc);    
}

void del(string filename, string destinationPath)
    {   
        int ktore;
        string line;
        ifstream file;
        file.open(filename);
        ofstream destination(destinationPath, ios::trunc);
        cout<<"Ktore zadanie chcesz usunac z To-Do listy?: ";
        cin>>ktore;
        int w = int(ktore);
        cout<<w;
        int nr_lin = 0;
        while(getline(file, line))
        {
            if (!line.empty())
            {nr_lin ++;}
            if(nr_lin != int(ktore))
            {
                destination<<line<<endl;
            }
        }
        destination.close();
        file.close();

        ofstream filee(filename, ios::trunc);
        ifstream destinationn;
        destinationn.open(destinationPath);
        
        while(getline(destinationn, line))
        {
            filee << line<< endl;
        }
        filee.close();
        destinationn.close();
        
    }