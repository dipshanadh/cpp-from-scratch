// a program that accepts distances in feet-inch system and return their sum

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Distance
{
    int feet, inch;
};

Distance *add(Distance distances[], int N)
{
    Distance *sum = new Distance;

    sum->feet = 0;
    sum->inch = 0;

    for (int i = 0; i < N; i++)
    {
        sum->feet = sum->feet + (distances + i)->feet;
        sum->inch = sum->inch + (distances + i)->inch;
    }

    if (sum->inch >= 12)
    {
        int extra = sum->inch / 12;

        cout << extra << endl;

        sum->feet += extra;
        sum->inch -= (extra * 12);
    }

    return sum;
}

int main()
{
    int N;

    cout << "How many distances are there?\t";
    cin >> N;

    Distance distances[N];

    for (int i = 0; i < N; i++)
    {
        cout << "\nEnter distance " << i + 1 << endl;

        cout << "Enter feet: ";
        cin >> (distances + i)->feet;

        cout << "Enter inch: ";
        cin >> (distances + i)->inch;
    }

    Distance *sum = add(distances, N);

    cout << "\nSum of distances = " << sum->feet << " feet " << sum->inch << " inch";

    delete sum;

    return 0;
}
