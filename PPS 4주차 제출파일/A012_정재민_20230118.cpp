// pps a12번 leetcode Count Primes

// 2023.01.18 수

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int flag = 0;
    int cnt = 0;
    int result = 0;
    for (int i = 2; i < n; i++)
    {
        cnt = 0;
        flag = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                // cout << "나누어짐" << endl;
                cnt++;
            }
            cout << "i : " << i << " j : " << j << " 나머지 : " << i % j << " cnt : " << cnt << endl;

            if (cnt > 2)
            {
                // cout << "안 나누어짐" << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            result++;
        }
    }
    cout << result;
}