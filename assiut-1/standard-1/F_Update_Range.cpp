#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    vector<long long> diff(n + 1, 0); // difference array

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        long long val;
        cin >> l >> r >> val;

        diff[l - 1] += val;
        if (r < n)
        {
            diff[r] -= val;
        }
    }

    // Apply prefix sum to get final array
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += diff[i];
        arr[i] += sum;
    }

    // Output the result
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
