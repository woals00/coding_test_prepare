// pps 84번 백준 11656번

// 2023.01.12 목

//정답

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string t;
    vector<string> v;
    for (int i = 0; i < s.length(); i++)
    {
        t = s.substr(i, s.length());
        v.push_back(t);
        // cout << t << endl;
    }
    sort(v.begin(), v.end());

    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << "\n";
    }
}