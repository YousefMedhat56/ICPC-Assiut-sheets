#include "iostream"
using namespace std;

void printPyramid(int starsNum, int spaceNum)
{
    if (spaceNum == 0)
    {
        for (int i = 0; i < starsNum; i++)
        {
            cout << '*';
        }
    }
    else
    {
        for (int i = 0; i < spaceNum; i++)
        {
            cout << ' ';
        }
        for (int i = 0; i < starsNum; i++)
        {
            cout << '*';
        }
        cout << endl;
        printPyramid(starsNum + 2, spaceNum - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    printPyramid(1, n - 1);
    return 0;
}