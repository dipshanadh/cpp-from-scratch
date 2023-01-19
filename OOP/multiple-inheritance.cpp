// to illustrate multiple inheritance and ambiguity in multiple inheritance in C++

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Base1
{
public:
    Base1()
    {
        cout << "Base1 class is called" << endl;
    }

    void print()
    {
        cout << "Printing from base1 class" << endl;
    }
};

class Base2
{
public:
    Base2()
    {
        cout << "Base2 class is called" << endl;
    }

    void print()
    {
        cout << "Printing from base2 class" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    Derived()
    {
        cout << "Derived class is called" << endl;
    }
};

int main()
{
    Derived d1;

    cout << "\n";

    d1.Base1::print();
    d1.Base2::print();

    return 0;
}