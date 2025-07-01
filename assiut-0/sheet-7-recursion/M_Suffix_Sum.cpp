#include "iostream"
#include "vector"
using namespace std;

long long suffixSum(vector<long long> &arr, int m, long long sum)
{

    int index = arr.size() - m;
    sum += arr[index];
    if (m > 1)
    {
        return suffixSum(arr, m - 1, sum);
    }
    else
    {
        return sum;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << suffixSum(arr, m, 0);
    return 0;
}