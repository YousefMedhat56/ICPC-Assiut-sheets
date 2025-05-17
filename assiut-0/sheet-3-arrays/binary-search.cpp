#include "iostream"
#include <vector>
using namespace std;

int partition(vector<long long> &arr, int left, int right)
{
    long long pivot = arr[right]; // Choose the last element as the pivot
    int sortedIndex = left - 1;

    for (int j = left; j < right; j++)
    {
        if (arr[j] <= pivot)
        {
            sortedIndex++;
            swap(arr[sortedIndex], arr[j]);
        }
    }

    swap(arr[sortedIndex + 1], arr[right]);
    return sortedIndex + 1;
}

void quickSort(vector<long long> &arr, int left, int right)
{
    if (left < right)
    {
        int pivot = partition(arr, left, right);
        quickSort(arr, left, pivot - 1);
        quickSort(arr, pivot + 1, right);
    }
}

bool binarySearch(vector<long long> &arr, long long query, int start, int end)
{
    int middle = (start + end) / 2;
    if (arr[middle] == query || arr[start] == query || arr[end] == query)
        return true;
    else if (middle == start)
        return false;
    else if (arr[middle] < query)
        return binarySearch(arr, query, middle, end);
    else if (arr[middle] > query)
        return binarySearch(arr, query, start, middle);
}

int main()
{
    int arr_size, query_num;

    cin >> arr_size >> query_num;

    vector<long long> arr = {};

    for (int i = 0; i < arr_size; i++)
    {
        long long val;
        cin >> val;
        arr.push_back(val);
    }

    // sort the array elements
    quickSort(arr, 0, arr.size() - 1);

    for (int i = 0; i < query_num; i++)
    {
        bool is_found = false;
        long long query;
        cin >> query;

        if (binarySearch(arr, query, 0, arr_size - 1))
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}