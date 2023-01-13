// pps b32번 백준 9237번

// 2023.01.13 금

//정답


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int input;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());

    int day = 1;
    for (int j = v.size()-1; j >= 0; j--)
    {
        v[j] += day;
        // cout << v[j] << endl;
        day++;
    }

    sort(v.begin(), v.end());

    cout << v.back() + 1;
}