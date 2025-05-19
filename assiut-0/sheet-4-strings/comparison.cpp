#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string word;
    cin >> word;

    string smallest = word;

    for (int i = 1; i < word.size(); ++i)
    {
        string X = word.substr(0, i); // First part.
        string Y = word.substr(i);    // Second part.

        // Sort
        sort(X.begin(), X.end());
        sort(Y.begin(), Y.end());

        // Concatenate
        string concatenated = X + Y;

        if (concatenated < smallest)
        {
            smallest = concatenated;
        }
    }

    cout << smallest << endl;
    return 0;
}
