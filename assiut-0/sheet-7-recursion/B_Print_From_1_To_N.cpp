#include "iostream"
using namespace std;

int printFrom1ToN(int i, int n)
{
    cout << i << endl;
    if (i == n)
    {

        return n;
    }
    else
    {
        return printFrom1ToN(i + 1, n);
    }
}
int main()
{
    int n;
    cin >> n;

    printFrom1ToN(1, n);
    return 0;
}