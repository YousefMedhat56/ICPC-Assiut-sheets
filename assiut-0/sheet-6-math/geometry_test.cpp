#include "iostream"
#include <cmath>
using namespace std;

int main()
{
    long long R, S;
    cin >> R >> S;

    // check if square holds the circle
    if (S / 2 > R)
    {
        cout << "Square";
    }
    // check if circle holds the square
    else if (2 * pow(S / 2, 2) < pow(R, 2))
    {
        cout << "Circle";
    }
    else
    {
        cout << "Complex";
    }

    return 0;
}