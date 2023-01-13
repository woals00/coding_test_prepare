// pps a1번 leetcode 455. Assign Cookies

// 2023.01.13 금

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0;
        for (int j = 0; i < g.size() && j < s.size(); j++)
        {
            if (g[i] <= s[j])
                i++;
        }
        return i;
    }
};