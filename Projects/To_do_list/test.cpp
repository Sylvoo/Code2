#include<iostream>
#include"dir.hpp"
#include<fstream>
#include<ios>

using namespace std;
int nr;

void clear(string filename)
{   
    ofstream file(filename, ios::trunc);    
}

int main()
{
    clear("content.txt");
}