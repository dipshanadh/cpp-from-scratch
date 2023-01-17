// to illustrate the working of public and private access modifiers in C++

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Room
{
    private:
        float length;
        float breadth;
        float height;
    
    public:
        void initData(float, float, float);
    
        float getArea()
        {
            return length * breadth;
        }
    
        float getVolume()
        {
            return length * breadth * height;
        }
};

void Room ::initData(float len, float brdth, float hgth)
{
    length = len;
    breadth = brdth;
    height = hgth;
}

int main()
{
    float l , b ,h;

    Room room1;

    cout << "Enter length of room:\t";
    cin >> l;

    cout << "Enter breadth of room:\t";
    cin >> b;

    cout << "Enter height of room:\t";
    cin >> h;

    room1.initData(l,b,h);

    cout << "The area and volume of the room are " << room1.getArea() << " and " << room1.getVolume() << " respectively." << endl;

    return 0;
}