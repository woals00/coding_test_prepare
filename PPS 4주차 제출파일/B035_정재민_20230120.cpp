// pps b35번 백준 11047번

// 2023.01.20 금

// 정답


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, N;
    cin >> n >> N;
    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int j = n - 1;
    int sum = 0;
    while (1)
    {
        if (N / input[j] > 0)
        {
            sum += N / input[j];
            N = N - (input[j] * (N / input[j]));
        }
        else
        {
            j--;
        }
        if (N == 0)
        {
            break;
        }
    }
    cout << sum;
}
