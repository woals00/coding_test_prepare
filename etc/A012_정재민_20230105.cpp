// pps a12번 leetcode count primes

// 2023.01.05 목

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int num;
    int count = 0;
    int result = 0;
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j < num; j++)
        {
            if(i == 1 || i == 0){
                count = 10;
            }
            if (i % j != 0)
            {
                count = count;
            }
            else
            {
                count++;
            }
        }
        if (count < 3)
        {
            cout << i << endl;
            result++;
        }
        count = 0;
    }
    cout << result << endl;
}