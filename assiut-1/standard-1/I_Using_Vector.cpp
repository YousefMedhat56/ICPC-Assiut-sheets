#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
using namespace std;

int main()
{

    int size, queries;
    cin >> size >> queries;

    vector<long long> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < queries; i++)
    {
        string query;
        cin >> query;

        if (query == "pop_back")
        {
            arr.pop_back();
        }
        else if (query == "front")
        {
            cout << arr[0] << endl;
        }
        else if (query == "back")
        {
            cout << arr[arr.size() - 1] << endl;
        }
        else if (query == "sort")
        {
            int l, r;
            cin >> l;
            cin >> r;
            sort(arr.begin() + (l - 1), arr.begin() + r);
        }
        else if (query == "reverse")
        {
            int l, r;
            cin >> l;
            cin >> r;
            reverse(arr.begin() + (l - 1), arr.begin() + r);
        }
        else if (query == "print")
        {
            int pos;
            cin >> pos;
            cout << arr[pos - 1] << endl;
        }
        else if (query == "push_back")
        {
            long long new_item;
            cin >> new_item;
            arr.push_back(new_item);
        }
    }

    return 0;
}