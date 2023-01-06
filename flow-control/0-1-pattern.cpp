// Program to accept the number of rows & display 0-1 pattern

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
        for (int j = 1; j <= i; j++)
            if ((j + i) % 2 == 0)
                cout << "0 ";
            else
                cout << "1 ";

        cout << endl;
    }

    return 0;
}