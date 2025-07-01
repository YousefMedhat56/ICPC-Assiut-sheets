#include "iostream"
#include "vector"
using namespace std;

long long maxNumber(vector<long long> &arr, int index, long long max)
{

    if (arr[index] > max)
        max = arr[index];

    if (index > 0)
    {
        return maxNumber(arr, index - 1, max);
    }
    return max;
}
int main()
{
    int n;
    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxNumber(arr, n - 1, arr[n - 1]);
    return 0;
}