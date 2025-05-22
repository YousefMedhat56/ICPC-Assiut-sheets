#include "iostream"
#include <vector>
using namespace std;

int min(vector<int> &arr)
{
    int minimum = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < minimum)
            minimum = arr[i];
    }

    return minimum;
}

int max(vector<int> &arr)
{
    int maximum = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > maximum)
            maximum = arr[i];
    }

    return maximum;
}

int main()
{
    int size;
    cin >> size;
    vector<int> arr;

    for (int i = 0; i < size; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    cout << min(arr) << ' ' << max(arr);

    return 0;
}