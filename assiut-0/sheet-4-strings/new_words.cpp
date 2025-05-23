#include "iostream"
#include "string"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> charCount = {{'e', 0},
                                {'g', 0},
                                {'y', 0},
                                {'p', 0},
                                {'t', 0}};

    char charArr[5] = {'e', 'g', 'y', 'p', 't'};

    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        char letter = S[i];

        // check if letter is uppercase
        if (letter < 97)
        {
            // convert to lowercase
            letter += 32;
        }

        if (letter == 'e' ||
            letter == 'g' ||
            letter == 'y' ||
            letter == 'p' ||
            letter == 't')
        {
            charCount[letter] += 1;
        }
    }

    // get the letter with the minimum count
    int minCount = charCount['e'];
    for (int i = 1; i < 5; i++)
    {
        int count = charCount[charArr[i]];
        if (minCount > count)
            minCount = count;
    }

    cout << minCount;

    return 0;
}