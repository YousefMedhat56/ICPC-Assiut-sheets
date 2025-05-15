#include "iostream"
#include <vector>
using namespace std;

void maxSubArray(vector<int> &arr, int start, int end)
{

    if (end == arr.size())
        return;

    else if (start > end)
    {
        maxSubArray(arr, 0, end + 1);
    }
    else
    {
        int max = arr[start];
        for (int i = start; i <= end; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        cout << max << ' ';
        maxSubArray(arr, start + 1, end);
    }
}

int main()
{

    int num_of_arrays;
    cin >> num_of_arrays;

    vector<vector<int>> arrays = {};

    for (int i = 0; i < num_of_arrays; i++)
    {
        int arr_size;
        cin >> arr_size;
        arrays.push_back({});
        for (int j = 0; j < arr_size; j++)
        {
            int val;
            cin >> val;
            arrays[i].push_back(val);
        }
    }

    for (int i = 0; i < num_of_arrays; i++)
    {
        maxSubArray(arrays[i], 0, 0);

        cout << endl;
    }

    return 0;
}