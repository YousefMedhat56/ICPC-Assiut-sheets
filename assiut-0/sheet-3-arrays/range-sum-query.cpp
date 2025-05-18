#include "iostream"
using namespace std;

int main()
{
    int size, queries;

    cin >> size >> queries;

    // prefix sum array
    long long *arr = new long long[size];
    arr[0] = 0;

    for (int i = 1; i <= size; i++)
    {
        long long val;
        cin >> val;
        arr[i] = arr[i - 1] + val;
    }

    for (int i = 0; i < queries; i++)
    {
        int start, end;
        cin >> start >> end;

        cout << arr[end] - arr[start - 1] << endl;
    }

    delete[] arr;
    return 0;
}
