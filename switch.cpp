#include <iostream>
using namespace std;

int main()
{

    int amount = 1330;
    int checker = 100;
    int notes = 0;
    while (amount != 0)
    {
        switch (checker)
        {
        case 100:
        {
            notes = amount / 100;
            cout << notes << " - 100 rupees notes." << endl;
            checker = 20;
            amount = amount - (notes * 100);
        }
        break;
        case 20:
        {
            notes = amount / 20;
            cout << notes << " - 20 rupees notes." << endl;
            checker = 1;
            amount = amount - (notes * 20);
        }
        break;
        case 1:
        {
            notes = amount;
            cout << notes << " - 1 rupees notes." << endl;
            amount = 0;
        }
        break;
        }
    }
    return 0;
}