//pps 6번 프로그래머스 문자열 내 p와 y의 개수

//2022.12.28

//정답

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int p_count = 0;
    int y_count = 0;
    bool answer = true;
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == 'p' || s.at(i) == 'P'){
            p_count++;
        }
        if(s.at(i) == 'y' || s.at(i) == 'Y'){
            y_count++;
        }
    }
    if(p_count == y_count || ((p_count == 0) && (y_count == 0))){
        answer = true;
    }
    else{
        answer = false;
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    return answer;
}

int main(){
    string s = "pPoooyY";
    bool result;
    result = solution(s);
    if(result == 1){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
}
