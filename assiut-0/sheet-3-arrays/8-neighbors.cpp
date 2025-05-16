#include "iostream"
#include <vector>
using namespace std;

bool equalX(vector<vector<char>> &matrix, int m, int n, int x, int y)
{
    if (x == -1 || y == -1 || x == m || y == n)
        return true;
    else if (matrix[x][y] == 'x')
        return true;
    else
        return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> matrix = {};

    for (int i = 0; i < n; i++)
    {
        matrix.push_back({});
        for (int j = 0; j < m; j++)
        {
            char val;
            cin >> val;
            matrix[i].push_back(val);
        }
    }

    int x, y;
    cin >> x >> y;

    x--;
    y--;

    // check 8 neighbors
    if (
        equalX(matrix, m, n, x - 1, y - 1) &&
        equalX(matrix, m, n, x - 1, y) &&
        equalX(matrix, m, n, x - 1, y + 1) &&

        equalX(matrix, m, n, x, y - 1) &&
        equalX(matrix, m, n, x, y + 1) &&

        equalX(matrix, m, n, x + 1, y - 1) &&
        equalX(matrix, m, n, x + 1, y) &&
        equalX(matrix, m, n, x + 1, y + 1)

    )
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}