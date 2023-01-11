// pps 68번 백준 18258번

// 2023.01.10 화

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int num;
    cin >> num;

    queue<int> queue = {};
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
            queue.push(input);
        }
        if (cmd1 == "pop")
        {
            if (queue.empty() == true)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << queue.front() << endl;
                queue.pop();
            }
        }
        if (cmd1 == "size")
        {
            cout << queue.size() << endl;
        }
        if (cmd1 == "empty")
        {
            if (queue.empty() == true)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
        if (cmd1 == "front")
        {
            if (queue.empty() == true)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << queue.front() << endl;
            }
        }
        if (cmd1 == "back")
        {
            if (queue.empty() == true)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << queue.back() << endl;
            }
        }
    }
}