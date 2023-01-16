// to create a access members of a union

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    union book
    {
        int pages;
        double price;
    } b1, b2;

    book *bptr = &b2;

    b1.pages = 250;
    b1.price = 521.26;

    cout << "Pages in b1: " << b1.pages << endl; // 0 or random

    bptr->pages = 300;
    bptr->price = 799.99;

    cout << "Price of b2: " << bptr->price << endl; // 799.99

    cout << "Size of b1: " << sizeof(b1); // 8 .i.e. size of largest element

    return 0;
}