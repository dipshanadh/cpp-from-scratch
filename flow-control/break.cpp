// Program to print all the prime numbers from num1 and num2

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num1, num2;

    cout << "Enter num1:\t";
    cin >> num1;

    cout << "Enter num2:\t";
    cin >> num2;

    for (int i = num1; i <= num2; i++)
    {
        int j;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }

        if (j == i)
            cout << i << endl;
    }

    return 0;
}