// pps 13번 leegcode single number

// 2023.01.06 금

//정답

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() //비트연산 이용해서 풀기
{
    vector<int> nums = {4, 1, 2, 1, 2};
    int res = 0;

    for (auto &num : nums)
    {
        res ^= num;
    }

    cout << res << endl;
}