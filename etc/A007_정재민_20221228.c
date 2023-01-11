//pps a7번 백준 2920번 문제

//2022.12.28 수

//정답
#include<stdio.h>

int main(void)
{
    int num[8];
    int count = 0;
    for(int i = 0; i < 8; i++){
        scanf("%d", &num[i]);
    }
    for(int j = 0; j < 8; j++){
        if(num[j+1] == num[j] + 1){
            count++;
            // printf("%d", count);
        }
        else if(num[j+1] == num[j] - 1){
            count--;
        }
    }
    if(count == 7){
        printf("ascending");
    }
    else if(count == -7){
        printf("descending");
    }
    else{
        printf("mixed");
    }
    return 0;
}
