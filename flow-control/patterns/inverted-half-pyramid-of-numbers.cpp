// Program to accept number of rows and print inverted pattern

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
        for (int j = 1; j <= rows + 1 - i; j++)
            cout << j << " ";

        cout << endl;
    }

    return 0;
}