#include "iostream"
#include "vector"
using namespace std;

bool createExp(vector<long long> arr, long long &x)
{
    if (arr.size() == 1)
    {
        if (arr[0] == x)
            return true;
    }

    else
    {
        vector<long long> addition_arr = arr, substraction_arr = arr;

        // add last two elements in the array
        addition_arr[addition_arr.size() - 2] += addition_arr[addition_arr.size() - 1];
        addition_arr.pop_back();

        // subtract last two elements in the array
        substraction_arr[substraction_arr.size() - 2] -= substraction_arr[substraction_arr.size() - 1];
        substraction_arr.pop_back();

        return createExp(addition_arr, x) || createExp(substraction_arr, x);
    }

    return false;
}

int main()
{
    int n;
    long long x;

    cin >> n >> x;
    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (createExp(arr, x))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}