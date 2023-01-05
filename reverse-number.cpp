// Program to input a number from the user and output the reverse of it

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num, rem, reversed = 0;

    cout << "Enter a number:\t";
    cin >> num;

    do
    {
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num /= 10;
    } while (num > 0);

    cout << "The reversed number is: " << reversed << endl;

    return 0;
}