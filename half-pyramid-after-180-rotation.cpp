// Program to print half pyramid after 108 deg. rotation

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
        for (int j = 1; j <= num; j++)
            if (j <= num - i)
                cout << "  ";
            else
                cout << "* ";

        cout << endl;
    }

    return 0;
}