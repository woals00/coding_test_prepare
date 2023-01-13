// pps 60번 leetcode 682. Baseball Game

// 2023.01.13 금

#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        vector<int> scores;

        for (auto op : ops)
        {
            if (op == "+")
            {
                scores.push_back(scores[scores.size() - 1] + scores[scores.size() - 2]);
            }
            else if (op == "D")
            {
                scores.push_back(scores[scores.size() - 1] * 2);
            }
            else if (op == "C")
            {
                scores.pop_back();
            }
            else
            {
                scores.push_back(stoi(op));
            }
        }
        return accumulate(scores.begin(), scores.end(), 0);
    }
};