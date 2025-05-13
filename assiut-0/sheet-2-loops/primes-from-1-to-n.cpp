#include "iostream"
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0 && j != 1)
            {
                isPrime = false;
            }
        }

        if (isPrime)
            cout << i << ' ';
    }

    return 0;
}