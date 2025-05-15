#include "iostream"
#include <vector>
using namespace std;

void countSubArrays(vector<int> &arr, int start, int end, int &count)
{

    if (end == arr.size())
        return;

    else if (start > end)
        countSubArrays(arr, 0, end + 1, count);

    else
    {
        for (int i = start; i <= end; i++)
        {
            if (i < end)
            {
                if (arr[i] > arr[i + 1])
                    break;
            }
            else
            {

                count++;
            }
        }

        countSubArrays(arr, start + 1, end, count);
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
        int sub_count = 0;
        countSubArrays(arrays[i], 0, 0, sub_count);

        cout << sub_count << endl;
    }
    return 0;
}