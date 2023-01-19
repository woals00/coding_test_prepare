// pps a108번 백준 3062번

// 2023.01.19 목

// 정답

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s1;
    string s2 = "";
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        for (int j = 0; j < s1.length(); j++)
        {
            s2 += s1[s1.length() - 1 - j];
        }
        sum = stoi(s1) + stoi(s2);
        s2 = "";

        string s = to_string(sum);

        int cnt = 0;

        for (int p = 0; p < s.length() / 2; p++)
        {
            if (s[p] == s[s.length() - 1 - p])
                cnt++;
        }
        if (cnt == s.length() / 2)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}