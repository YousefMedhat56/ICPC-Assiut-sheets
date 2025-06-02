#include <iostream>
using namespace std;

int main()
{
    long long x1, y1, x2, y2, x3, y3;

    // Read the points
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    // Calculate the determinant (area without division)
    long long determinant = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    // Check if the determinant is zero
    if (determinant == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
