#include "iostream"
using namespace std;

int main()
{
    long long a, b, c;

    cin >> a >> b >> c;

    if (c % 3 == 1)
    {
        cout << a;
    }
    else if (c % 3 == 2)
    {
        cout << b;
    }
    else
    {
        cout << (a ^ b);
    }
    return 0;
}