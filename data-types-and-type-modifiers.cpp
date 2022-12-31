// Including <iostrem> to write write to the standard I/O stream
#include <iostream>

// Not directly using namespace std to avoid evil name clashes
using std::cout;
using std::endl;

int main()
{
    // Declare variable
    int a;

    // Initialize
    a = 10;

    cout << "The size of \"int\" is " << sizeof(a) << endl;

    float b;
    cout << "The size of \"float\" is " << sizeof(b) << endl;

    char c;
    cout << "The size of \"char\" is " << sizeof(c) << endl;

    bool d;
    cout << "The size of \"bool\" is " << sizeof(d) << endl;

    // Type modifier
    short int si;
    long int li;

    cout << "The size of \"short int\" is " << sizeof(si) << endl;
    cout << "The size of \"long int\" is " << sizeof(li) << endl;

    return 0;
}