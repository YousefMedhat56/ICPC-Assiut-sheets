#include "iostream"
#include "vector"
#include "climits"
using namespace std;

void fillMatrix(int rows, int columns, vector<vector<long long>> &matrix)
{
    for (int row = 0; row < rows; row++)
    {
        matrix.push_back({});
        for (int col = 0; col < columns; col++)
        {
            long long num;
            cin >> num;
            matrix[row].push_back(num);
        }
    }
}

long long calcMaxPath(int row, int col, int rows, int cols, vector<vector<long long>> &matrix, long long path, long long &maximum)
{
    path += matrix[row][col];

    if (row < rows - 1)
    {
        calcMaxPath(row + 1, col, rows, cols, matrix, path, maximum);
    }
    if (col < cols - 1)
    {
        calcMaxPath(row, col + 1, rows, cols, matrix, path, maximum);
    }

    if (row == rows - 1 && col == cols - 1)
    {
        maximum = max(maximum, path);
    }
    return maximum;
}

int main()
{

    int rows, cols;
    vector<vector<long long>> matrix;

    cin >> rows >> cols;

    fillMatrix(rows, cols, matrix);

    long long maxPath = LLONG_MIN;
    cout << calcMaxPath(0, 0, rows, cols, matrix, 0, maxPath);
    return 0;
}