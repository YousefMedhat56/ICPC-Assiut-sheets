#include "iostream"
using namespace std;

long long factorial(long long num)
{

    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int main()
{
    int num;
    cin >> num;
    cout << factorial(num);
    return 0;
}