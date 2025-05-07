#include "iostream"
#include <algorithm>

using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    long long start = min(a, b);
    long long end = max(a, b);

    long long sumALl = 0;
    long long sumEven = 0;
    long long sumOdd = 0;

    for (long long i = start; i <= end; i++)
    {
        sumALl += i;

        if (i % 2 == 0)
        {
            sumEven += i;
        }
        else
        {
            sumOdd += i;
        }
    }

    cout << sumALl << endl;
    cout << sumEven << endl;
    cout << sumOdd << endl;
    return 0;
}