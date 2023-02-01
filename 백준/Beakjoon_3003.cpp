// 백준 3003번

// 2023.02.01 수

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int arr[6];
    int c[6] = {1, 1, 2, 2, 2, 8};

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
        c[i] = c[i] - arr[i];
    }
    for (int j = 0; j < 6; j++)
    {
        cout << c[j] << " ";
    }
}