#include "iostream"
#include "vector"
using namespace std;

int main()
{
    long long size, queries;
    cin >> size >> queries;

    vector<long long> frequency_arr(size + 1, 0);

    for (int i = 0; i < queries; i++)
    {
        int query;
        long long num;
        cin >> query >> num;
        if (query == 1)
        {
            frequency_arr[num]++;
        }
        else if (query == 2)
        {
            cout << frequency_arr[num] << endl;
        }
    }

    return 0;
}