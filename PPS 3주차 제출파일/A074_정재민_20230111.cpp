// pps 74번 leetcode Valid Palindrome

// 2023.01.11 수

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    string r;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]) == 1)
        {
            if (isupper(s[i]) == 1)
            {
                r += tolower(s[i]);
            }
            else
            {
                r += s[i];
            }
        }
    }

    int cnt = 0;

    for (int j = 0; j < r.length() / 2; j++)
    {
        // cout << r[j] << " : " << r[r.length() - 1 - j] << endl;
        if (r[j] == r[r.length() - 1 - j])
        {
            cnt++;
        }
        else
        {
            cout << "false" << endl;
            break;
        }
    }
    if (cnt == r.length() / 2)
    {
        cout << "T";
    }
}

