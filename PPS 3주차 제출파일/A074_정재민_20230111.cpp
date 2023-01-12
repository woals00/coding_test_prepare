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

    string s1;
    string s2;

    for (int p = 0; p < r.length() / 2; p++)
    {
        if (r.length() % 2 == 0)
        {
            s1 += r[p];
        }
        else
        {
            if (p == r.length() / 2)
            {
                break;
            }
            s1 += r[p];
        }
    }
    for (int q = r.length(); q >= r.length() / 2; q--)
    {
        if (r.length() % 2 == 0)
        {
            s2 += r[q];
        }
        else
        {
            if (q == r.length() / 2)
            {
                break;
            }
            s2 += r[q];
        }
    }

    cout << "s1: " << s1 << endl;
    ;
    cout << "s2: " << s2;
    return 0;
}