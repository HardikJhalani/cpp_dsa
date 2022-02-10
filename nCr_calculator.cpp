#include <iostream>
using namespace std;

// this function returns the factorial of a given number
int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

// this function returns the value of nCr
int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);

    return numerator / denominator;
}

int main()
{

    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    cout << "The value of " << n << "C" << r << " is: " << nCr(n, r) << endl;
    return 0;
}