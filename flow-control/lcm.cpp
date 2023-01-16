// to find the LCM of two numbers

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num1, num2, max;

    cout << "Enter num1:\t";
    cin >> num1;

    cout << "Enter num2:\t";
    cin >> num2;

    max = num1 > num2 ? num1 : num2;

    do
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            cout << "\nLCM: " << max;
            break;
        }
        else
            max++;
    } while (true);

    return 0;
}