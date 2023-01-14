// input a character array (string) and print it

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char str[100];

    cout << "Enter your name: ";
    cin >> str;
    cout << "Welcome " << str << endl;

    cout << "\nEnter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    return 0;
}