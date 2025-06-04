#include "iostream"
using namespace std;

long long sequence_recursive(long long n, int &length)
{
    length++;
    if (n == 1)
        return 1;

    if (n % 2 == 0)
    {
        return sequence_recursive(n / 2, length);
    }
    else
    {
        return sequence_recursive((3 * n) + 1, length);
    }
}

int main()
{

    long long n;
    int length = 0;
    cin >> n;

    sequence_recursive(n, length);
    cout << length;
    return 0;
}