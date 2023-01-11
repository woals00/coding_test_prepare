// pps a15번 백준 2475번

// 2022.12.28 수

//정답

#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    int result = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        sum = sum + (num * num);
    }
    result = sum % 10;
    printf("%d", result);

    return 0;
}
