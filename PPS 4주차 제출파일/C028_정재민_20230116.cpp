// pps c28번 백준 15552번

// 2023.01.16 월

//정답

#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL); // 입출력 시간 줄일 때 사용 (c에서 사용하는 입출력 사용하면 안됨. ex: printf, scanf 등등)
    int n;
    int n1, n2;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> n1;
        cin >> n2;
        sum = n1 + n2;
        cout << sum << "\n";
    }
}