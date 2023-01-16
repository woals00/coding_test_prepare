// pps c69번 백준 11399번

// 2023.01.16 월

//정답

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int input;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());

    int sum = 0;
    int result = 0;

    for(int j = 0; j < n; j++){
        sum += v[j];
        result += sum;
    }
    cout << result;
}