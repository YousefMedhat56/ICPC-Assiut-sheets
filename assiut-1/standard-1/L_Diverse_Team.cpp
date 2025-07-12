#include "iostream"
#include "vector"
using namespace std;

int main()
{

    int n, k;

    cin >> n >> k;

    vector<int> ratings(101, 0); // frequency array for ratings
    vector<int> team = {};

    for (int i = 0; i < n; i++)
    {
        int rating;
        cin >> rating;

        if (ratings[rating] == 0)
        {
            team.push_back(i + 1);
        }
        ratings[rating]++;

        if (team.size() == k)
            break;
    }

    if (team.size() == k)
    {
        cout << "YES" << endl;
        for (int i = 0; i < team.size(); i++)
        {
            cout << team[i] << ' ';
        }
    }
    else
        cout << "NO" << endl;
}