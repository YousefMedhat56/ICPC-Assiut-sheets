#include "iostream"
#include "vector"
using namespace std;

void fillMatrix(vector<vector<int>> &matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = {};

        for (int j = 0; j < cols; j++)
        {
            int val;
            cin >> val;
            matrix[i].push_back(val);
        }
    }
}

void sumOfMatrix(int row, int col, int rows_num, int cols_num, vector<vector<int>> &matrix_a, vector<vector<int>> &matrix_b)
{
    int sum = matrix_a[row][col] + matrix_b[row][col];
    cout << sum << ' ';

    if (row <= rows_num - 1)
    {
        if (col < cols_num - 1)
        {
            sumOfMatrix(row, col + 1, rows_num, cols_num, matrix_a, matrix_b);
        }
        else if (row < rows_num - 1)
        {
            cout << endl;
            sumOfMatrix(row + 1, 0, rows_num, cols_num, matrix_a, matrix_b);
        }
    }
}
int main()
{
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix_a(rows), matrix_b(rows);

    fillMatrix(matrix_a, rows, cols);
    fillMatrix(matrix_b, rows, cols);

    sumOfMatrix(0, 0, rows, cols, matrix_a, matrix_b);
    return 0;
}