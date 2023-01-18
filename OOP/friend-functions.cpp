// add numbers of two different classes using friend functions

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// forward declaration
class ClassB;

class ClassA
{
public:
    // constructor to initialize numA to 10
    ClassA() : numA(10) {}

private:
    int numA;

    // friend function declaration
    friend int add(ClassA, ClassB);
};

class ClassB
{
public:
    // constructor to initialize numB to 5
    ClassB() : numB(5) {}

private:
    int numB;

    // friend function declaration
    friend int add(ClassA, ClassB);
};

// access members of both class
int add(ClassA objectA, ClassB objectB)
{
    return (objectA.numA + objectB.numB);
}

int main()
{
    ClassA objectA;
    ClassB objectB;

    cout << "Sum: " << add(objectA, objectB);

    return 0;
}