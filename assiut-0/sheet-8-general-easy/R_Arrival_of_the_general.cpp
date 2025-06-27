#include "iostream"
#include "climits"
using namespace std;

int main()
{
    int count;
    cin >> count;

    int swaps = 0, min_val = INT_MAX, min_val_index = 0, max_val = 0, max_val_index = 0;

    for (int i = 0; i < count; i++)
    {
        int val;
        cin >> val;

        if (val <= min_val)
        {
            min_val = val;
            min_val_index = i;
        }

        if (val > max_val)
        {
            max_val = val;
            max_val_index = i;
        }
    }

    swaps += max_val_index;

    if (max_val_index > min_val_index)
    {
        min_val_index++;
    }

    swaps += (count - min_val_index - 1);

    cout << swaps;
    return 0;
}