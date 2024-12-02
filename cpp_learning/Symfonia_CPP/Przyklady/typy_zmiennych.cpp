#include<iostream>

using namespace std;

int main()
{      
    int i;
    int k, n, m, j;

    i = 5;
    k = i+010; // osemkowy == 13dziesietnie czyli 5+8
    int z = i+10;

    cout<<k<<endl;
    cout<<z<<endl;

    m = 100; //dziesietny
    n = 0x100; //szesnastkowy
    j = 0100; //osemkowy

    cout<<"---------------------"<<endl;
    cout<<m<<endl;
    cout<<n<<endl;
    cout<<j<<endl;

    cout<<"m + n + j = "<<(m+n+j)<<endl;



    return 0;
}