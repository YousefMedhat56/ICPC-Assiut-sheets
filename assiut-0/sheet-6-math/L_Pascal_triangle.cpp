#include "iostream"
#include "vector"
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> last_row = {}, curr_row = {};

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            curr_row = {1};
        }
        else
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || j == last_row.size())
                {
                    curr_row.push_back(1);
                }
                else
                {
                    curr_row.push_back(last_row[j - 1] + last_row[j]);
                }
            }
        }

        for (int k = 0; k < curr_row.size(); k++)
        {
            cout << curr_row[k] << ' ';
        }

        cout << endl;
        last_row = curr_row;
        curr_row = {};
    }
}
