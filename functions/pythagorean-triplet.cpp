// to accept three numbers and determine if they are pythagorean triplet

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool check(int x, int y, int z)
{
    int p, b, h;

    if (x > y && x > z)
        h = x, p = y, b = z;
    else if (y > x && y > z)
        h = y, p = z, b = z;
    else
        h = z, p = y, b = x;

    if (h * h == p * p + b * b)
        return true;

    return false;
}

int main()
{
    int a, b, c;

    cout << "Enter three numbers:\t";
    cin >> a >> b >> c;

    if (check(a, b, c))
        cout << "\nPythagorean triplet";
    else
        cout << "\nNot a pythagorean triplet";

    return 0;
}