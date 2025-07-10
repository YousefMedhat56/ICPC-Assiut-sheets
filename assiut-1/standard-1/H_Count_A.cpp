#include "iostream"
#include "vector"
#include "string"
using namespace std;

int main()
{
    string S;
    cin >> S;
    vector<int> prefix_sum(S.size(), 0);

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'a')
        {
            if (i > 0)
                prefix_sum[i] = prefix_sum[i - 1] + 1;
            else
                prefix_sum[i]++;
        }
        else
        {
            if (i > 0)
            {
                prefix_sum[i] = prefix_sum[i - 1];
            }
        }
    }

    int queries;
    cin >> queries;
    for (int q = 0; q < queries; q++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
            cout << prefix_sum[r] << endl;
        else
        {
            cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
        }
    }
    return 0;
}