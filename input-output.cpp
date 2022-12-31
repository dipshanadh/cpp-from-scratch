// Program to calculate sum of two numbers

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int num1, num2;

    cout << "Enter num1:\t";
    cin >> num1;

    cout << "Enter num2:\t";
    cin >> num2;

    int sum = num1 + num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum;

    return 0;
}