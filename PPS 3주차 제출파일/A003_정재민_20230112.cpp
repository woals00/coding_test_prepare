// pps 3번 leetcode Plus One

// 2023.01.12 목

//정답

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() // 수가 너무 커지면 감당 불가능
{
    vector<int> digit = {7, 2, 8, 5, 0, 9, 1, 2, 9, 5, 3, 6, 6, 7, 3, 2, 8, 4, 3, 7, 9, 5, 7, 7, 4, 7, 4, 9, 4, 7, 0, 1, 1, 1, 7, 4, 0, 0, 6};
    unsigned long long n = 0;

    unsigned long long t;
    for (int i = 0; i < digit.size(); i++)
    {
        t = pow(10, digit.size() - i - 1);
        n = n + digit[i] * t;
        cout << t << " x " << digit[i] << " = " << n << endl;
        // cout << digit[i] << endl;
        // cout << n << endl;
    }

    n += 1;

    // cout << n << endl;

    string s;
    vector<int> v;

    s = to_string(n);

    for (int j = 0; j < s.length(); j++)
    {
        v.push_back(s[j] - '0');
        // cout << v[j];
    }
}

int main() 
{
    vector<int> digit = {1, 2, 3};
    int end = digit.size() - 1;
    while (1)
    {
        if (digit[end] == 9)
        {
            digit[end] = 0;
            if(end -1 >= 0){
                --end;
            }
            else{
                digit.insert(digit.begin(), 1);
                break;
            }
        }
        else
        {
            digit[end] += 1;
            break;
        }
    }
}