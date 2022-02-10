#include <iostream>
using namespace std;

int value(int n)
{
    return ((3 * n) + 7);
}

int main()
{

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The value is: " << value(n);
    return 0;
}