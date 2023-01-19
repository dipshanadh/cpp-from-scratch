// to demonstrate the use of virtual function

#include <iostream>

using std::cout;
using std::endl;

class Base
{
public:
    virtual void print()
    {
        cout << "Printing from the base class" << endl;
    }
};

class Derived : Base
{
public:
    void print() override
    {
        cout << "Printing from the derived class" << endl;
    }
};

int main()
{
    Base b1;
    Derived d1;

    b1.print(); // Printing from the base class
    d1.print(); // Printing from the derived class
}
