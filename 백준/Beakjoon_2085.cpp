// 백준 1085번

// 2023.02.07

#include <iostream>

using namespace std;

int main()
{
    int x, y, w, h;
    int r1, r2;
    cin >> x >> y >> w >> h;

    if (x > w - x)
        r1 = w - x;
    else
        r1 = x;

    if (y > h - y)
        r2 = h - y;
    else
        r2 = y;

    if(r1 > r2)
        r1 = r2;
    else
        r1 = r1;

    cout << r1;
}