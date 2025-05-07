#include "iostream"
#include <cmath>
using namespace std;

bool isInteger(double num)
{
    const double epsilon = 1e-9;
    return abs(num - round(num)) < epsilon;
}

int main()
{
    long long num;
    cin >> num;

    double power = log2(num);

    isInteger(power) ? cout << "YES" : cout << "NO";
    return 0;
}
