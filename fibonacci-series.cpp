// Program to print fibonacci series to n-term

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void fib(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for (int i = 1; i <= n; i++)
    {
        cout << t1 << endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main()
{
    int n;

    cout << "Enter a number:\t";
    cin >> n;

    fib(n);

    return 0;
}