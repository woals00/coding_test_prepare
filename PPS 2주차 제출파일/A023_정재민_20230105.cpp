// pps a23번 leetcode adddigits

// 2023.01.05 목

//정답

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int digit = 0;

    string s;
    s = to_string(num);

    int i = 0;
    int count = 0;
    while (1)
    {
        if (count == s.length())
        {
            if (to_string(digit).length() != 1)
            {
                s = to_string(digit);
                cout << s << endl;
                digit = 0;
                count = 0;
                i = 0;
            }
            else
            {
                break;
            }
        }
        else
        {
            digit = digit + (s.at(i) - '0');
            i++;
            count++;
        }
    }

    cout << digit << endl;
}

// 문자를 정수로 만들기  문자 - '0'
// 정수를 문자로 만들기  정수 + '0'