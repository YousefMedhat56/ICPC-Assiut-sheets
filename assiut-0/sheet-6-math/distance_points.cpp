#include "iostream"
#include "cmath"
#include <iomanip>
using namespace std;

int main()
{
    long double x1, y1, x2, y2, distance;

    cin >> x1 >> y1 >> x2 >> y2;

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << fixed << setprecision(9) << distance;

    return 0;
}