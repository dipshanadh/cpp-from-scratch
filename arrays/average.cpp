// Progarm to accept N numbers and calculate their average (utilizing arrays)

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

float avg(int numbers[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += numbers[i];

    float average = (float)sum / size;

    return average;
}

int main()
{
    int size;

    cout << "Enter the size of the array:\t";
    cin >> size;

    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << ". Enter a number: ";
        cin >> numbers[i];
    }

    cout << "The average of the entered numbers is " << avg(numbers, size) << endl;

    return 0;
}