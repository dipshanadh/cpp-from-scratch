// Program to input an array of numbers and search for a key (using binay search)

#include <iostream>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;

int binaySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return -1;
}

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

    cout << "\nEnter the key to find:\t";
    cin >> key;

    cout << "The index of the entered key is " << binaySearch(arr, n, key);

    return 0;
}