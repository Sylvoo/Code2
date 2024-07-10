#include<iostream>
using namespace std;

int main()
{   // % - modulo, reszta z dzielenia

    for (int i = 0; i<64; i++)
    {
        if (i%8) // fajen tabelka 
        {
            cout<<"\t"; //tabulator
        }
        else{cout<<"\n";} // znak nowa linia 
        cout<<i;
    }

    return 0;
}