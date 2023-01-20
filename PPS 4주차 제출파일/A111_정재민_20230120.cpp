// pps a111번 백준 9546번

// 2023.01.20 금

// 정답

#include <iostream>

using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, N;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> N;
        double f = 0.0;
        double F = 0.0;
        double r = 0.0;
        int sum = 0;
        for (int j = 0; j < N; j++)
        {
            if (j == 0)
            {
                F = 0.5;
                f = F + 0.5;
                sum += f;
            }
            else
            {
                f = F * 2 + 0.5;
                F = f;
                r = f + 0.5;
                sum += r;
            }
        }
        cout << sum << "\n";
    }
}

// 7 = ((1.5 * 2 + 0.5) + 0.5) + ((0.5 * 2 + 0.5) + 0.5) + ((0.5 * 0 + 0.5) + 0.5)
