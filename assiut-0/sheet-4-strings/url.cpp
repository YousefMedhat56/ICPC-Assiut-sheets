#include "iostream"
#include "string"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, string> parameters = {{"username", ""}, {"pwd", ""}, {"profile", ""}, {"role", ""}, {"key", ""}};
    string parametersArr[5] = {};
    string url;
    cin >> url;

    string parametersInUrl = url.substr(url.find('?') + 1);

    // loop through the 5 parameters
    for (int i = 0; i < 5; i++)
    {
        int delimeterIndex = parametersInUrl.find('&');
        string keyAndVal = parametersInUrl.substr(0, delimeterIndex);
        parametersInUrl = parametersInUrl.substr(delimeterIndex + 1);

        parametersArr[i] = keyAndVal;
    }

    // loop through keys and values

    for (int i = 0; i < 5; i++)
    {
        int delimeterIndex = parametersArr[i].find('=');

        string key = parametersArr[i].substr(0, delimeterIndex);
        string val = parametersArr[i].substr(delimeterIndex + 1);

        // change the parameter value
        parameters[key] = val;
    }

    cout << "username: " << parameters["username"] << endl;
    cout << "pwd: " << parameters["pwd"] << endl;
    cout << "profile: " << parameters["profile"] << endl;
    cout << "role: " << parameters["role"] << endl;
    cout << "key: " << parameters["key"] << endl;

    return 0;
}