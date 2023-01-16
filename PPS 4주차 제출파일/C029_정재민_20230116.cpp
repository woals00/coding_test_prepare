// pps c29번 백준 1712번

// 2023.01.16 월

// 시간초과

#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, n;
    int result = 0;
    int cnt = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    if (c - b <= 0)
    {
        cout << -1;
    }
    else
    {
        result = a / (c - b) + 1;
        cout << result;
    }
}