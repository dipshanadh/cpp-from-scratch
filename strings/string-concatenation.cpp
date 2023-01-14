// to accept two strings and concatenate them

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str1, str2, result;

    cout << "Enter string str1:\t";
    getline(cin, str1);

    cout << "Enter string str2:\t";
    getline(cin, str2);

    result = str1 + str2;

    cout << "\nResultant string = " << result << endl;

    return 0;
}