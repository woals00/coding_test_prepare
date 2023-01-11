// pps a8번 문제 백준4344번

//2022.12.28 수

//정답

#include <stdio.h>

int main(void)
{
    int num;
    int student;
    int sum = 0;
    int avg = 0;
    int count = 0;
    scanf("%d", &num);
    float result[num];
    float compare;
    for (int i = 0; i < num; i++)
    {
        sum = 0;
        avg = 0;
        count = 0;
        scanf("%d", &student);
        int score[student];
        for (int j = 0; j < student; j++)
        {
            scanf("%d", &score[j]);
            sum += score[j];
            // printf("1");
        }
        avg = sum / student;
        for (int p = 0; p < student; p++)
        {
            if (avg < score[p])
            {
                count++;
            }
        }
        compare = (float)count / (float)student;
        result[i] = compare * 100;
    }
    for (int q = 0; q < num; q++)
    {
        printf("%.3f%%\n", result[q]);
    }
    return 0;
}
