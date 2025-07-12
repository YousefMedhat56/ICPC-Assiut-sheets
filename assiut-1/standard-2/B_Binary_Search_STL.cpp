#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < q; i++)
    {
        string query;
        cin >> query;
        int num;
        cin >> num;
        if (query == "binary_search")
        {
            if (binary_search(arr.begin(), arr.end(), num))
            {
                cout << "found" << endl;
            }
            else
                cout << "not found" << endl;
        }
        else if (query == "lower_bound")
        {
            auto it = lower_bound(arr.begin(), arr.end(), num);
            if (it != arr.end())
            {
                cout << *it << endl;
            }
            else
                cout << -1 << endl;
        }
        else if (query == "upper_bound")
        {
            auto it = upper_bound(arr.begin(), arr.end(), num);
            if (it != arr.end())
            {
                cout << *it << endl;
            }
            else
                cout << -1 << endl;
        }
    }

    return 0;
}