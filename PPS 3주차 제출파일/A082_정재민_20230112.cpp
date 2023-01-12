// pps 82번 백준 10814번

// 2023.01.12 목

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    int age;
    vector<string> v;
    vector<int> t;
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        v.push_back(s);
        age = stoi(s.substr(0,2));
        t.push_back(age);
        // m.insert({stoi(s.substr(0, 2)), s.substr(3, s.length() - 3)});
    }
    sort(t.begin(), t.end());
    
}

// #include <iostream>
// #include <string>
// #include <vector>
// #include <sstream>
// using namespace std;

// vector<string> split(string str, char Delimiter)
// {
//     istringstream iss(str); // istringstream에 str을 담는다.
//     string buffer;          // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼

//     vector<string> result;

//     // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
//     while (getline(iss, buffer, Delimiter))
//     {
//         result.push_back(buffer); // 절삭된 문자열을 vector에 저장
//     }

//     return result;
// }

// int main()
// {

//     string s = "22 asdf";

//     vector<string> result = split(s, ' ');

//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i] << "\n";
//     }
// }
