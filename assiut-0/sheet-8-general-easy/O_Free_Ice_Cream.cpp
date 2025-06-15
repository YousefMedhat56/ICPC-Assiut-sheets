#include "iostream"
using namespace std;

int main()
{
    int n;
    long long available_packs;
    cin >> n >> available_packs;

    int distressed = 0;
    for (int i = 0; i < n; i++)
    {
        char symbol;
        long long packs;

        cin >> symbol >> packs;

        if (symbol == '+')
        {
            available_packs += packs;
        }
        else
        {
            if (packs <= available_packs)
            {
                available_packs -= packs;
            }
            else
            {
                distressed++;
            }
        }
    }

    cout << available_packs << ' ' << distressed;
    return 0;
}