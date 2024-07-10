#include<iostream>

using namespace std;

int main()
{/////////////////////////// stare 
    int x = 0xffff;
    char y;
    y  = (char)x;
    
//////////////////////////// nowe
    // static_cast<nazwa_innego_typu>(wyrazenie)
    double pi = 3.14;
    int m;
    m = static_cast<int>(pi);

    // const_cast<typ_bez_const>(wyrazenie_o_typie_const) - uzywa sie przy wskaznikach itp
    // usuwa i nadaje const

    // dynamic_cast // ciul wie narazie 

    // reinterpret_cast<>() - tez ze wskaznikami 







    return 0;
}