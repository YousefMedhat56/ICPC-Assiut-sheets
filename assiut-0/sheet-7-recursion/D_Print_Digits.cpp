#include "iostream"
#include "vector"
#include "string"
#include "cmath"
using namespace std;

int getTengthDecimalPlace(long long num)
{
    string S = to_string(num);
    return pow(10, S.size() - 1);
}

void printDigits(long long num, int decimal_place)
{
    cout << num / decimal_place;
    if (decimal_place > 1)
    {
        cout << ' ';
        printDigits(num % decimal_place, decimal_place / 10);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<long long> test_cases(n);

    for (int i = 0; i < n; i++)
    {
        cin >> test_cases[i];
    }

    for (int i = 0; i < n; i++)
    {
        int decimal_place = getTengthDecimalPlace(test_cases[i]);
        printDigits(test_cases[i], decimal_place);
        cout << endl;
    }

    return 0;
}