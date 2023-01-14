// Program to accept the number of num & print the number pattern

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num;

    cout << "Enter the number of rows:\t";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= num - i; j++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << j << " ";

        cout << endl;
    }

    return 0;
}