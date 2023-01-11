// Program to input an array of numbers and return the sorted array using bubble sort

#include <iostream>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;

    cout << "Enter the size of the array:\t";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("[%d] Enter a number: ", i);
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
        {
            int temp = arr[j];

            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    cout << "Sorted array:" << endl;

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    return 0;
}