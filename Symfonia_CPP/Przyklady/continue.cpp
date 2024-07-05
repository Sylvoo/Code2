#include<iostream>
using namespace std;

int main()
{   
    for (int k=0; k<12; k++)
    {
        cout<<"A";
        if (k>2)continue; // Jak k>2 to juz pomija cout<<"b"; i leci do nastepnej iteracji
        cout<<"b";
    }

    return 0;
}