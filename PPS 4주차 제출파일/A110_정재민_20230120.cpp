// pps a110번 백준 5585번

// 2023.01.20 금

// 정답

#include <iostream>

using namespace std;

int main()
{
    int n;
    int cnt = 0;
    cin >> n;
    n = 1000 - n;
    while (n > 0)
    {
        if (n / 500 > 0)
        {
            cnt += n / 500;
            n = n - (500 * (n / 500));
        }
        else if (n / 100 > 0)
        {
            cnt += n / 100;
            n = n - (100 * (n / 100));
        }
        else if (n / 50 > 0)
        {
            cnt += n / 50;
            n = n - (50 * (n / 50));
        }

        else if (n / 10 > 0)
        {
            cnt += n / 10;
            n = n - (10 * (n / 10));
        }
        else if (n / 5 > 0)
        {
            cnt += n / 5;
            n = n - (5 * (n / 5));
        }
        else
        {
            cnt += n / 1;
            n = n - (1 * (n / 1));
        }
        // cout << n << endl;
    }
    cout << cnt;
}