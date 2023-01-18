// pps D002번 백준 10250번

// 2023.01.18. 수

// 정답

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int h, w, N;
    int r;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> h >> w >> N;
        r = 0;
        cnt = 0;

        for (int p = 1; p <= w; p++)
        {
            for (int q = 1; q <= h; q++)
            {
                r = (q * 100) + (p);
                cnt++;
                if (cnt == N)
                {
                    cout << r << endl;
                    break;
                }
            }
        }
    }
}