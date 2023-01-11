// pps a46번 백준1159번

// 2023.01.03 화

//정답 


#include <iostream>
#include <string>

using namespace std;

int N;
int alphabet[26];
string s = "abcdefghijklmnopqrstuvwxyz";

int main(void)
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string input;
        cin >> input;
        alphabet[input[0] - 'a']++;
    }
    bool predaja = true;
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] >= 5)
        {
            cout << s[i];
            predaja = false;
        }
    }
    if (predaja)
        cout << "PREDAJA";
}
