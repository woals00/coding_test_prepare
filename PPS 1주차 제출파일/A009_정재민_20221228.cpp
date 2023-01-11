// pps 9번 프로그래머스 문자열 다루기 기본

// 2022.12.28 수

//정답


#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int count = 0;
    bool answer = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s.at(i)) != 0)
        {
            count++;
        }
    }
    if (count == s.length() && (s.length() == 4 || s.length() == 6))
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    return answer;
}

int main(void)
{
    string s1 = "a234";

    bool r1;

    r1 = solution(s1);

    if (r1 == 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}