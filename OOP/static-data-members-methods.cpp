// to demonstrate static data members and methods in C++

#include <iostream>

using std::cout;
using std::endl;

class Employee
{
private:
    static int count;

public:
    Employee()
    {
        id = ++count;
    }

    int id;

    static int getCount()
    {
        return count;
    }
};

int Employee::count; // Default value is 0

int main()
{
    Employee e1, e2, e3;

    cout << "Count: " << Employee::getCount() << endl; // 3

    return 0;
}