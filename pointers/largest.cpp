//  to find the largest number entered by the user in dynamically allocated memory

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N;

    cout << "Enter the number of elements:\t";
    cin >> N;

    float *ptr = new float[N];

    for (int i = 0; i < N; i++)
    {
        printf("[%d] Enter a number:\t", i);
        cin >> *(ptr + i);
    }

    float largest = *ptr;

    for (int i = 0; i < N; i++)
        if (largest < *(ptr + i))
            largest = *(ptr + i);

    cout << "\nLargest number is " << largest << endl;

    delete[] ptr;

    return 0;
}