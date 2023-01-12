//pps 75번 프로그래머스 가장 큰 수

//2023.01.12 목

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<int> n = {6, 10, 2};
    string s = "";
    string temp = "";
    for(int i = 0; i < n.size(); i++){
        temp = to_string(n[i]);
        for(int j = 0; j < temp.length(); j++){
            
        }
        s += to_string(n[i]);
    }
    cout << s;
}