// to demonstrate functions templates in C++

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

template <typename T>
T add(T num1, T num2)
{
    return num1 + num2;
}

int main()
{
    int result1;
    double result2;

    // calling with integer parameters
    result1 = add<int>(5, 8);
    cout << "5 + 8 = " << result1 << endl;

    // calling with float parameters
    result2 = add<float>(2.8, 6.5);
    cout << "2.5 + 6.5 = " << result2 << endl;

    return 0;
}