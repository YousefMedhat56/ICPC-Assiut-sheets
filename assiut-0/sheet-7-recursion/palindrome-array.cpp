#include "iostream"
#include <vector>
using namespace std;

bool is_palindrome(int start, int end, int &size, vector<long long> &arr)
{

    if (size == 1)
        return true;
    if (arr[start] == arr[end])
    {
        if (start + 1 == size / 2)
            return true;

        else
            return is_palindrome(start + 1, end - 1, size, arr);
    }
    else
    {
        return false;
    }
}

int main()
{
    int size;
    vector<long long> nums = {};

    cin >> size;
    for (int i = 0; i < size; i++)
    {
        long long val;
        cin >> val;
        nums.push_back(val);
    }

    if (is_palindrome(0, size - 1, size, nums))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}