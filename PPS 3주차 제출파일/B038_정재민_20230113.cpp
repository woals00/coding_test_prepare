// pps b38번 백준 16435번

// 2023.01.13 금

//정답

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    int length;
    cin >> n;
    cin >> length;
    int fruit;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> fruit;
        v.push_back(fruit);
    }

    sort(v.begin(), v.end());

    for (int j = 0; j < v.size(); j++)
    {
        if (length >= v[j])
        {
            length += 1;
        }
    }

    cout << length;
}