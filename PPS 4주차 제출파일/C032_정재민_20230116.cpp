// pps c32번 백준 2292번

// 2023.01.16 월

//정답

#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int range = 1;
    int r = 0;
    int i = 0;
    int start = 0;
    int end = 0;
    int plus = 0;
    cin >> n;
    while (1)
    {
        if(n == 1){
            r = 1;
            cout << r;
            break;
        }
        if (n >= start && n <= end)
        {
            r = plus + 1;
            cout << r;
            break;
        }
        else
        {
            start = range + 6 * i + 1;
            end = range + 6 * (i + plus + 1);
            plus++;
            i += plus;
        }
        cout << "start : " << start << " end : " << end << "\n";
    }
}