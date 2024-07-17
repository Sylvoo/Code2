#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    ifstream inputFile("content.txt", ios::in);
    int num_line = 0;
    string line;
    cout<<"File content: "<<endl;
    while(getline(inputFile, line))
    {
        num_line ++;
        cout<<num_line<<". "<<line<<endl;
    }
    inputFile.close();
    return 0;
}