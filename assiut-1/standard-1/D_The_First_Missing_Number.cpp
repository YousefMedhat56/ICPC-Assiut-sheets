#include "iostream"
#include "vector"
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    int smallestUnfound = -m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool stop = false;
    while (!stop)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == smallestUnfound)
            {
                smallestUnfound++;
                break;
            }
            else if (i == n - 1)
            {

                stop = true;
            }
        }
    }
    cout << smallestUnfound;
    return 0;
}
