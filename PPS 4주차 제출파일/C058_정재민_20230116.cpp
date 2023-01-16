// pps c58번 백준 11004번

// 2023.01.16 월

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n1, n2, input;
    vector<int> v;
    cin >> n1;
    cin >> n2;
    for (int i = 0; i < n1; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    cout << v[n2 - 1];
}