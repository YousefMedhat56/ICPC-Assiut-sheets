#include "iostream"
using namespace std;

void printN(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        cout << c << ' ';
    }
    cout << endl;
}

int main()
{
    int test_cases;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        int n;
        char c;
        cin >> n >> c;
        printN(n, c);
    }
    return 0;
}