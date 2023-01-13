// pps b31번 백준 3135번

// 2023.01.13 금

//정답


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int p, q;
    cin >> p;
    cin >> q;

    int bet_p_to_q;

    if (p > q)
        bet_p_to_q = p - q;
    else
        bet_p_to_q = q - p;

    int input;
    cin >> input;

    int n;
    vector<int> v;

    int bet_n_to_q;
    for (int i = 0; i < input; i++)
    {
        cin >> n;
        if (n > q)
        {
            bet_n_to_q = n - q + 1;
            v.push_back(bet_n_to_q);
        }
        else
        {
            bet_n_to_q = q - n + 1;
            v.push_back(bet_n_to_q);
        }
    }
    sort(v.begin(), v.end());

    int result;

    if(bet_p_to_q < v[0])
        result = bet_p_to_q;
    else
        result = v[0];

    cout << result;
}