#include <iostream>

using namespace std;

class car
    {
        private:
        int horsePower;
        int num_VIN = 2454796;

        public:
        int rocznik = 2004;
        int show_VIN(int a)
        {
            if (a == 1)
            {
                cout<<num_VIN;
            }
        }
    };

    
int main()
{
    car fiat;
    fiat.show_VIN(1);

}