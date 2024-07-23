#include<iostream>
#include"dir.hpp"
#include<fstream>
#include<ios>

using namespace std;
int lines_counter(string);
void del(string filename);
int nr;
string bin = "bin.txt";
int main()
{
    //fstream plik;
    string content = "content.txt";
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
            case 0:
                Show(content);
                break;
            case 1:
                Add(content);
                break;
            case 2:
                del(content);
                break;
            case 5:
                cout<<"\n            ***     See you soon ! :D     ***     "<<endl;
                cout<<"";
                isOff = true;
                break;
            default:
                cout<<"         --------    Podano zly numer !!!    -------- \n";
                break;
        }
    }
}
void del(string filename)
    {   
        int ktore;
        string line;
        ifstream file;
        file.open(filename);
        ofstream trash;
        trash.open(bin);
        cout<<"Ktore zadanie chcesz usunac z To-Do listy?: ";
        cin>>ktore;
        while(getline(file, line))
            if(line_counter(filename)!=ktore)
            {
                trash<<line<<endl;
            }
        trash.close();
        file.close();
        
    }