// to illustrate the working of constructors and also passing objects to functions

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Room {
    private:
        float length;
        float breadth;
        float height;

    public:
        // Parameterized constructor to initialize variables
        Room(float l, float b, float h) {
            length = l;
            breadth = b;
            height = h;
        }

        float getArea() {
            return length * breadth;
        }

        float getVolume() {
            return length * breadth * height;
        }
};

float getAvgArea(Room, Room);
float getAvgVolume(Room, Room);

int main() {
    int N;

    Room room1(12, 10, 9);
    Room room2(10, 12, 10);

    cout << "Average area:\t" << getAvgArea(room1, room2) << endl;
    cout << "Average volume:\t" << getAvgVolume(room1, room2) << endl;
}

float getAvgArea(Room r1, Room r2) {
    int sum = r1.getArea() + r2.getArea();

    return sum / 2;
}

float getAvgVolume(Room r1, Room r2) {
    int sum = r1.getVolume() + r2.getVolume();

    return sum / 2;
}