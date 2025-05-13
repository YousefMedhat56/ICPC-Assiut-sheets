#include "iostream"
using namespace std;

int main()
{
    long long num, num_copy;
    long long reversed_total = 0;
    int zeros_num = 1;

    cin >> num;
    num_copy = num;

    while ((num / zeros_num) > 9)
    {

        zeros_num *= 10;
    }

    while (num > 0)
    {

        int unit = (num % 10);
        int reversed = unit * zeros_num;
        reversed_total += reversed;
        num /= 10;
        zeros_num /= 10;
    }

    cout << reversed_total << endl;

    if (num_copy == reversed_total)
    {

        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}