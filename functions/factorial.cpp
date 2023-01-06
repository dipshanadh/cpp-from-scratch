// Program to calculate the factorial of the entered number

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int n)
{
    int factorial = 1;

    while (n > 1)
    {
        factorial *= n;
        n--;
    }

    return factorial;
}

int main()
{
    int num;

    cout << "Enter a number:\t";
    cin >> num;

    cout << "The factorial of the entered number is " << fact(num) << endl;

    return 0;
}