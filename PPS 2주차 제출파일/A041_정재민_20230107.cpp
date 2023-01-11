// pps 41번 프로그래머스 JadenCase 문자열 만들기

// 2023.01.07 토

//정답


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (count == 0 && isupper(s[i]) == 0)
        {
            s[i] = toupper(s[i]);
        }
        if (count != 0 && islower(s[i]) == 0)
        {
            s[i] = tolower(s[i]);
        }
        count++;
        if (s.at(i) == ' ')
        {
            count = 0;
        }

    }
    cout << s << endl;
}

// isupper(문자열) //대문자 판별 (대문자가 아니라면 0이 반환)
// islower(문자열) //소문자 판별 (소문자가 아니라면 0이 반환)