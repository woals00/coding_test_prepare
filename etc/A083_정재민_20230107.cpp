// pps 83번 백준 10867번

// 2023.01.07 토

//정답


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> num;
    int t;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        num.push_back(t);
    }

    sort(num.begin(), num.end());
    num.erase(unique(num.begin(), num.end()), num.end());

    for (int j = 0; j < num.size(); j++)
    {
        cout << num[j] << endl;
    }
}