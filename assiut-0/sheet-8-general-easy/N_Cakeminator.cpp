#include "iostream"
#include <set>
using namespace std;

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    set<int> unavailable_rows = {};
    set<int> unavailable_cols = {};

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            char c;
            cin >> c;

            if (c == 'S')
            {
                unavailable_rows.insert(row);
                unavailable_cols.insert(col);
            }
        }
    }

    int available_rows = rows - unavailable_rows.size();
    int available_cols = cols - unavailable_cols.size();

    int cakes = (available_rows * cols) + (available_cols * rows) - (available_rows * available_cols);

    cout << cakes << endl;
    return 0;
}