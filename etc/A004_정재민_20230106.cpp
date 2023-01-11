//pps 4번 프로그래머스 나누어떨어지는 숫자 배열

//2023.01.06 금

//정답


#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++){
        if(arr.at(i) % divisor == 0){
            answer.push_back(arr.at(i));
        }
    }
    sort(answer.begin(), answer.end());
    if(answer.empty() == true){
        answer.push_back(-1);
    }
    return answer;

}