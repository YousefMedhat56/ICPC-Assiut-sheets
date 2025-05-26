#include "iostream"
#include "string"
using namespace std;

int main()
{
    int size, score = 0;
    cin >> size;

    string S;
    cin >> S;

    for (int i = 0; i < size; i++)
    {
        if (S[i] == 'V')
        {
            score += 5;
        }
        else if (S[i] == 'W')
        {
            score += 2;
        }
        else if (S[i] == 'X' && i < size - 1)
        {
            i++;
        }
        else if (S[i] == 'Y' && i < size - 1)
        {
            S.push_back(S[i + 1]);
            i++;
            size++;
        }
        else if (S[i] == 'Z' && i < size - 1)
        {
            if (S[i + 1] == 'V')
            {
                score /= 5;
                i++;
            }
            else if (S[i + 1] == 'W')
            {
                score /= 2;
                i++;
            }
        }
    }

    cout << score;

    return 0;
}