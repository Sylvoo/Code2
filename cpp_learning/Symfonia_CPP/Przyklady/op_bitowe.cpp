#include<iostream>
#include<bitset> // biblioteka potrzebna 

using namespace std;

int main()
// "<<" Przesuniecie w lewo     DZIALAJA NA LICZBAC TYPU CALKOWITEGO
{   
    short int a = 0x40f2;
    short int w;

    w = a << 3;
    cout<<"-------\" << \"--------"<<endl;
    bitset<16>bits_a(a);
    cout<<bits_a<<endl; // 0100 0000 1111 0010 (terminal)
    bitset<16>bits_w(w); // 0000 0111 1001 0000 (terminal)  czyli przesuwa to wyzej o 3 w lewo, uzupelnia bity zerami (trzy ostatnie)
    cout<<bits_w;
    cout<<"\n-------\" >> \"--------"<<endl;

// ">>" analogicznie przesuwa tylko w druga strone, w prawo ale 
// jesli nieujemna to uzupelni bity z lewego brzegu zerami
// ale jesli ujemna to zalezy od komputera
    unsigned short int d = 0x0ff0;
    unsigned short int r;
    r = d>>3;
    bitset<16>dd(d); // 0000 1111 1111 0000
    cout<<dd<<endl;
    bitset<16>rr(r); // 0000 0001 1111 1110 z lewej strony uzupelnilo zerami
    cout<<rr<<endl;

    short int p, o, u, y;
    short int m = 0x0f0f;
    short int k = 0x0ff0;
    bitset<16>mm(m);
    bitset<16>kk(k);
    cout<<" -- m --> "<<mm; // 0000 1111 0000 1111
    cout<<"\n -- k --> "<<kk; // 0000 1111 1111 0000
    cout<<"\n-------\" & \"--------"<<endl;
    p = m & k;
    bitset<16>aa(a); // 0000 1111 0000 0000 - jesli w obu 1 to 1 jak nie to 0
    cout<<aa;

    cout<<"\n-------\" | \"--------"<<endl;
    o = m | k;
    bitset<16>oo(o); // 0000 1111 1111 1111 - jesli w chociaz jednym 1 to 1 jak nie to 0
    cout<<oo;

    cout<<"\n-------\" ~ \"--------"<<endl;
    u = ~m;
    bitset<16>uu(u); // 1111 0000 1111 0000, czyli odwrotnosc m = 0000 1111 0000 1111
    cout<<uu;

    cout<<"\n-------\" ^ \"--------"<<endl;
    y = m ^ k;
    bitset<16>yy(y); // 0000 0000 1111 1111 - jesli oba sie roznia to 1, jesli takie same to 0
    cout<<yy;

    return 0;
}