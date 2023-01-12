// pps 79번 프로그래머스 k번째수

// 2023.01.12 목

//정답


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> array = {1, 5, 2, 6, 3, 7, 4};
    vector<vector<int>> commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
    vector<int> temp;
    vector<int> n;
    for (int i = 0; i < commands.size(); i++)
    {
        for(int j = commands[i][0] - 1; j < commands[i][1]; j++){
            // cout << array[j] << endl;
            temp.push_back(array[j]);
        }
        // std::vector<int> temp(array.begin() + commands[i][0], array.begin() + commands[i][1]);
        // cout << temp[0];
        sort(temp.begin(), temp.end());
        n.push_back(temp.at(commands[i][2] - 1));
        cout << n[i] << endl;
        temp.clear();
    }
}