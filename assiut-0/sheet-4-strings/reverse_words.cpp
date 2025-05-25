#include "iostream"
#include "string"
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    stringstream words(S);
    string word;

    int count = 0;
    while (words >> word)
    {
        if (count > 0)
        {
            cout << ' ';
        }
        string reversed = "";
        for (int i = word.size() - 1; i >= 0; i--)
        {
            reversed.push_back(word[i]);
        }
        cout << reversed;
        count++;
    }

    return 0;
}