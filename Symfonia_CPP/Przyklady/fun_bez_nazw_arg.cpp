#include<iostream>

using namespace std;

int fun(int, int); // deklarowac mozna bez nazwy

int main()
{
    fun(4,5);

}
int fun(int r , int k ) // definiowac trzeba z nazwa argumentow
{
    cout << r << endl;
    cout << k;
}
