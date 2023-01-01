// Program to accept numbers from a user until a negative number is entered

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;

    cout << "Enter a number:\t";
    cin >> n;
    cout << "You entered: " << n << endl;

    while (!(n < 0))
    {
        cout << "Enter a number:\t";
        cin >> n;
        cout << "You entered: " << n << endl;
    }

    cout << "Exiting..." << endl;

    return 0;
}