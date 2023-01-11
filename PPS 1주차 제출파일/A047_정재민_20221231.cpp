// pps a47번 백준 11721번

// 2022.12.31 토

//정답

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
        if (i % 10 == 9)
            cout << '\n';
    }
}