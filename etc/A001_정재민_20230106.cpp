// pps a1번 문제 assign cookies

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    int count = 0;
    int result = 0;
    int flag = 0;
    for (int i = 0; i < g.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] >= g[i])
            {
                flag = 1;
                count++;
            }
            else
            {
                flag = 0;
            }
        }
        if (g.size() > s.size() && count > s.size())
        {
            result = s.size();
        }
        if (count > 0)
        {
            result++;
            count = 0;
        }
        if (s.size() == 1 && flag == 1)
        {
            result = 1;
        }
    }
    return result;
}

int main()
{
    vector<int> g = {10, 9, 8, 7, 10, 9, 8, 7};
    vector<int> s = {10, 9, 8, 7};
    int result = findContentChildren(g, s);
    printf("%d", result);
}
