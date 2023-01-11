// pps 53번 백준 10828번

// 2023.01.09 월

//정답

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin >> num;

    vector<int> stack = {};
    string s, cmd1, cmd2;
    int input;

    for (int i = 0; i <= num; i++)
    {
        getline(cin, s);

        cmd1 = s.substr(0, s.find(" "));
        cmd2 = s.substr(s.find(" ") + 1, s.length());

        input = atoi(cmd2.c_str());

        if (cmd1 == "push")
        {
            stack.push_back(input);
        }
        if (cmd1 == "pop")
        {
            if (stack.empty() == true)
            {
                cout << "-1" << endl;
                stack.clear();
            }
            else
            {
                cout << stack.at(stack.size() - 1) << endl;
                stack.pop_back();
            }
        }
        if (cmd1 == "size")
        {
            cout << stack.size() << endl;
        }
        if (cmd1 == "empty")
        {
            if (stack.empty() == true)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
        if (cmd1 == "top")
        {
            if (stack.empty() == true)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << stack.at(stack.size() - 1) << endl;
            }
        }
    }

    // cout << stack.at(stack.size()-1) << endl;
}