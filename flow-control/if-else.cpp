// Program to find if a number is even or odd

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int num;

    cout << "Enter a number:\t";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is an even number";
    }
    else
    {
        cout << num << " is an odd number";
    }

    return 0;
}