// to access elements of an array using a pointer

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N;

    cout << "Enter the size of array:\t";
    cin >> N;

    int arr[N];
    int *ptr = arr;

    for (int i = 0; i < N; i++)
    {
        printf("[%d] Enter a number:\t", i);
        cin >> *ptr;
        ptr++;
    }

    cout << "\nYou entered:" << endl;

    for (int i = 0; i < N; i++)
        cout << *(arr + i) << endl;

    return 0;
}