// Program to accept the number of rows & print the butterfly pattern

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int rows;

    cout << "Enter the number of rows:\t";
    cin >> rows;

    int cols = rows * 2;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (j <= i)
                cout << "* ";
            else if (j > cols - i)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (j <= i)
                cout << "* ";
            else if (j > cols - i)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}