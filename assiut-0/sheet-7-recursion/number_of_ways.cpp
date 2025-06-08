#include <iostream>
using namespace std;

long long number_of_ways(long long start, long long end)
{
    if (start > end)
    {
        return 0;
    }
    if (start == end)
    {
        return 1;
    }

    return number_of_ways(start + 1, end) + number_of_ways(start + 2, end) + number_of_ways(start + 3, end);
}

int main()
{
    long long S, E;
    cin >> S >> E;

    cout << number_of_ways(S, E) << endl;
    return 0;
}
