#include "iostream"
using namespace std;

int main()
{
    int size;
    cin >> size;

    int *array = new int[size];
    bool is_palindrome = true;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < size / 2; i++)
    {
        if (array[i] != array[size - i - 1])
        {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome)
        cout << "YES";
    else
        cout << "NO";

    delete[] array;

    return 0;
}