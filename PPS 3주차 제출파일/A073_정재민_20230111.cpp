// pps 73번 leetcode Fizz Buzz

// 2023.01.11 수

//정답

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> fizzBuzz;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            fizzBuzz.push_back("FizzBuzz");
        else if (i % 3 == 0)
            fizzBuzz.push_back("Fizz");
        else if (i % 5 == 0)
            fizzBuzz.push_back("Buzz");
        else
            fizzBuzz.push_back(to_string(i));
    }

    for (int i = 0; i < fizzBuzz.size(); i++)
    {
        std::cout << "Random- : " << fizzBuzz[i] << std::endl;
    }
}

// std::vector<int>::iterator iter;
// for(iter = v.begin(); iter!= v.end(); iter++)
// {
//     std::cout << "Iterator : " << *iter << std::endl;
// }