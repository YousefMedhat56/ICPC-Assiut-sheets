#include "iostream"
#include "vector"
using namespace std;

void convertToBinary(long long num)
{
    int remainder = num % 2;

    if (num / 2 > 0)
    {
        convertToBinary(num / 2);
    }
    cout << remainder;
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
        convertToBinary(test_cases[i]);
        cout << endl;
    }

    return 0;
}