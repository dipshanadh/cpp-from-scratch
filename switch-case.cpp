// Program to implement a simple calculator

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num1, num2;
    char opt;

    cout << "Enter a number:\t";
    cin >> num1;

    cout << "Enter another number:\t";
    cin >> num2;

    cout << "Enter an operator (+, -, *, /):\t";
    cin >> opt;

    switch (opt)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 - num2 << endl;
        break;

    case '*':
        cout << num1 * num2 << endl;
        break;

    case '/':
        cout << num1 / num2 << endl;
        break;

    default:
        cout << "Invalid operator!";
        break;
    }

    return 0;
}