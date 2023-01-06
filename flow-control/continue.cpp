/*
    Program to accept 5 numbers from users & find their sum
    (negative numbers will be skipped)
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num, sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter a number:\t";
        cin >> num;

        if (num < 0)
            continue;

        sum += num;
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}