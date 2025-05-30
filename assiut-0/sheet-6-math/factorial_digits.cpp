#include "iostream"
#include "cmath"
using namespace std;

int main()
{
    long long num, digits;
    long double log_sum = 0;

    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        log_sum += log10(i);
    }
    digits = 1 + floor(log_sum);
    cout << "Number of digits of " << num << "! is " << digits;

    return 0;
}