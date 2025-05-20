#include "iostream"
#include "string"
using namespace std;

int main()
{
    string S, newStr;
    cin >> S;
    newStr = "";
    for (int i = 0; i < S.size(); i++)
    {
        if (S.substr(i, 5) == "EGYPT")
        {
            newStr += " ";
            i += 4;
        }
        else
        {
            newStr += S[i];
        }
    }
    cout << newStr;
    return 0;
}