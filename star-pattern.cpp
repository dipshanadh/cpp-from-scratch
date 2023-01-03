// Program to print Star pattern

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int rows;

    cout << "Enter the number of rows:\t";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
            cout << "  ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "* ";

        cout << endl;
    }

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= rows - i; j++)
            cout << "  ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}