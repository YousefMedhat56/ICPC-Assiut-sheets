#include "iostream"
using namespace std;

bool can_reach(long long current, long long &target)
{
    if (current > target)
        return false;
    if (current == target)
        return true;

    else
        return can_reach(current * 10, target) || can_reach(current * 20, target);
}

int main()
{

    int test_cases;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        long long target;
        cin >> target;
        if (can_reach(1, target))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}