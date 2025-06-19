#include "iostream"
#include "string"
using namespace std;

int main()
{
    string word;
    cin >> word;

    int min_rotations = 0;
    char curr_letter = 'a';

    for (int i = 0; i < word.length(); i++)
    {
        int rotations_forward;
        int rotations_backward;

        if (curr_letter >= word[i])
        {
            rotations_forward = word[i] - curr_letter + 26;
            rotations_backward = curr_letter - word[i];
        }
        else
        {
            rotations_forward = 26 + curr_letter - word[i];
            rotations_backward = word[i] - curr_letter;
        }

        min_rotations += min(rotations_forward, rotations_backward);
        curr_letter = word[i];
    }

    cout << min_rotations;
    return 0;
}
