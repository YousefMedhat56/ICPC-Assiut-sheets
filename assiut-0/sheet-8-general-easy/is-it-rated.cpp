#include "iostream"
#include <vector>

using namespace std;

int main()
{
    int participants;
    cin >> participants;

    vector<int> ratings_after = {};

    bool isRated = false;
    for (int i = 0; i < participants; i++)
    {
        int scoreBefore, scoreAFter;
        cin >> scoreBefore >> scoreAFter;
        if (scoreBefore - scoreAFter != 0)
        {
            isRated = true;
            break;
        }
        ratings_after.push_back(scoreAFter);
    }
    if (isRated)
    {
        cout << "rated";
    }
    else
    {
        bool isUnRated = false;

        for (int i = 0; i < participants - 1; i++)
        {
            if (ratings_after[i] < ratings_after[i + 1])
            {
                cout << "unrated";
                isUnRated = true;
                break;
            }
        }
        if (!isUnRated)
            cout << "maybe";
    }

    return 0;
}