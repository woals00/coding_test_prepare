// pps 40번 leetcode Determine if String Halves Are Alike

// 2023.01.07 토

//정답

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string s1, s2;
    int s1_count = 0;
    int s2_count = 0;
    s1 = s.substr(0, s.length() / 2);
    s2 = s.substr(s.length() / 2, s.length());
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1.at(i) == 'a' || s1.at(i) == 'e' || s1.at(i) == 'i' || s1.at(i) == 'o' || s1.at(i) == 'u' || s1.at(i) == 'A' || s1.at(i) == 'E' || s1.at(i) == 'I' || s1.at(i) == 'O' || s1.at(i) == 'U')
        {
            s1_count++;
        }
        if (s2.at(i) == 'a' || s2.at(i) == 'e' || s2.at(i) == 'i' || s2.at(i) == 'o' || s2.at(i) == 'u' || s2.at(i) == 'A' || s2.at(i) == 'E' || s2.at(i) == 'I' || s2.at(i) == 'O' || s2.at(i) == 'U')
        {
            s2_count++;
        }
    }
    if (s1_count == s2_count)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}