// pps a106번 백준 3059번

// 2023.01.19 목

// 정답

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int arr[26] = {0};
        int cnt = 0;
        for (int j = 0; j < s.length(); j++)
        {
            cnt = s[j] - 65;
            arr[cnt]++;
        }
        int sum = 0;

        for (int t = 0; t < 26; t++)
        {
            if (arr[t] == 0)
            {
                sum += t + 65;
            }
        }
        cout << sum << "\n";
    }
}
