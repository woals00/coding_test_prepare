// pps 75번 leetcode Valid Palindrome

// 2023.01.11 수


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    string r;
    int j = 0;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]) == 1 && isupper(s[i]) == 1)
        {
            s[i] = tolower(s[i]);
        }
        if (isalpha(s[i]) == 1)
        {
            r += s[i];
        }
    }
    cout << r << endl;

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