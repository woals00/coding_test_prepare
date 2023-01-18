// pps 63번 leetcode add binary

// 2023.01.13 금

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string a, b;
    string s;

    cin >> a;
    cin >> b;

    int p, q;

    int carry_out = 0;

    int i = 0;

    while (1)
    {
        p = a[a.length() - i] - '0';
        q = b[b.length() - i] - '0';

        if (p + q == 0)
        {
            s[s.length() - i] = 0;
            if (s.length() - i - 1 >= 0)
            {
                i--;
            }
            else
            {
                s[i] = '1';
                // digit.insert(digit.begin(), 1);
                // break;
            }
        }
        else
        {
            s[i] = '1';
            break;
        }
        i++;
    }
    cout << s;
}