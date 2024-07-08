#include<iostream>
using namespace std;
int main()
{   
    // chyba po prostu nazwa i jaki numerek odpowiada nazwie na liscie
    enum akcja // mozna stworzyc enum bez nazwy 
    {
        start_pomiaru = 0,
        odczyt = 1,
        zmiana = 54,
        zniszczenie = 55
    }; 
    
    akcja co_robic;

    co_robic = odczyt; // nie mozna np co_robic = 1 lub 55 itd.
    cout<<co_robic<<endl;// terminal: 1

    akcja czerwo;
    czerwo = zmiana;
    cout<< zmiana<<endl; // terminal: 54

    enum { // tez jest git 
        kokot, // domyslnie ustawia od 0
        kuku,  // 1
               // itd
    };

    cout<<kokot; // terminal: 0

    cout<<"\n-----------------"<<endl;
    cout<<sizeof(kokot)<<endl;
    cout<<sizeof(akcja);
    return 0;
}

