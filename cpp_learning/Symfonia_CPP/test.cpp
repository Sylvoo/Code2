#include<iostream>

using namespace std;

void strcp(char tab[], char tabb[]);

int main()
{
    //char zdanie[50] = {"kot w butach"};
    //puts(zdanie);

    char tab1[1] = {'k'};
    char tab2[3] = {'p','a'};

    strcp(tab1, tab2);
    cout<<tab1<<endl;
    cout<<tab2<<endl;
    cout<<sizeof(tab1);
}


 void strcp(char tabp[], char tabpp[])
    {
        for(int i = 0;;i++)
        {
            tabp[i] = tabpp[i];
            if (tabp[i]==0)
            {
                break;
            }
        }
    }