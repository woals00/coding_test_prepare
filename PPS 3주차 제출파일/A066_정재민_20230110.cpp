// pps 66번 백준1427번

// 2023.01.10 화

//정답

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include<algorithm>

using namespace std;

bool compare(int x, int y){
    return x > y;
}


int main()
{
    int n;
    cin >> n;
    string s = to_string(n);
    vector<int> v;
    for (int i = 0; i < s.length(); i++)
    {
        // cout << s[i] << endl;
        v.push_back(s[i] - '0');
    }
    sort(v.begin(), v.end(),compare);
    stringstream r;
    for(int j = 0; j < v.size(); j++){
        // cout << v.at(j) << endl;
        r << v[j];
    }
    string result = r.str();
    cout << result << endl;
}
