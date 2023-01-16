// to store information of a student in structure

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Student
{
    char name[20];
    int roll;
    float marks;
};

void display(Student);

int main()
{
    Student student;

    cout << "\nEnter the details of students:" << endl;

    cout << "Enter roll no.: ";
    cin >> student.roll;

    cout << "Enter name: ";
    cin >> student.name;

    cout << "Enter marks: ";
    cin >> student.marks;

    cout << "\nDisplaying information:" << endl;

    display(student);

    return 0;
}

void display(Student student)
{
    cout << "Roll no.: " << student.roll << endl;
    cout << "Name: " << student.name << endl;
    cout << "Marks: " << student.marks << endl;
}