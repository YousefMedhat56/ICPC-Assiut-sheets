#include "iostream"
#include "vector"
using namespace std;

void printEvenIndices(vector<long long> &arr, int index)
{

    if (index % 2 == 0)
        cout << arr[index] << ' ';

    if (index > 0)
    {
        printEvenIndices(arr, index - 1);
    }
}
int main()
{
    int n;
    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printEvenIndices(arr, n - 1);
    return 0;
}