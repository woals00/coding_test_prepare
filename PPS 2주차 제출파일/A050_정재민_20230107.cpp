// pps 50번 백준 5598번

// 2023.01.07 토

//정답


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string before = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // 65 ~ 91
    string after = "DEFGHIJKLMNOPQRSTUVWXYZABC";  // 68 ~ 91
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] >= 65 && input[i] <= 67)
        {
            input[i] = input[i] + 23;
        }
        else
        {
            input[i] = input[i] - 3;
        }
    }
    cout << input << endl;
}