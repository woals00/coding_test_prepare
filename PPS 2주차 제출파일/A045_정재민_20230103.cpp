// pps 45번 백준 1157번

// 2023.01.03 화

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int alphabet[26] = {0};
    int cnt = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 97)
            alphabet[s[i] - 65]++; // 대문자
        else
            alphabet[s[i] - 97]++; // 소문자
    }
    int max = 0, max_indx = 0;

    for (int i = 0; i < 26; i++)
    {
        if (max < alphabet[i])
        {
            max = alphabet[i];
            max_indx = i;
        }
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (max == alphabet[i])
            cnt++;
    }

    if (cnt > 1)
        cout << "?";
    else
        cout << (char)(max_indx + 65);
}