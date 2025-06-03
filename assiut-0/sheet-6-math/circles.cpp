#include "iostream"
#include <cmath>
using namespace std;

int main()
{
    long long x1, y1, x2, y2;
    long long x3, y3, x4, y4;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    long double center1_x = (x1 + x2) / 2.0;
    long double center1_y = (y1 + y2) / 2.0;
    long double center2_x = (x3 + x4) / 2.0;
    long double center2_y = (y3 + y4) / 2.0;

    // circle 1 radius
    long double radius1_squared = pow(x2 - center1_x, 2) + pow(y2 - center1_y, 2);

    // circle 2 radius
    long double radius2_squared = pow(x4 - center2_x, 2) + pow(y4 - center2_y, 2);

    // distance between 2 circles
    long double distance_squared = pow(center2_x - center1_x, 2) + pow(center2_y - center1_y, 2);

    if (distance_squared <= pow(sqrt(radius1_squared) + sqrt(radius2_squared), 2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}