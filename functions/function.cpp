// Program to print all the prime numbers from num1 and num2 (using functions)

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool isPrime(int num)
{
    for (int j = 2; j < num; j++)
        if (num % j == 0)
            return false;

    return true;
}

int main()
{
    int num1, num2;

    cout << "Enter num1:\t";
    cin >> num1;

    cout << "Enter num2:\t";
    cin >> num2;

    for (int i = num1; i <= num2; i++)
        if (isPrime(i))
            cout << i << endl;

    return 0;
}