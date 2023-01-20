// pps b34번 프로그래머스 체육복

// 2023.01.20 금

// 정답

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 6;

    vector<int> lost = {1, 2, 3};
    vector<int> reserve = {1, 2, 3};

    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size(); j++)
        {
            if (lost[i] == reserve[j])
            {
                lost.erase(lost.begin() + i);
                reserve.erase(reserve.begin() + j);
                i = -1; // 이게 중요
                break;
            }
        }
    }

    int answer = n - lost.size();

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size(); j++)
        {
            if (lost[i] + 1 == reserve[j] || lost[i] - 1 == reserve[j])
            {
                answer++;
                reserve.erase(reserve.begin() + j); // reserve만 제거
                break;
            }
        }
    }

    cout << answer;
}