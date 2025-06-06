#include "iostream"
#include "iomanip"
#include <vector>
using namespace std;

long long sum_recursive(int index, vector<long long> &arr)
{

    if (index == 0)
    {
        return arr[0];
    }
    else
    {
        return arr[index] + sum_recursive(index - 1, arr);
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

    long double avg = sum_recursive(size - 1, arr) / double(size);
    cout << fixed << setprecision(6) << avg;

    return 0;
}