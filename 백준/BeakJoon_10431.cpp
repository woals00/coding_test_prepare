// 백준 10431번

#include <iostream>

using namespace std;

int main()
{
    int n;
    int temp;

    int student[20];

    cin >> n;

    int case_num[n];
    int cnt[n];

    for (int i = 0; i < n; i++)
    {
        cin >> case_num[i];

        cnt[i] = 0;

        for (int j = 0; j < 20; j++)
        {
            cin >> student[j];
        }

        for (int p = 19; p > 0; p--)
        {
            temp = student[p];

            for (int q = p; q >= 0; q--)
            {
                if (temp < student[q])
                {
                    // cout << "temp : " << temp << ", " << student[q] << "-> 앞이 더 큼"
                    //      << "\n";
                    cnt[i]++;
                }
            }
        }
    }

    for(int t = 0; t < n; t++){
        cout << case_num[t] << " " << cnt[t] << "\n";
    }

    return 0;
}