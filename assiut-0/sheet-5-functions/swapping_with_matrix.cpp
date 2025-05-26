#include "iostream"
#include "string"
#include <vector>
using namespace std;

void swap_rows(vector<vector<int>> &matrix, int N, int X, int Y)
{
    for (int i = 0; i < N; i++)
    {
        int tempX = matrix[X][i];
        matrix[X][i] = matrix[Y][i];
        matrix[Y][i] = tempX;
    }
}

void swap_columns(vector<vector<int>> &matrix, int N, int X, int Y)
{
    for (int i = 0; i < N; i++)
    {
        int tempX = matrix[i][X];
        matrix[i][X] = matrix[i][Y];
        matrix[i][Y] = tempX;
    }
}

int main()
{
    int N, X, Y;
    cin >> N >> X >> Y;
    X--;
    Y--;

    vector<vector<int>> matrix = {};

    for (int i = 0; i < N; i++)
    {
        matrix.push_back({});
        for (int j = 0; j < N; j++)
        {
            int val;
            cin >> val;
            matrix[i].push_back(val);
        }
    }

    // SWAP ROWS
    swap_rows(matrix, N, X, Y);

    // SWAP COLUMNS
    swap_columns(matrix, N, X, Y);

    // PRINT MATRIX
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}