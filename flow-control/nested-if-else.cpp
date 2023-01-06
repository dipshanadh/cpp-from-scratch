// Program to find the greatest among three numbers

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a, b, c;

    cout << "Enter three numbers:\t";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
            cout << a << " is the greatest";
        else
            cout << c << " is the greatest";
    }
    else
    {
        if (b > c)
            cout << b << " is the greatest";
        else
            cout << c << " is the greatest";
    }

    return 0;
}