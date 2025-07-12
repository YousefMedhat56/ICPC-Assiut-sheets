#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        int less = lower_bound(arr.begin(), arr.end(), x) - arr.begin();

        int greater = arr.end() - upper_bound(arr.begin(), arr.end(), x);

        cout << less << " " << greater << "\n";
    }
    return 0;
}
