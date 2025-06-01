#include "iostream"
#include <cmath>
#include <iomanip>
using namespace std;

bool check_is_triangle(int a, int b, int c)
{
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        return true;
    }
    return false;
}

double calc_triangle_area(int a, int b, int c)
{
    double s = (a + b + c) / 2; // semi parameter
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (check_is_triangle(a, b, c))
    {

        cout << "Valid" << endl;
        cout << fixed << setprecision(7) << calc_triangle_area(a, b, c);
    }
    else
        cout << "Invalid";

    return 0;
}