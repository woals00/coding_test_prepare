// pps 81번 백준 2693번

// 2023.01.12 목

//정답


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(10, 0));
    vector<int> result;

    int input;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> input;
            v[i][j] = input;
            // cout << v[i][j];
        }
        sort(v[i].begin(), v[i].end());
        result.push_back(v[i][7]);
        v[i].clear();
    }

    for(int q = 0; q < v.size(); q++){
        cout << result[q] << endl;
    }
}