// Program to accept N and print the following pattern

/*
    1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int num)
{
    int factorial = 1;

    while (num > 1)
    {
        factorial *= num;
        num--;
    }

    return factorial;
}

int main()
{
    int num;

    cout << "Enter a number:\t";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << fact(i) / (fact(i - j) * fact(j)) << " ";

        cout << endl;
    }

    return 0;
}