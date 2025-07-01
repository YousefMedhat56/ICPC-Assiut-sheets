#include "iostream"
using namespace std;

void printPyramid(int starsNum, int spaceNum)
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
    if (starsNum > 1)
    {
        printPyramid(starsNum - 2, spaceNum + 1);
    }
}

int main()
{
    int n;
    cin >> n;
    printPyramid((2 * n) - 1, 0);
    return 0;
}