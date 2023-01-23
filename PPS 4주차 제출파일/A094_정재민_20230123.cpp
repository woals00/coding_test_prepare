// pps a94번 백준 2941번

// 2023.01.23 월

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int idx;
    string str;
    cin >> str;
    for (int i = 0; i < croatian.size(); i++)
    {
        while (1)
        {
            idx = str.find(croatian[i]);
            if (idx == string::npos)
                break;
            str.replace(idx, croatian[i].length(), "#");
        }
    }
    cout << str.length();
}