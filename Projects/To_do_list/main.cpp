#include<iostream>
#include"dir.hpp"
#include<fstream>
#include<ios>

using namespace std;
int nr;

int main()
{
    fstream plik;
    nr = menu();
    switch(nr)
    {
        case 0:
            show(file);
    }
}