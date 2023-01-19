// to illustrate multilevel inheritance in C++

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Animal
{
public:
    Animal()
    {
        cout << "I am an animal!" << endl;
    }
};

class Mammal : public Animal
{
public:
    Mammal()
    {
        cout << "I am a mammal!" << endl;
    }
};

class Cat : public Mammal
{
public:
    Cat()
    {
        cout << "I am a cat!" << endl;
    }
};

class Tiger : public Cat
{
public:
    Tiger()
    {
        cout << "I am a tiger!" << endl;
    }
};

int main()
{
    Tiger t;

    return 0;
}

/*
Output:

I am an animal!
I am a mammal!
I am a cat!
I am a tiger!
*/