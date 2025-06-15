#include "iostream"
using namespace std;

int main()
{
    long long events_num, available_police = 0, untreated_crimes = 0;

    cin >> events_num;

    for (int i = 0; i < events_num; i++)
    {
        int event;
        cin >> event;

        // check if a crime occured
        if (event == -1)
        {
            if (available_police > 0)
                available_police--;
            else
                untreated_crimes++;
        }
        // check if new policemen are hired
        else if (event > 0)
        {
            available_police += event;
        }
    }

    cout << untreated_crimes;
    return 0;
}