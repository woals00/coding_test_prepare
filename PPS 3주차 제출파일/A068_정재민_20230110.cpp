// pps 68번 백준 18258번

// 2023.01.10 화

//정답


#include <iostream>
#include <string>
#include <queue>

using namespace std;

string s;
int input;
queue<int> q;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> s;

        if (s == "push")
        {
            cin >> input;
            q.push(input);
        }
        else if (s == "pop")
        {
            if (q.size() == 0)
                cout << "-1\n";
            else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (s == "size")
        {
            cout << q.size() << "\n";
        }
        else if (s == "empty")
        {
            if (q.size() == 0)
                cout << "1\n";
            else
                cout << "0\n";
        }
        else if (s == "front")
        {
            if (q.size() == 0)
                cout << "-1\n";
            else
                cout << q.front() << "\n";
        }
        else
        {
            if (q.empty() == true)
                cout << "-1\n";
            else
                cout << q.back() << "\n";
        }
    }
}