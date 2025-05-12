#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long num = 1;
    num = (num * a) % 100;
    num = (num * b) % 100;
    num = (num * c) % 100;
    num = (num * d) % 100;

    if (num < 10)
    {
        cout << "0"; // Add leading zero for single-digit results
    }
    cout << num;

    return 0;
}
