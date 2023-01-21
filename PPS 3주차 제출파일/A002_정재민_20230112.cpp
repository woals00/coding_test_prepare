// pps 2번 leetcode Pascal's triangle

// 2023.01.12 목

//정답

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int n)
    {
        vector<vector<int>> v;
        for (int i = 0; i <= n; i++)
        {
            vector<int> vec;
            vec.resize(i);
            v.push_back(vec);
            for (int j = 0; j < v[i].size(); j++)
            {
                if (i == 0)
                {
                    v[i][j] = 1;
                }
                else if (i == 2)
                {
                    v[i][j] = 1;
                }
                else
                {
                    if (j == 0)
                    {
                        v[i][j] = 1;
                    }
                    else if (j == v[i].size() - 1)
                    {
                        v[i][j] = 1;
                    }
                    else
                    {
                        v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
                    }
                }
            }
        }
        v.erase(v.begin());
        return v;
    }
};