#include "iostream"
#include "string"
using namespace std;

int countVowels(string &S, int index, int count)
{

    char c = S[index];

    // check if the character is a vowel
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        count++;
    }

    if (index > 0)
    {
        return countVowels(S, index - 1, count);
    }
    else
    {
        return count;
    }
}

int main()
{
    string S;
    getline(cin, S);
    cout << countVowels(S, S.size() - 1, 0);
    return 0;
}
