#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
using namespace std;

int main()
{
    string line;
    cin >> line;
    vector<int> digits = {};

    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] != '+')
        {
            int num = line[i] - '0';
            digits.push_back(num);
        }
    }

    sort(digits.begin(), digits.end());

    for (int i = 0; i < digits.size(); i++)
    {
        cout << digits[i];
        if (i < digits.size() - 1)
        {
            cout << '+';
        }
    }

    return 0;
}