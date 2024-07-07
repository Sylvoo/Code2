#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double promien, pole;
    double pi = 3.14;
    
    cout<<"Podaj promien: ";
    cin>>promien;
    pole = pow(promien,2)*pi;

    cout<<"Pole to: "<<pole<<endl;

    return 0;
}