// pps b15번 백준 14248번

// 2023.01.23 월

#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MAX = 100001;
int n, s, val[MAX];
bool visited[MAX];

void dfs(int now)
{
    if (now < 1 || now > n)
        return;
    visited[now] = true;

    dfs(now + val[now]);
    dfs(now - val[now]);
}

int main(void)
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> val[i];

    cin >> s;
    dfs(s);

    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (visited[i])
            ans++;

    cout << ans;
    return 0;
}