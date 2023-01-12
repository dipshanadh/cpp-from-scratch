// Program to swap the value of two integers without using third vairable (using pointers)

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    cout << "Enter first number:\t";
    cin >> a;

    cout << "Enter second number:\t";
    cin >> b;

    swap(&a, &b);

    cout << "\nAfter swapping," << endl;
    cout << "First number:\t" << a << endl;
    cout << "Second number:\t" << b << endl;

    return 0;
}