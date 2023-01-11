// pps 5번 프로그래머스 스킬트리

// 2023.01.06 금

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string skill = "CBD";
    vector<string> skill_trees = {"BACDE", "CBADF", "AECB", "BDA"};
    int count = 0;
    int result = 0;

    for (int i = 0; i < skill_trees.size(); i++)
    {
        for (int j = 0; j < skill_trees.at(i).size(); j++)
        {
            if (skill_trees.at(i).at(j) == skill.at(0))
            {
                count = 1;
            }
            if (skill_trees.at(i).at(j) == skill.at(1) && count == 1)
            {
                count = 2;
            }
            if (skill_trees.at(i).at(j) == skill.at(2) && count == 2)
            {
                result++;
            }
        }
    }
    cout << result << endl;
}