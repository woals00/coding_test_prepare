// pps c29번 백준 1712번

// 2023.01.16 월



#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long a, b, c, n;
    long result = 0;
    long cnt = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    n = a;
    while (1)
    {
        if (b > c)
        {
            cout << -1;
            break;
        }
        n += b;
        result += c;
        cnt++;
        if (result > n)
        {
            cout << cnt;
            break;
        }
    }
}