#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> numbers;

     numbers.push_back(20); // dodaj na koniec

     numbers.push_back(45);

     cout<<numbers[0]<<endl;
     cout<<numbers[1]<<endl;

     numbers.push_back(200);
     cout<<"---"<<endl;
     cout<< numbers.back()<<endl; // ostatni element 
     cout<< numbers.front()<<endl; // pierwszy element 

    cout<< numbers.size()<<endl;
    cout<< numbers.capacity()<<endl;
}

