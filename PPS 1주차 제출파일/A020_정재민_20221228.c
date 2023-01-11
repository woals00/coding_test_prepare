// pps 20번 백준 2455번

// 2022.12.28 수

//정답

#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &num);
            if (j == 0)
            {
                sum -= num;
            }
            else
            {
                sum += num;
            }
        }
        arr[i] = sum;
    }
    int max = arr[0];
    for(int t = 0; t < 4; t++){
        if(arr[t] > max){
            max = arr[t];
        }
        else{
            max = max;
        }
    }
    printf("%d\n", max);
    return 0;
}