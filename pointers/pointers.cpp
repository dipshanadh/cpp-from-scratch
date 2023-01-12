#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a = 10;
    int *aptr = &a;

    cout << *aptr << endl; // 10

    *aptr = 20;

    cout << a << endl;    // 20
    cout << aptr << endl; // 0x61ff08

    return 0;
}