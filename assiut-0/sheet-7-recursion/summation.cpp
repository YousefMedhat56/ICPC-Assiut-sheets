#include "iostream"
#include "vector"
using namespace std;

long long summation(int index, vector<long long> &nums_arr)
{
    if (index == nums_arr.size() - 1)
    {
        return nums_arr[index];
    }
    else
    {
        return nums_arr[index] + summation(index + 1, nums_arr);
    }
}

int main()
{
    int N;
    cin >> N;
    vector<long long> nums_arr(N);

    for (int i = 0; i < N; i++)
    {
        cin >> nums_arr[i];
    }

    cout << summation(0, nums_arr);
    return 0;
}