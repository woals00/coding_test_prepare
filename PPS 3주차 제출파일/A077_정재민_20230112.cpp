// pps 77번 백준 2822번

// 2023.01.12 목

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> n;
    vector<int> index;
    int input;
    int temp = 0;
    for (int i = 0; i < 8; i++)
    {
        cin >> input;
        n.push_back(input);
        if (input > temp)
        {
            temp = input;
            index.push_back(i+1);
        }
        // cout << n[i] << endl;
        cout << temp << endl;
    }
    // sort(n.begin(), n.end());

    // for (int j = 7; j > 2; j--)
    // {
    //     cout << n[j] << endl;
    // }
}