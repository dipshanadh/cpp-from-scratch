// Program to swap the value of two integers without using third vairable

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b;

    cout << "Enter first number:\t";
    cin >> a;

    cout << "Enter second number:\t";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping first number:" << endl;
    cout << "First number:\t" << a << endl;
    cout << "Second number:\t" << b << endl;

    return 0;
}