// Program to accept rows and columns from a user and print a hollow rectange pattern

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int rows, columns;

    cout << "Enter the no. of rows:\t\t";
    cin >> rows;

    cout << "Enter the no. of columns:\t";
    cin >> columns;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows)
                cout << "*";
            else if (j == 1 || j == columns)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}