// pps a42번 leetcode 844. Backspace String Compare

// 2023.01.13 금

// 정답

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[0] == '#')
            {
                s.erase(0, 1);
                i = 0;
                while (true)
                {
                    if (s[0] == '#' and s != "")
                    {
                        s.erase(0, 1);
                        i = 0;
                    }
                    else
                        break;
                }
                if (s == "")
                    break;
            }
            if (s[i] == '#' and i != 0)
            {
                s.erase(i - 1, 2);
                i = i - 2;
                if (s == "")
                    break;
            }
        }
        for (int i = 0; i < t.size(); ++i)
        {
            if (t[0] == '#')
            {
                t.erase(0, 1);
                i = 0;
                while (true)
                {
                    if (t[0] == '#' and t != "")
                    {
                        t.erase(0, 1);
                        i = 0;
                    }
                    else
                        break;
                }
                if (t == "")
                    break;
            }
            if (t[i] == '#' and i != 0)
            {
                t.erase(i - 1, 2);
                i = i - 2;
                if (t == "")
                    break;
            }
        }
        if (s == t)
            return true;
        return false;
    }
};