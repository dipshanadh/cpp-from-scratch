// Program to print half pyramid using numbers

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num;

    cout << "Enter a number:\t";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << i << " ";

        cout << endl;
    }

    return 0;
}