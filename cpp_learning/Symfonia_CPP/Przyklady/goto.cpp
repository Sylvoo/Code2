#include<iostream>
using namespace std;
int main()
{   
    for (int i = 0; i <2; i++)
        {
            for(int k = 0; k<2;k++)
            {
                cout<<"POR";
                if (k==1){
                    goto warsaw; // goto to taki break na sterydach 
                }
            }
        }
    warsaw:
    cout<<"klekle"; // po warsaw: dziala wszystko tak samo  
    int palac;
    cin>>palac;
    cout<<palac;

    return 0;
}