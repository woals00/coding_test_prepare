// pps a105번 백준 1193번

// 2023.01.05 목

//정답

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (n > i)
    {
        n -= i;
        i++;
    }

    if (i % 2 == 1)
        cout << i + 1 - n << '/' << n << endl;
    else
        cout << n << '/' << i + 1 - n << endl;
}

// 1/1 -> 1/2 -> 2/1 -> 3/1 -> 2/2 -> 1/3 -> 1/4 -> 2/3 -> 3/2 -> 4/1