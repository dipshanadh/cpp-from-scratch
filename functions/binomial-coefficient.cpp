// Program to calculate the value of nCr

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int num)
{
    int factorial = 1;

    while (num > 1)
    {
        factorial *= num;
        num--;
    }

    return factorial;
}

int main()
{
    int n, r;

    cout << "Enter two numbers:\t";
    cin >> n >> r;

    int nCr = fact(n) / (fact(n - r) * fact(r));

    cout << "The nCr of " << n << " and " << r << " is " << nCr << endl;

    return 0;
}