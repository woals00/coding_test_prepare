// pps a29번 백준 17210번

// 2022.12.31 토

//정답

#include <iostream>

using namespace std;

int main()
{
    int num, first;

    cin >> num;
    cin >> first;
    if (num > 5)
        cout << "Love is open door" << endl;
    else
    {
        for (int i = 0; i < num - 1; i++)
        {
            if (first == 0)
            {
                cout << "1" << endl;
                first = 1;
            }
            else
            {
                cout << "0" << endl;
                first = 0;
            }
        }
    }

    return 0;
}