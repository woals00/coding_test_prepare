//백준 25304번

//2023.02.02 목

#include<iostream>

using namespace std;

int main(){
    int n, N;
    int price, cnt;
    cin >> n;
    cin >> N;
    int sum = 0;
    for(int i = 0; i < N; i++){
        cin >> price >> cnt;
        sum += price * cnt;
    }
    if(sum == n){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

}