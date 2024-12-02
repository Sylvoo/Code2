#include <iostream>

using namespace std;

 class pralka
    {
        public: 
        int nr_programu;
        double tmp_prania;
        char nazwa[80];

        //void pierz(int programy); // składowymi klasy moga tez byc funkcje ! 
        //void wiruj(int minuty);
    };

int main()
{
    pralka czerwona;
    pralka *wsk;
    pralka & ruda = czerwona; // referencja 

    czerwona.tmp_prania = 60; // Isposob

    wsk = &czerwona; // II sposob, wskaznikiem
    wsk -> tmp_prania = 60;

    ruda.tmp_prania = 60; // III sposob, referencją

    pralka beko;
    beko.nr_programu = 5;
    //beko.pierz(5);
    ///////////////////////////////////////////////////////////////////////////////////////////////

    cout<<"dziala XD";



}