#include<iostream>
using namespace std;
int main()
{
    // oznacza ze kompilator ma uwazac podczas pobierania wartosci tej zmiennej
    volatile int x; // odsyła do pamieci aby pobrał swierze dane
    // a nie z rejestru bo se uzywal tego przed chwila :)) (leń)
    
    return 0;
}