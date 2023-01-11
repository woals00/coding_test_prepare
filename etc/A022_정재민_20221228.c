// pps a22번 백준 1267번

// 2022.12.28 수

//정답

#include <stdio.h>

int main()
{
    int num;
    int second;
    int y_price = 0;
    int m_price = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &second);
        for (int j = 0; j < 10000; j++)
        {
            if (second >= 30 * j && second < 30 * (j + 1))
            {
                y_price += 10 * (j + 1);
            }
            if (second >= 60 * j && second < 60 * (j + 1))
            {
                m_price += 15 * (j + 1);
            }
        }
    }
    if (m_price < y_price)
    {
        printf("M %d", m_price);
    }
    else if (m_price == y_price)
    {
        printf("Y M %d", m_price);
    }
    else
    {
        printf("Y %d", y_price);
    }
    return 0;
}