//pps a80번 leetcode 169. Majority Element

//2023.01.23 월 


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[(nums.size()-1)/2];
    }
};