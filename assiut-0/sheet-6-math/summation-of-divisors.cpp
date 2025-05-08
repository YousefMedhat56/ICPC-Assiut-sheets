#include "iostream"
#include <cmath>
using namespace std;

int main()
{
    long long num;
    cin >> num;

    long long sum = 0;

    for (int i = 1; i <= sqrt(num); i++)
    {
        // check if num is divisable by i
        if (num % i == 0)
        {
            sum += i;

            // check if the two divisors have the same value
            if (num / i != i)
            {
                sum += (num / i);
            }
        }
    }
    cout << sum;
    return 0;
}