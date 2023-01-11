//pps a26번 프로그래머스 하샤드 수

//2022.12.31 토

#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum = 0;
    int temp = x;
    while(temp!= 0){
        sum += temp % 10;
        temp /= 10;
    }
    return (x % sum  == 0) ? true : false;
}