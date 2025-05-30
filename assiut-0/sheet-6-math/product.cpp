#include "iostream"
using namespace std;

int main()
{
    long long L, R, M, product;
    cin >> L >> R >> M;
    product = L;
    for (int i = L + 1; i <= R; i++)
    {
        product = (product * i) % M;
    }

    cout << product;
    return 0;
}