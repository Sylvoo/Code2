#include<iostream>
using namespace std;
int main()
{
    int ile;

    cout<<"Ile gwiazdek ma miec kapitan? ";
    cin>>ile;
    cout<<"\n No to je narysujmy ladnie :) "<<endl;

    while(ile){
        cout<<"* ";
        ile -= 1;
    }
    return 0;
}