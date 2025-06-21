#include "iostream"
#include "vector"
#include "set"
using namespace std;

int main()
{
    int n, k, good_nums = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        long long num;
        cin >> num;

        set<int> numbers_to_k_in_num = {};

        while (num > 0)
        {
            int digit = num % 10;

            // check if the digit is in valid range
            if (digit <= k)
                numbers_to_k_in_num.insert(digit);

            num /= 10;
        }

        if (numbers_to_k_in_num.size() == k + 1)
        {
            good_nums++;
        }
    }
    cout << good_nums;

    return 0;
}