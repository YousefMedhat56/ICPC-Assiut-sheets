#include "iostream"
using namespace std;

long long GCD(long long max, long long min)
{
    long long remainder = max % min;

    if (remainder > 0)
        return GCD(min, remainder);
    else
        return min;
}

int main()
{
    long long a, b;
    cin >> a >> b;

    // be sure that a is always larger than b
    if (a < b)
    {
        long long temp = b;
        b = a;
        a = temp;
    }
    long long gcd = GCD(a, b);

    long long lcm = (a * b) / gcd;

    cout << gcd << ' ' << lcm;

    return 0;
}