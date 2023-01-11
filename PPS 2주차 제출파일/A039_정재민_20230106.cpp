//pps 39번 leetcode valid perpect square

//2023.01.06 금

//정답


#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;
    cin >> x;
    long long n = 0;
    bool result;
    for (long long i = 0; i <= x; i++)
    {
        n = i * i;
        if (n == x)
        {
            result = true;
            break;
            cout << "!" << endl;
        }
        else{
            result = false;
        }
    }
    cout << result << endl;
}