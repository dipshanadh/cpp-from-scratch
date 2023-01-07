// Program to input an array of numbers and search for a key

#include <iostream>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;

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

    cout << "The index of the entered key is " << linearSearch(arr, n, key);

    return 0;
}