// pps a104번 백준 14487번

// 2023.01.18 목

// 정답

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, input;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    int tmp1 = 0;

    for (int j = 0; j < n - 1; j++)
    {
        tmp1 += v[j];
    }

    cout << tmp1;
}