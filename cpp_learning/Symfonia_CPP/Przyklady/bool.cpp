#include<iostream>
using namespace std;

int main()
{
    int wiek;
    bool niepelnoletni;

    cout<<"Wprowadz twoj wiek: ";
    cin>>wiek;

    if (wiek < 18)
    {
        niepelnoletni == true;
    }
    else
    {
        niepelnoletni == false;
    }

    if (niepelnoletni == false) 
    {
        cout<<"Jestes pelnoletni"<<endl;
    }
    else cout<<"Jestes niepelnoletni";

}