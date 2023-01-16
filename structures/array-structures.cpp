// to store information of students in structure

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Student
{
    char name[50];
    int roll;
    float marks;
};

void display(Student[], int);

int main()
{
    int N;

    cout << "Enter the number of students:\t";
    cin >> N;

    Student students[N];

    cout << "\nEnter the details of students:" << endl;

    for (int i = 0; i < N; ++i)
    {
        students[i].roll = i + 1;

        printf("\nFor roll no. %d:\n", students[i].roll);

        cout << "Enter name: ";
        cin >> students[i].name;

        cout << "Enter marks: ";
        cin >> students[i].marks;
    }

    cout << "\nDisplaying information:" << endl;

    display(students, N);

    return 0;
}

void display(Student students[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        printf("\nFor roll no. %d:\n", students[i].roll);
        cout << "Name: " << students[i].name << endl;
        cout << "Marks: " << students[i].marks << endl;
    }
}