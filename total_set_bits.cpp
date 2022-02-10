#include <iostream>
using namespace std;

int set_bits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int total_set_bits(int a, int b)
{
    return set_bits(a) + set_bits(b);
}

int main()
{

    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "The total number of set bits is: " << total_set_bits(a, b);
    return 0;
}