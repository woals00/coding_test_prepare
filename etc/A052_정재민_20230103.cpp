// pps 52번 백준 8958번

// 2023.01.03 화

// 정답

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
    
int main()
{
    string s;
    int n, sum = 0, a = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'O')
            {
                a += 1;
                sum += a;
            }
            else
            {
                a = 0;
            }
        }
        cout << sum << "\n";
        sum = 0;
        a = 0;
    }
}