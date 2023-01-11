// pps 19번 백준 2577번

// 2022.12.28 수

//정답

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum = 1;
    int count[10] = {0};
    for (int i = 0; i < 3; i++)
    {
        cin >> num;
        sum *= num;
    }
    string s = to_string(sum);
    for (int j = 0; j < s.length(); j++)
    {
        if (s.at(j) == '0')
        {
            count[0]++;
        }
        else if (s.at(j) == '1')
        {
            count[1]++;
        }
        else if (s.at(j) == '2')
        {
            count[2]++;
        }
        else if (s.at(j) == '3')
        {
            count[3]++;
        }
        else if (s.at(j) == '4')
        {
            count[4]++;
        }
        else if (s.at(j) == '5')
        {
            count[5]++;
        }
        else if (s.at(j) == '6')
        {
            count[6]++;
        }
        else if (s.at(j) == '7')
        {
            count[7]++;
        }
        else if (s.at(j) == '8')
        {
            count[8]++;
        }
        else
        {
            count[9]++;
        }
    }
    for(int t = 0; t < 10; t++){
        cout << count[t] << endl;
    }

    return 0;
}