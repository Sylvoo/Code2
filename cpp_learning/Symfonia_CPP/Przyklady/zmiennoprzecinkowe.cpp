#include<iostream>

using namespace std;

int main()
{   
    double k = -12.;
    int z = 12.5; // zaokragla do pelnej liczby w dol
    int x = 12.9;
    cout<<k<<endl;
    cout<<z<<endl;
    cout<<x<<endl;

    unsigned long long zz = 12e2;
    cout<<zz<<endl;

    float pp = 4e13F; // lub f
    cout<<sizeof(pp)<<endl;
    cout<<pp<<endl;
    
    return 0;
}