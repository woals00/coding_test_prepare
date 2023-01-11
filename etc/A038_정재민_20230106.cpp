// pps 38번 leetcode sqrt(x)

// 2023.01.06 금

//정답

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;
    cin >> x;
    long long n = 0;
    int result = 0;
    for (long long i = 0; i <= x; i++)
    {
        n = i * i;
        if (n < x)
        {
            n = 0;
        }
        else if (n == x)
        {
            result = i;
        }
        else
        {
            result = n / i;
            result = result - 1;
            break;
        }
    }
    cout << result << endl;
}