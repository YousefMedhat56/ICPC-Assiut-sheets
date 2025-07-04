#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int knapsack(int index, int capacity, const vector<int> &weights, const vector<int> &values, int n)
{
    // Base case: no items left or capacity is 0
    if (index == n || capacity <= 0)
    {
        return 0;
    }

    // Case 1: skip the current item
    int skip = knapsack(index + 1, capacity, weights, values, n);

    // Case 2: take the current item (if it fits)
    int take = 0;
    if (weights[index] <= capacity)
    {
        take = values[index] + knapsack(index + 1, capacity - weights[index], weights, values, n);
    }

    // Return the maximum of both choices
    return max(skip, take);
}

int main()
{
    int n, W;
    cin >> n >> W;

    vector<int> weights(n);
    vector<int> values(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> weights[i] >> values[i];
    }

    int result = knapsack(0, W, weights, values, n);
    cout << result << endl;

    return 0;
}
