#include "iostream"
#include <climits>
using namespace std;

int main()
{
    int coordinates[3] = {};
    int min_coordinate = INT_MAX;
    int max_coordinate = 0;
    int min_distance = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        cin >> coordinates[i];
        min_coordinate = min(min_coordinate, coordinates[i]);
        max_coordinate = max(max_coordinate, coordinates[i]);
    }

    // loop through all coordinates from the minimum to the maximum coordinate
    for (int coordinate = min_coordinate; coordinate <= max_coordinate; coordinate++)
    {
        int distance = 0;
        for (int i = 0; i < 3; i++)
        {
            if (coordinate > coordinates[i])
            {
                distance += (coordinate - coordinates[i]);
            }
            else
            {
                distance += (coordinates[i] - coordinate);
            }
        }

        min_distance = min(min_distance, distance);
    }

    cout << min_distance;
    return 0;
}