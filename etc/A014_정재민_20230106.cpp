// pps 14번 leetcode summary ranges

// 2023.01.06 금

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {0, 1, 2, 4, 5, 7};
    vector<string> res;
    int i = 0, n = nums.size();
    while (i < n)
    {
        int start, end;
        start = nums[i];
        while (i + 1 < n && nums[i + 1] == nums[i] + 1)
            i++;
        end = nums[i];
        if (start == end)
            res.push_back(to_string(start));
        else
            res.push_back(to_string(start) + "->" + to_string(end));
        i++;
    }
    
}
