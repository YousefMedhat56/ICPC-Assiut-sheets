#include "iostream"
using namespace std;

long long factorial(int num)
{
    long long fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{

    int n, r;
    cin >> n >> r;

    // permutation
    long long NPR = factorial(n) / factorial(n - r);
    // combination
    long long NCR = NPR / factorial(r);

    cout << NCR << ' ' << NPR;
    return 0;
}