#include<iostream>
using namespace std;
int main()
{   // jak bedziemy uzywac zmiennej bardzo duzo razy 
    register int x = 10; // kompilator daje znak ze zalezy mu na szybkim dostepie
    // i przechowuje zmienna w rejestrze, gdzie jest niemal natychmiastowy dostep 
    return 0; // Nie ma adresu w pamieci, bo jest w rejestrze

}