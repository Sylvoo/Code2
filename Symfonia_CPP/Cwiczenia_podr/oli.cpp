#include<iostream>

using namespace std;

int main()
{
  int ascii[] = {87, 105, 100, 122, 105, 115, 122, 32, 116, 111, 32, 112, 105, 101, 107, 110, 101, 32, 110, 105, 101, 98, 111, 63, 32, 80, 114, 122, 121, 32, 116, 111, 98, 105, 101, 32, 116, 111, 32, 67, 104, 117, 106, 32, 58, 42};
    
    for(int code : ascii) {
        if (true) {
            cout << static_cast<char>(code);
        }
    }
    return 0;
}