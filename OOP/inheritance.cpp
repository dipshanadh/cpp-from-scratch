// to demonstrate inheritance

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// base class
class Animal
{
private:
    string color;

protected:
    string type;

public:
    Animal(string color)
    {
        this->color = color;
    }

    void eat()
    {
        cout << "Eating..." << endl;
    }

    void sleep()
    {
        cout << "Sleeping..." << endl;
    }

    string getType()
    {
        return type;
    }

    string getColor()
    {
        return color;
    }
};

// derived class
class Dog : public Animal
{

public:
    Dog(string color) : Animal(color)
    {
        this->type = "mammal";
    }

    void bark()
    {
        cout << "Bhaw Bhaw..." << endl;
    }
};

int main()
{
    Dog dog1("brown");

    dog1.eat();
    dog1.sleep();

    dog1.bark();

    cout << "\nThe type and color of dog1 is " << dog1.getType() << " and " << dog1.getColor();
}