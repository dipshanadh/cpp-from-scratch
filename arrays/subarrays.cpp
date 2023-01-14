// to accept an array of numbers from user and print all the possible subarrays

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N;

    cout << "Enter the size of the array:\t";
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        printf("[%d] Enter a number: ", i);
        cin >> arr[i];
    }

    cout << "\nPossible subararys:" << endl;

    for (int i = 0; i < N; i++)
        for (int j = i; j < N; j++)
        {
            for (int k = i; k <= j; k++)
                cout << arr[k] << " ";

            cout << endl;
        }

    return 0;
}