// Program to print Palindromic pattern

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int rows;

    cout << "Enter the no. of rows:\t";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j > 1; j--)
            if (j <= i)
                cout << j << " ";
            else
                cout << "  ";

        for (int j = 1; j <= i; j++)
            cout << j << " ";

        cout << endl;
    }

    return 0;
}