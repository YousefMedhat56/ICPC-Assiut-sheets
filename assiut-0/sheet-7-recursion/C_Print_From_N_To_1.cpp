#include "iostream"
using namespace std;

int printFromNTo1(int n)
{
    cout << n;

    if (n > 1)
        cout << ' ';

    if (n == 1)
    {
        return 1;
    }
    else
    {
        return printFromNTo1(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;

    printFromNTo1(n);
    return 0;
}