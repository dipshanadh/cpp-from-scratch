// Program to accept a number from user and print an inverted half pyramid

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num;

    cout << "Enter a number:\t";
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}