// pps 47번 leetcode 844. Backspace String Compare

// 2023.01.07 토

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '#')
        {
            if (i > 0)
            {
                s.erase(s.begin() + i);
                s.erase(s.begin() + i - 1);
            }
            else
            {
                s.erase(s.begin() + i);
            }
            i = i - 2;
        }
    }
    for (int j = 0; j < t.length(); j++)
    {
        if (t[j] == '#')
        {
            if (j > 0)
            {
                t.erase(t.begin() + j);
                t.erase(t.begin() + j - 1);
            }
            else
            {
                t.erase(t.begin() + j);
            }
            j = j - 2;
        }
        cout << j << endl;
    }
    // cout << s << "\n"
    //      << t << endl;
    // if (s == t)
    // {
    //     cout << "T" << endl;
    // }
    // else
    // {
    //     cout << "F" << endl;
    // }
}