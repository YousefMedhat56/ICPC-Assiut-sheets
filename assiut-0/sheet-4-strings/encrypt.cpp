#include "iostream"
#include "string"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    int num;
    string message;
    cin >> num;
    cin >> message;

    map<char, char> originalToKey = {};
    map<char, char> keyToOriginal = {};

    for (int i = 0; i < key.size(); i++)
    {
        originalToKey.insert({original[i], key[i]});
        keyToOriginal.insert({key[i], original[i]});
    }

    // ENCRYPT
    if (num == 1)
    {
        string encrypt = "";
        for (int i = 0; i < message.size(); i++)
        {

            encrypt += originalToKey[message[i]];
        }
        cout << encrypt;
    }

    // DECRYPT
    else if (num == 2)
    {
        string decrypt = "";
        for (int i = 0; i < message.size(); i++)
        {
            decrypt += keyToOriginal[message[i]];
        }
        cout << decrypt;
    }
    return 0;
}