// pps 61번 leetcode 168. Excel Sheet Column Title

// 2023.01.13 금

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() // 너무 노가다,,
{
    long n;
    cin >> n;
    string s;
    long p = 0;
    long q = 0;

    long temp_p = 0;
    long temp_q = 0;

    while (n > 0)
    {
        p = n / 26;
        q = n % 26;

        n = p;
        temp_p = p;
        temp_q = q;

        cout << p << " " << q << endl;
        if (temp_p == q && temp_q == p)
        {
            if (temp_p == 1 && temp_q == 0 && p == 0 && q == 1)
            {
                // cout << "P";
                s.erase(s.length() - 1);
                s += 90;
                break;
            }
            else if (temp_p == 1 && temp_q == 1)
            {
                // s.erase(s.length());
                // s += 90;
                // break;
            }
            else
            {
                s.erase(s.length() - 1);
                s.insert(s.begin(), 90);
                s.insert(s.begin() + 1, q - 1 + 64);
                break;
                // p = p -1;
            }
        }

        s += q + 64;
    }
    reverse(s.begin(), s.end());
    cout << s;
}

class Solution { // 식 보고 이해하기
public:
    string convertToTitle(int n) {
        string ans;
        
        /*
        For string ABZ,
        it is n = (0+1)*26^2 + (1+1)*26^2 + (25+1)*26^0,
        to get 'Z'(which is 25),
        we operate on the equation above:
        n-1 = (0+1)*26^2 + (1+1)*26^2 + 25,
        so we do (n-1)%26 to get the last char, which is 'Z' (1)
        
        then to go to the next iteration,
        we need to make n = (0+1)*26^2 + (1+1)*26^2,
        we do this by n = (n-1)/26 (2)
        */
        while(n){
            // cout << n%26 << " ";
            ans.insert(ans.begin(), 'A' + (n-1)%26);
            n = (n-1)/26;
        }
    
        return ans;
    }
};