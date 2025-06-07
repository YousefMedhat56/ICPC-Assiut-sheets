#include "iostream"
#include <vector>
using namespace std;

void left_max(vector<long long> &arr, int index, long long max_num)
{

    long long new_max = max(arr[index], max_num);
    cout << new_max << ' ';

    if (index == arr.size() - 1)
    {
        return;
    }
    else
    {
        left_max(arr, index + 1, new_max);
    }
}
int main()
{

    int size;
    vector<long long> arr;

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        long long val;
        cin >> val;
        arr.push_back(val);
    }

    left_max(arr, 0, arr[0]);

    return 0;
}