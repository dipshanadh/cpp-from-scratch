// to demonstrate the working of destructors in C++

#include <iostream>

using std::cout;
using std::endl;

class Employee
{
private:
    static int count;

public:
    // runs when an object is created
    Employee()
    {
        count++;
    }

    // runs when the object is destroyed
    ~Employee()
    {
        count--;
    }

    static int getCount()
    {
        return count;
    }
};

int Employee::count; // Default value is 0

int main()
{
    Employee e1;

    cout << "Count: " << Employee::getCount() << endl; // 1

    // e2, e3 and e4 gets destroyed when the block ends
    {
        Employee e2, e3, e4;

        cout << "Count: " << Employee::getCount() << endl; // 4
    }

    cout << "Count: " << Employee::getCount() << endl; // 1

    return 0;
}