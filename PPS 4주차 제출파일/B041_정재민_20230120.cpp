// pps b41번 leetcode 1323. Maximum 69 Number

// 2023.01.20 금

// 정답

#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int digit[4];

    for (int i = 0; i < 4; i++)
    {
        digit[i] = n / pow(10, 3 - i);
        n = n - digit[i] * pow(10, 3 - i);
    }

    int tmp = 0;
    int flag = 0;
    for (int j = 0; j < 4; j++)
    {
        if (digit[j] == 6 && flag == 0)
        {
            digit[j] = 9;
            flag = 1;
        }
        tmp = tmp + pow(10, 3 - j) * digit[j];
    }
    cout << tmp;
}