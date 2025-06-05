#include "iostream"
using namespace std;

long long log2_recursive(long long n)
{
    if (n == 1)
    {
        return 0;
    }

    else
    {
        return 1 + log2_recursive(n / 2);
    }
}

int main()
{

    long long n;
    cin >> n;
    cout << log2_recursive(n) << endl;

    return 0;
}