// to accept N words from user and sort them in lexicographical order (dictionary order)

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ws;

int main()
{
    int N;

    cout << "Enter the number of words:\t";
    cin >> N;

    string words[N], temp;

    cout << "\n";

    for (int i = 0; i < N; i++)
    {
        cout << "Enter word " << i + 1 << ":\t";
        getline(cin >> ws, words[i]);
    }

    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (words[i] > words[j])
            {
                temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }

    cout << "\nIn lexicographical order (dictionary order):\n"
         << endl;

    for (int i = 0; i < N; ++i)
        cout << words[i] << endl;

    return 0;
}