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
       case 1:
       Add("content.txt");
       Show("content.txt");
       line_counter("content.txt");
    }
    return 0;
}
