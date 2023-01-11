// pps a25번 leetcode 342번

// 2023.01.03 화

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int p_count = 0;
    int n_count = 1;
    int input;
    input = num;
    while (input != 0)
    {
        if (input % 4 == 0)
        {
            p_count++;
            // cout << input << endl;
        }
        else if (input == 0)
        {
            p_count++;
            n_count = 1;
        }
        else if(input == 1){
            break;
        }
        else
        {
            // cout << "ex" << endl;
            n_count = 0;
        }
        input = input / 4;
    }
    if (num == 4 || num == 1 || (p_count > 1 && n_count != 0))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}