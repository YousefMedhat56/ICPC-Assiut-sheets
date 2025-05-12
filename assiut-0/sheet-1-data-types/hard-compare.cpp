#include "iostream"
#include <cmath>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == c && b > d && a != 1)
    {
        cout << "YES";
    }
    else if (a > c && b == d)
    {
        cout << "YES";
    }
    else if (a == c && b < d && a != 1)
    {
        cout << "NO";
    }
    else if (a < c && b == d)
    {
        cout << "NO";
    }
    else if (a > c && b > d)
    {
        cout << "YES";
    }
    else if (a < c && b < d)
    {
        cout << "NO";
    }
    else if (pow(a, b) > pow(c, d))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}