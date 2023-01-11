// pps a16번 프로그래머스 구명보트

// 2023.01.03 화


#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit)
{
    sort(people.begin(), people.end());
    int answer = 0, idx = 0;
    while (people.size() > idx)
    {
        int back = people.back();
        people.pop_back();
        if (people[idx] + back <= limit)
        {
            answer++;
            idx++;
        }
        else
            answer++;
    }
    return answer;
}