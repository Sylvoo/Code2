#include<iostream>
#include"dir.hpp"
#include<fstream>
#include<ios>

using namespace std;

int nr;
string goal = "copy.txt";
int main()
{
    //fstream plik;
    string content = "content.txt";
    err(content);
    bool isOff = false;
    while(isOff == false)
    {   
        if (isOff == true)
        {
            break;
        }
        nr = menu();
        switch(nr)
        {
            case 1:
                cout<<"\n[ --- ZAWARTOSC TO-DO LISTY --- ]\n";               
                Show(content);
                
                break;
            case 2:
                Add(content);
                break;
            case 3:
                del(content, goal);
                break;
            case 4:
                clear(content);
                cout<<"\n --- Wszystkie pozycje zostaly usuniete :) --- \n";
                break;
            case 5:
                cout<<"\n            ***     See you soon ! :D     ***     ";
                cout<<"\n ";
                isOff = true;
                break;
            default:
                cout<<"         --------    Podano zly numer !!!    -------- \n";
                isOff = true;
                break;
        }
    }
}
