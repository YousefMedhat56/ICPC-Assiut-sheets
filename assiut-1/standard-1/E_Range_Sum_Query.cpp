#include "iostream"
#include "vector"
using namespace std;

int main()
{
    int size, queries;
    cin >> size >> queries;

    vector<long long> prefix_sum(size);

    for (int i = 0; i < size; i++)
    {
        long long new_item;
        cin >> new_item;
        if (i == 0)
        {
            prefix_sum[i] = new_item;
        }
        else
        {
            long long last_item = prefix_sum[i - 1];
            prefix_sum[i] = new_item + last_item;
        }
    }

    for (int i = 0; i < queries; i++)
    {
        int min, max;
        cin >> min >> max;

        if (min - 1 == 0)
        {
            cout << prefix_sum[max - 1];
        }
        else
        {

            cout << prefix_sum[max - 1] - prefix_sum[min - 2];
        }
        cout << endl;
    }

    return 0;
}
