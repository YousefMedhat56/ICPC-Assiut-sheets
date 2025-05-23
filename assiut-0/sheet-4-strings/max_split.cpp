#include "iostream"
#include "string"
#include <vector>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int balance = 0;
    vector<string> splits = {};
    string new_split = "";

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'L')
            balance++;
        else if (S[i] == 'R')
            balance--;

        new_split += S[i];

        if (balance == 0)
        {
            splits.push_back(new_split);
            new_split = "";
        }
    }

    cout << splits.size() << endl;
    for (int i = 0; i < splits.size(); i++)
    {
        cout << splits[i] << endl;
    }
    return 0;
}