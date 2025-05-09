#include "iostream"
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n, map<int, int> &memo)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else if (memo[n])
    {
        return memo[n];
    }
    else
    {
        int result = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
        memo[n] = result;
        return result;
    }
}

int main()
{
    int n;
    map<int, int> memo;
    cin >> n;
    cout << fibonacci(n, memo);
    return 0;
}