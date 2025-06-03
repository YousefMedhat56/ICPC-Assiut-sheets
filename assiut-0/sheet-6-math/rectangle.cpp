#include "iostream"
#include <algorithm>
using namespace std;

int main()
{
    long long bottom_left_x, bottom_left_y;
    long long top_left_x, top_left_y;
    long long bottom_right_x, bottom_right_y;
    long long top_right_x, top_right_y;

    int lines_num;

    cin >> bottom_left_x >> bottom_left_y >>
        top_left_x >> top_left_y >>
        bottom_right_x >> bottom_right_y >>
        top_right_x >> top_right_y;

    cin >> lines_num;

    long long min_x = min({bottom_left_x, top_left_x, bottom_right_x, top_right_x});
    long long max_x = max({bottom_left_x, top_left_x, bottom_right_x, top_right_x});
    long long min_y = min({bottom_left_y, top_left_y, bottom_right_y, top_right_y});
    long long max_y = max({bottom_left_y, top_left_y, bottom_right_y, top_right_y});

    for (int i = 0; i < lines_num; i++)
    {
        long long x, y;
        cin >> x >> y;

        if (y >= min_y && y <= max_y && x >= min_x && x <= max_x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}