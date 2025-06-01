#include "iostream"
#include <cmath>

using namespace std;

bool belong_to_circle(long long center_x, long long center_y, long long r, long long x, long long y)
{
    long long squared_distance = pow((x - center_x), 2) + pow((y - center_y), 2);
    long long squared_radius = r * r;

    return squared_distance <= squared_radius;
    if (squared_radius >= squared_distance)
        return true;
    else
        return false;
}

int main()
{
    long long center_x, center_y, r;
    int n;

    cin >> center_x >> center_y >> r >> n;

    for (int i = 0; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        if (belong_to_circle(center_x, center_y, r, x, y))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}