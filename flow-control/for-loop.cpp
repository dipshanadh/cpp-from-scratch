// Program to calculate the sum of numbers from 1 to n

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n, sum = 0;

    cout << "Enter a number:\t";
    cin >> n;

    for (int i = 1; i <= n; i++)
        sum += i;

    cout << "The sum is: " << sum;

    return 0;
}