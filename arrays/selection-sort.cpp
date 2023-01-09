// Program to input an array of numbers and return the sorted array

#include <iostream>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n, key;

    cout << "Enter the size of the array:\t";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("[%d] Enter a number: ", i);
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            int temp = arr[j];

            if (arr[j] < arr[i])
            {
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    return 0;
}