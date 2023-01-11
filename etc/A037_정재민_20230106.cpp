// pps 37번 leetcode self-dividing

// 2023.01.06 금

//정답


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int left, right;
    string digit;
    vector<int> result;
    int count = 0;
    cin >> left;
    cin >> right;
    for (int i = left; i <= right; i++)
    {
        digit = to_string(i);
        for (int j = 0; j < digit.size(); j++)
        {
            int divisor = digit.at(j) - '0';
            if (i % divisor == 0)
            {
                count++;
            }
        }
        if (count == digit.size())
        {
            result.push_back(i);
        }
        count = 0;
    }
    std::vector<int>::iterator iter;
    for (iter = result.begin(); iter != result.end(); iter++)
    {
        std::cout << "Iterator : " << *iter << std::endl;
    }
}