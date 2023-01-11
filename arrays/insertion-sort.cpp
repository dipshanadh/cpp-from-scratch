// Program to input an array of numbers and return the sorted array (using insertion sort)

#include <iostream>

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

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];

        int j = i - 1;

        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    return 0;
}