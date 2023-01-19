// to demonstrate dynamic creation of objects and the use of pointers with objects

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Animal
{
protected:
    string type;

public:
    Animal() : type("none") {}

    Animal(string type)
    {
        this->type = type;
    }

    string getType() { return type; }
};

class Dog : public Animal
{
public:
    Dog() : Animal("mammal") {}
};

class Snake : public Animal
{
public:
    Snake() : Animal("reptile") {}
};

void print(Animal *ani)
{
    cout << "Animal type: " << ani->getType() << endl;
}

int main()
{
    Animal *a1 = new Animal();
    Dog *d1 = new Dog();
    Snake *s1 = new Snake();

    print(a1);
    print(d1);
    print(s1);

    return 0;
}