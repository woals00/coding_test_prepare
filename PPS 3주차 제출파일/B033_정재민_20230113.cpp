// pps b33번 백준 10162번

// 2023.01.13 금

//정답

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int time;
    cin >> time;
    int a = 300;
    int b = 60;
    int c = 10;

    int a_count = 0;
    int b_count = 0;
    int c_count = 0;

    while (1)
    {
        if (time / a != 0)
        {
            a_count += (time / a);
            time -= a * (time / a);
        }
        else if (time / b != 0)
        {
            b_count += (time / b);
            time -= b * (time / b);
        }
        else if (time / c != 0)
        {
            c_count += (time / c);
            time -= c * (time / c);
        }
        else
        {
            cout << "-1";
            break;
        }
        if (time == 0)
        {
            cout << a_count << " " << b_count << " " << c_count;
            break;
        }
    }
}