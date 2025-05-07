#include "iostream"
#include <cmath>

using namespace std;

int main()
{
    long long num;
    cin >> num;

    bool isPrime;
    if (num == 1)
        isPrime = false;
    else if (num == 2)
        isPrime = true;
    else if (num % 2 == 0) // check if the number is even
        isPrime = false;
    else
    {
        isPrime = true;

        for (int x = 3; x <= sqrt(num); x += 2)
        {
            if (num % x == 0 && x != num)
            {
                isPrime = false;
                break;
            }
        }
    }
    isPrime ? cout << "YES" : cout << "NO";

    return 0;
}
