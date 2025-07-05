#include "iostream"
#include "string"
#include "vector"
using namespace std;

bool isUpperCase(char c)
{
    if (c >= 65 && c <= 90)
    {
        return true;
    }
    return false;
}

int main()
{
    string S;
    cin >> S;

    // Upper case and lower case letters
    vector<int> frequency_arr(52, 0);

    for (int i = 0; i < S.size(); i++)
    {
        char c = S[i];
        if (isUpperCase(c))
        {
            frequency_arr[c - 65]++;
        }
        else
        {
            frequency_arr[c - 71]++;
        }
    }

    for (int i = 0; i < frequency_arr.size(); i++)
    {
        char c;
        if (frequency_arr[i] > 0)
        {
            // check if the letter if upper-case
            if (i <= 25)

            {
                c = i + 65;
                cout << c << ' ' << frequency_arr[i] << endl;
            }
            else
            {
                c = i + 71;
                cout << c << ' ' << frequency_arr[i] << endl;
            }
        }
    }

    return 0;
}