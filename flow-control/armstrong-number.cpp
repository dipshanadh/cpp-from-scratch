// Program to accept a number from the user and check whether it is armstrong number or not

#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number, rem, sum = 0;

    cout << "Enter  a number:\t";
    cin >> number;

    int copy = number;

    do
    {
        rem = number % 10;
        sum += pow(rem, 3);
        number /= 10;
    } while (number > 0);

    if (copy == sum)
        cout << sum << " is an armstrong number" << endl;
    else
        cout << copy << " is not an armstrong number" << endl;

    return 0;
}