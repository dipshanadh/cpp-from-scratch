// Program to accept the number of rows & print floyd's triangle

/*
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int rows, counter = 1;

    cout << "Enter the number of rows:\t";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << counter++ << " ";

        cout << endl;
    }

    return 0;
}