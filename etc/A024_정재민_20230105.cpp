// pps 24번 leetcode lemonade change

// 2023.01.05 목

//정답

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        int n = bills.size();
        int five = 0, ten = 0, twenty = 0;
        for (int i = 0; i < n; i++)
        {
            if (bills[i] == 5)
                five++;
            else if (bills[i] == 10)
            {
                ten++;
                if (five > 0)
                    five--;
                else
                    return false;
            }
            else
            {
                twenty++;
                if (ten > 0 && five > 0)
                {
                    ten--;
                    five--;
                }
                else if (five > 2)
                    five = five - 3;
                else
                    return false;
            }
        }
        return true;
    }
};
