#include "iostream"
using namespace std;

int main()
{
    long long balance;
    cin >> balance;

    if (balance >= 0)
    {
        cout << balance;
    }
    else
    {
        long long delete_last_digit;
        long long delete_digit_before_last;

        delete_last_digit = balance / 10;
        delete_digit_before_last = (balance / 100) * 10 + (balance % 10);

        if (delete_last_digit > delete_digit_before_last)
        {
            cout << delete_last_digit;
        }
        else
        {
            cout << delete_digit_before_last;
        }
    }
    return 0;
}