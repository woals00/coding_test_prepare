// pps a42번 leetcode 844. Backspace String Compare

// 2023.01.13 금

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s, t;
    vector<char> sv;
    vector<string> tv;
    cin >> s;
    // cin >> t;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '#')
        {
            sv.pop_back();
        }
        else
        {
            sv.push_back(s[i]);
        }
        cout << sv[i];
    }
}