#include <iostream>
using namespace std;

int value_at(int n)
{
    int a = 0;
    int b = 1;
    int sum;
    if (n == 1)
    {
        return a;
    }
    else if (n == 2)
    {
        return b;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }
        return sum;
    }
}

int main()
{

    int n;
    cout << "Which position's value do you want to know in fibonacci series? ";
    cin >> n;
    cout << "The value at position " << n << " is: " << value_at(n);
    return 0;
}