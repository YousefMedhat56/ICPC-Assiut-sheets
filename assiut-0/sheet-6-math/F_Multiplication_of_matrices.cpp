#include "iostream"
#include "vector"
using namespace std;

void fill_matrix(int rows, int columns, vector<vector<int>> &matrix)
{
    for (int row = 0; row < rows; row++)
    {
        matrix.push_back({});
        for (int col = 0; col < columns; col++)
        {
            int num;
            cin >> num;
            matrix[row].push_back(num);
        }
    }
}
int main()
{
    int a_row_num, a_col_num, b_row_num, b_col_num;
    vector<vector<int>> a_matrix = {};
    vector<vector<int>> b_matrix = {};

    cin >> a_row_num >> a_col_num;

    fill_matrix(a_row_num, a_col_num, a_matrix);

    cin >> b_row_num >> b_col_num;
    fill_matrix(b_row_num, b_col_num, b_matrix);

    for (int a_row = 0; a_row < a_row_num; a_row++)
    {
        for (int b_col = 0; b_col < b_col_num; b_col++)
        {
            int num = 0;
            for (int a_col = 0; a_col < a_col_num; a_col++)
            {

                num += (a_matrix[a_row][a_col] * b_matrix[a_col][b_col]);
            }
            cout << num << ' ';
        }
        cout << endl;
    }
    return 0;
}