// pps 44번 leetcode 551. Student Attendance Record I

// 2023.01.07 토

//정답 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    bool b;
    int flag = 0;
    int a_count = 0;
    int l_count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (flag == 0 && s[i] == 'L')
        {
            l_count++;
        }
        if (s[i] == 'A')
        {
            flag = 1;
            a_count++;
        }
        if (s[i] == 'P')
        {
            flag = 1;
        }
        if (flag == 1 && s[i] == 'L')
        {
            flag = 0;
            l_count = 1;
        }
        if (a_count > 1 || l_count > 2)
        {
            b = false;
            break;
        }
        else
        {
            b = true;
        }
    }
}