#include "iostream"
#include <cmath>
using namespace std;

int main()
{
    long long x1, y1, x2, y2;
    long long x3, y3, x4, y4;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    long long dx1 = x2 - x1;
    long long dy1 = y2 - y1;
    long long dx2 = x4 - x3;
    long long dy2 = y4 - y3;

    if (dx1 * dy2 == dx2 * dy1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}