#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long left = 1, right = n, maxK = 0;

    while (left <= right)
    {
        long long mid = left + (right - left) / 2;
        long long sum = (mid * (mid + 1)) / 2;

        if (sum <= n)
        {
            maxK = mid; // valid candidate
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << maxK;
    return 0;
}
