//pps 21번 백준 2010번

//2022.12.28 수 

//정답

#include<stdio.h>

int main(){
    int num;
    int m;
    int result = 1;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d", &m);
        result += (m - 1);
    }
    printf("%d", result);
}