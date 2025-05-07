#include <iostream>
using namespace std;

void printRecursion(int n)
{
    if (n == 0)
    {
        return;
    }
    printRecursion(n - 1);
    cout << "I love Recursion" << endl;
}
int main()
{
    int n;
    cin >> n;
    printRecursion(n);
    return 0;
}