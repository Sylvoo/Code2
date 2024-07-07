#include<iostream>

using namespace std;

int main()
{   
    int b = 200;
    int c = 200L; //typ long
    int d = 017;
    int e = 0xff;
    long double f = 4.8412348179384712973424;
    unsigned char g = 'f';
    int z = 4uL; // i teraz bedzie unsigned long
    cout<<sizeof(b)<<endl;
    cout<<b<<endl;
    cout<<sizeof(c)<<endl;
    cout<<c<<endl;
    cout<<sizeof(d)<<endl;
    cout<<d<<endl;
    cout<<sizeof(e)<<endl;
    cout<<e<<endl;
    cout<<sizeof(f)<<endl;
    cout<<f<<endl;
    cout<<sizeof(g)<<endl;
    cout<<g<<endl;
    cout<<sizeof(z)<<endl;
    cout<<z<<endl;

    return 0;
}